/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28688
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned char) var_4);
        arr_2 [0LL] = ((/* implicit */short) ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)-30723))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_0 + 1] [i_0] [i_0] [i_0])), ((short)-30718)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2 - 1]) > (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0 + 1] [10LL] [i_0 + 1])))))) : (arr_0 [i_2 - 1]));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30722))) * (((arr_0 [i_0 - 1]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30718))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) arr_6 [i_0 + 1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) (short)-30723);
                            arr_16 [i_0] [i_1] [11] [i_3] = arr_10 [i_1] [i_2] [(short)7] [i_4];
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 8416435015034316266LL))));
                            arr_19 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)30723)) ? (((/* implicit */int) (unsigned short)24651)) : (arr_4 [i_1] [(_Bool)0]))) <= ((+(var_1)))));
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((var_8) / (arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 - 1])));
                            var_19 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_3] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)30723)) ? (((/* implicit */int) arr_22 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_22 [i_0] [6ULL] [i_0] [0] [(unsigned char)11] [i_6]))));
                            arr_24 [i_1] = ((/* implicit */signed char) var_12);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_2 - 2] [i_3] [i_6])) ? (var_9) : (arr_10 [i_1] [i_2 + 2] [i_3] [i_6])));
                            var_22 = ((/* implicit */signed char) (+((-(arr_0 [(_Bool)1])))));
                            arr_25 [i_0] [(unsigned char)2] [i_1] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30727)) >= (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((+(min((arr_21 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]), (arr_6 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)1)), (2105725857676470474LL))) < (((/* implicit */long long int) ((/* implicit */int) (short)-30723)))))))));
                }
            } 
        } 
    }
    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6019816519415872935LL)) ? (((/* implicit */int) (short)30717)) : (((/* implicit */int) var_13)))))))) : (var_7)));
}
