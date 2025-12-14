/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30489
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
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((unsigned int) 0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1079007585)) ? (-979731374) : (((/* implicit */int) (unsigned char)0))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((0) | (((/* implicit */int) (short)-1745))))));
    }
    var_19 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_14 [i_1 + 1] [i_3 + 3] [i_1 + 1] [i_1 + 1] [(unsigned char)7]) >> ((((+(((/* implicit */int) arr_1 [i_3] [i_4])))) - (28925))))))));
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2] [i_4] [i_5])))))));
                                var_22 = arr_1 [i_1] [i_1];
                                var_23 *= ((/* implicit */signed char) arr_5 [i_2] [(unsigned char)2]);
                                arr_16 [i_1] [i_1] [i_3 + 1] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2]))));
                            }
                            var_24 ^= ((/* implicit */long long int) ((short) (+(max((((/* implicit */unsigned int) var_13)), (arr_4 [i_4]))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 2] [i_2])) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2])))), (((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 1] [i_1 - 1])) * (((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
