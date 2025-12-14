/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28483
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9223372036854775784LL)))))) ? ((+(2325086136U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_1] [i_2] [i_1] [i_2])), (((arr_4 [i_2] [i_2] [i_2] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_2] [i_2] [i_2]))))))));
                    var_17 = (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2 + 1])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_6) + (((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */unsigned int) (-(2147483631)))) : (var_15)))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) -9223372036854775784LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (-9223372036854775784LL))) : (((/* implicit */long long int) min((var_7), (var_7))))))));
}
