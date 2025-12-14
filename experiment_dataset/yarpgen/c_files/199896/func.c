/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199896
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
    var_14 ^= ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) var_1);
                arr_6 [i_0] [i_1] = ((/* implicit */short) (+(arr_0 [i_0 - 1] [i_0])));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_1] [i_2] &= ((/* implicit */int) var_11);
                    arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63907))) | (4611686018427387904ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 - 2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((int) arr_12 [i_2] [i_2] [i_0] [i_2 + 2] [i_0])) >> (((max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_2] [i_3])), (var_1))) - (((/* implicit */unsigned long long int) arr_3 [i_1] [i_3] [i_4]))))));
                                var_15 ^= ((/* implicit */short) ((((((/* implicit */int) ((signed char) 4090614439U))) % (((/* implicit */int) (signed char)35)))) | ((+(((/* implicit */int) var_7))))));
                                var_16 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((max((arr_15 [i_5 + 1] [i_2 + 1] [i_1] [i_1] [i_1]), (((/* implicit */int) (signed char)-9)))), (((/* implicit */int) (_Bool)1))));
                                var_18 = ((unsigned char) arr_4 [i_0 - 2]);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((min((((((/* implicit */int) (unsigned short)970)) * (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)32625)))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                }
                var_20 = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0 - 3]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (_Bool)1)), (var_4))), (((/* implicit */long long int) ((int) var_2)))))), (((((/* implicit */unsigned long long int) var_6)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) / (13835058055282163711ULL)))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((4611686014132420608LL), (((/* implicit */long long int) (signed char)-6))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((signed char)102), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_11)), (var_12))))))))));
}
