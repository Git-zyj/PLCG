/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20797
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
    var_18 += ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((unsigned long long int) 14685826725387899786ULL)) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (var_12)))))) : (((unsigned long long int) ((((/* implicit */_Bool) 4294967289U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))));
    var_19 &= ((unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) | (4294967295U)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_12);
                                var_20 = ((/* implicit */_Bool) var_4);
                                arr_17 [i_1] [(_Bool)1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4294967282U)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_6 [i_1] [i_2]))))) : (((/* implicit */int) ((signed char) (_Bool)0)))));
                                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)78)), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (22U))), (((/* implicit */unsigned int) min(((unsigned char)171), (((/* implicit */unsigned char) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned char)84)), (var_8))), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) var_1)))))));
                    var_23 = ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_1] [i_2] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_17)))))) ? (619889083U) : (min((max((var_4), (((/* implicit */unsigned int) (unsigned char)252)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4177029535051231526LL))))))));
                    var_24 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (_Bool)0)), (min((4297121054470291975ULL), (((/* implicit */unsigned long long int) 4933218681221671112LL)))))), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (4933218681221671114LL))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_8))));
}
