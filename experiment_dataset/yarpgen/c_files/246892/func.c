/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246892
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (((((+(var_0))) + (2147483647))) << (((max(((~(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_1))))))) - (1145464266254293989ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_11 [i_4 + 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_10))));
                                var_18 |= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_1 + 1])) << (((((/* implicit */int) arr_2 [i_1 + 1])) - (32594))))), (((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1 + 1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        var_20 = arr_5 [i_0] [i_0] [i_2] [i_5 - 2];
                        var_21 = ((/* implicit */long long int) arr_2 [i_0]);
                        var_22 *= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_14)) || (arr_10 [i_0] [i_1 - 1] [i_2] [i_5 + 1] [i_2]))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_14))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            arr_20 [i_0] [i_6] [i_2] [i_6 - 1] [i_2] [i_7 + 1] = ((/* implicit */_Bool) max((((((var_5) ? (var_0) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) ((_Bool) var_15))))), (((/* implicit */int) (unsigned char)9))));
                            arr_21 [i_6] [i_1] [i_1] [i_1] [i_7 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_19 [i_7] [i_6 - 1] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_5))))));
                            arr_23 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) (+(((long long int) ((var_2) / (((/* implicit */int) (unsigned char)251)))))));
                        }
                        var_23 = max((arr_8 [i_6] [i_6 - 1] [i_2] [i_1 - 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((short) arr_12 [i_1 - 1] [i_6 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */unsigned char) var_5);
}
