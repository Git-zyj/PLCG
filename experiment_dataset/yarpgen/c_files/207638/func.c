/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207638
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */int) (unsigned short)2047)) - (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_4 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned short)2067)))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)511))) ? (((/* implicit */int) ((_Bool) (unsigned short)63489))) : ((-(((/* implicit */int) (unsigned char)41))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-48)) ? ((~(((/* implicit */int) (signed char)63)))) : ((~(((/* implicit */int) var_8))))))));
}
