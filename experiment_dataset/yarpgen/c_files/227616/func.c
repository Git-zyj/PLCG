/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227616
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-10679)), (var_14))))) * (((((/* implicit */_Bool) var_15)) ? (1037152206U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)12))))) : (max((((/* implicit */unsigned int) (signed char)-45)), (1037152206U)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)122)), (134217727U))))));
                                arr_15 [i_3] [i_3] = ((/* implicit */long long int) var_10);
                                arr_16 [i_0 - 1] [(unsigned short)6] [i_3] [i_0 + 1] [i_0] [8] = ((/* implicit */_Bool) (~(((arr_11 [i_0] [i_0] [i_0 - 3] [i_3] [i_3] [(signed char)4] [i_2]) / (arr_11 [i_0] [i_1] [i_0 + 1] [i_4] [i_4] [i_0 - 2] [i_0 + 1])))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_3] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255))))) ? (var_1) : ((+(782316001))))) & ((+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_15)))))))));
                                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) var_8))))))), (min((arr_6 [i_0 + 1] [7ULL] [i_3]), (arr_6 [i_0 + 1] [i_0 + 1] [i_2])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_19 [i_0] [(signed char)2] [i_0] = ((/* implicit */short) arr_14 [i_0 - 1] [i_5] [i_0 - 1] [i_1] [i_5] [i_5] [i_5]);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_7 [i_0 + 1] [10U] [i_0 - 3])))) ? (((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_8))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_12 [i_1] [i_5] [i_1] [(_Bool)1])))) : (-1096651919)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-28111)) - (((/* implicit */int) var_14))))), (max((var_5), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_3)))))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 -= ((/* implicit */signed char) ((short) arr_22 [i_0 + 1] [i_0 - 1] [i_0 - 3]));
                    arr_23 [i_6] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 2611315963U)))));
                    var_23 = ((((int) var_14)) << (((((((((/* implicit */int) arr_10 [(_Bool)1] [(unsigned short)8] [(_Bool)1] [i_0 + 1])) - (((/* implicit */int) (signed char)1)))) + (146))) - (21))));
                }
                arr_24 [i_0] = ((/* implicit */_Bool) ((((arr_22 [i_0 + 1] [i_0 + 1] [i_0 - 3]) >> (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))) & (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [4LL] [i_0 - 3] [4LL])) ? (((/* implicit */long long int) var_5)) : (281474708275200LL)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((var_7) == (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_3)) << (((var_1) % (((/* implicit */int) (unsigned char)128))))))));
}
