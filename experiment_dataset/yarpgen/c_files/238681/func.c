/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238681
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
    var_10 ^= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1497602174)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (max((((/* implicit */unsigned int) var_3)), (arr_5 [i_0] [i_1] [i_1]))))))));
                    var_12 ^= ((/* implicit */short) arr_8 [i_0] [i_0]);
                    arr_9 [i_0] [i_1] = (short)32761;
                    arr_10 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_0] [3LL]))))), ((((!(((/* implicit */_Bool) (unsigned short)16492)))) ? (arr_2 [(unsigned char)13]) : (((/* implicit */long long int) min((((/* implicit */int) var_6)), (2147483635))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_0] [i_3 + 2]))) : (var_8)));
                    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3 + 2] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_12 [i_0] [i_3 + 2] [(short)4]))));
                    arr_13 [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16492)) | (((/* implicit */int) (unsigned short)49018))));
                }
                for (short i_4 = 4; i_4 < 16; i_4 += 1) 
                {
                    arr_17 [i_0] [i_4] [(unsigned short)13] [i_4] = ((/* implicit */short) (!(((arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (short)32753)) >= (((/* implicit */int) var_6)))) ? (((/* implicit */int) arr_18 [i_6] [i_4 - 2] [i_4 + 2] [i_4 + 2])) : (((int) arr_0 [i_0] [i_1]))))) * (var_8)));
                                var_16 += ((/* implicit */short) arr_16 [i_6]);
                                var_17 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
                for (short i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                        {
                            {
                                arr_31 [(signed char)14] [(signed char)14] [(signed char)14] [i_7] = ((/* implicit */unsigned long long int) min((max((arr_2 [i_9 - 1]), (((/* implicit */long long int) arr_18 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_9 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [17LL] [i_9 - 2] [i_9 - 2] [i_9 + 1] [(unsigned short)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_12 [(unsigned short)0] [i_7 + 1] [(unsigned short)0]), (((/* implicit */unsigned short) var_5))))))) * ((~(max((var_8), (((/* implicit */long long int) arr_1 [i_7] [(_Bool)1]))))))))));
                                var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_12 [i_0] [i_7] [0U])))))) / (min((((/* implicit */unsigned int) -1980391134)), (4294967295U))));
                            }
                        } 
                    } 
                    arr_32 [i_7] [i_7] [(unsigned short)7] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_4)) >= ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)7] [i_0])) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_7 [i_7 + 1] [i_1])) - (((/* implicit */int) (short)8160)))) : ((((_Bool)1) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (unsigned short)255)))))) : (((/* implicit */int) arr_1 [7U] [(unsigned char)16]))));
                }
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49013))) >= (-4538070990394137207LL)))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (255LL)));
    var_22 = ((/* implicit */int) min((var_22), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))))))))));
}
