/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36805
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            var_14 ^= ((/* implicit */unsigned long long int) var_11);
                            arr_14 [i_0] [i_3] [i_2] [i_3] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) ((1419867196626193568ULL) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_4 + 2])))))));
                        }
                        arr_15 [i_2] = ((/* implicit */short) max((max((4294967269U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1419867196626193581ULL)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))))), (((/* implicit */unsigned int) var_4))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_3])) ? (4294967269U) : (27U)))))) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5421)))))));
                    }
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */short) (((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(short)9])))) <= ((~(((/* implicit */int) var_8))))))), (arr_17 [i_0] [i_0] [i_2] [(_Bool)1])));
                        arr_19 [i_0] [i_1] [i_2] [(short)8] = ((((/* implicit */_Bool) arr_8 [i_0] [i_5 - 1] [i_2])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) - (arr_7 [i_1])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_5 + 2] [i_5 + 2]), (arr_5 [i_1] [i_5 + 2] [i_1]))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_6] = ((((_Bool) ((((/* implicit */_Bool) 2927300852U)) ? (-1269480658) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 11696876454772411823ULL)) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_5] [i_1] [9U])) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5] [i_5 + 2] [i_5] [i_2])))) : (((/* implicit */int) arr_2 [i_0])));
                            var_19 = ((/* implicit */short) arr_12 [i_0] [i_1] [i_2] [(unsigned short)7] [i_2]);
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)38)), (arr_17 [i_1] [i_2] [i_5 + 2] [i_6])))) ? (((/* implicit */int) (unsigned short)60)) : ((+(((/* implicit */int) arr_13 [i_1] [i_2] [i_5] [i_6])))))) | (((/* implicit */int) min((((/* implicit */short) arr_21 [i_5 + 2] [i_1] [i_6] [i_1] [i_6] [i_0])), ((short)-32757))))));
                        }
                        var_21 = ((/* implicit */_Bool) ((((((1271623523U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)7]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)204)))))))) ? (((max((0ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_5])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_17 [i_0] [(short)6] [i_2] [i_5])))) ? (arr_20 [i_5] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (unsigned char)51)))))))))));
                    }
                    arr_23 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)103)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_21 [i_2] [i_2] [(short)8] [i_1] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) > (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_23 = ((/* implicit */short) var_5);
    var_24 = (_Bool)1;
}
