/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21869
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83)))))) : ((-(((((/* implicit */_Bool) -2LL)) ? (28LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0 - 1])), (((int) arr_0 [i_0 - 1] [i_1 + 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((_Bool) -784962129));
    var_18 -= ((/* implicit */unsigned long long int) var_3);
    var_19 = ((/* implicit */unsigned char) ((long long int) (!((!(((/* implicit */_Bool) (signed char)7)))))));
}
