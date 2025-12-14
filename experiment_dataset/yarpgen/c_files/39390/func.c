/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39390
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
    var_14 -= var_4;
    var_15 = var_9;
    var_16 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_12))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (-(-4940484943002860028LL)));
                var_18 -= ((/* implicit */unsigned long long int) (~(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (min((arr_3 [i_0] [(unsigned char)12] [i_0]), (((/* implicit */long long int) (signed char)28))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_4)))))) ? (((/* implicit */int) ((short) ((unsigned char) var_11)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_3 - 1] [i_3 - 1])))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_18 [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_1])) ? (0) : (((/* implicit */int) arr_0 [i_5] [i_0]))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((unsigned int) var_0)))))));
                }
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (var_10))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 3975663845U)) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (319303450U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((unsigned long long int) var_1))));
}
