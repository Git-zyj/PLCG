/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190834
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
    var_12 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_8 [i_0] [i_1]);
                    arr_11 [(_Bool)1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned short)65534), ((unsigned short)65535))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (max((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)65534))))))))));
}
