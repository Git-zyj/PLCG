/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36339
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
    var_16 |= ((((/* implicit */int) var_7)) | (((((/* implicit */int) ((unsigned short) var_9))) & (((/* implicit */int) (short)8108)))));
    var_17 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_15)))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_0))))) : ((~(-794786780)))))));
    var_18 -= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] |= ((/* implicit */int) arr_1 [i_0] [i_1 - 1]);
                var_19 = ((/* implicit */short) min((var_19), (var_0)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))))) ? (((min((((/* implicit */unsigned long long int) (unsigned short)56942)), (3591334969969889977ULL))) + (((/* implicit */unsigned long long int) (-(1590259975)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3])))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_20 -= min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8576)) <= (((/* implicit */int) (_Bool)1)))))) != (min((var_4), (((/* implicit */unsigned int) var_2))))))), (var_8));
                                var_21 += ((/* implicit */int) (unsigned short)8588);
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned short) (~(((-1) & (((/* implicit */int) (short)-4))))));
                                var_24 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52010)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))), (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_5]) - (((/* implicit */unsigned long long int) 0U))))))));
                                var_25 *= ((unsigned long long int) max((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1])));
                                var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)48332)), (993006772225231802ULL)))))))));
                            }
                            var_27 *= ((/* implicit */_Bool) var_4);
                            var_28 -= ((/* implicit */short) max((((18446744073709551615ULL) ^ (arr_1 [i_0] [i_1]))), (max((arr_1 [i_3] [11]), (((/* implicit */unsigned long long int) 42355479))))));
                            arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(arr_5 [i_0] [i_1] [i_3])));
                        }
                    } 
                } 
            }
        } 
    } 
}
