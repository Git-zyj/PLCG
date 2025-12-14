/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32417
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
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (0LL)))) ? ((((_Bool)1) ? (var_0) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (var_11) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-5154317904031081060LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 5154317904031081060LL))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) -5154317904031081073LL))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1 + 1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 2] [i_0] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 1] [7] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) -5154317904031081061LL)) ? (1193161949U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17819)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) ((short) var_4));
    var_20 = ((/* implicit */unsigned short) var_12);
}
