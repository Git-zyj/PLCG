/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219935
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_16))))) ? (min((var_12), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_6))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((var_5) - (10408288647213276313ULL)))))) - (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-10181))))) | (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_0 [15ULL]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 1] [(unsigned short)14])) : (((arr_0 [i_3]) ? (((/* implicit */int) arr_8 [i_2] [i_1] [(short)21] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 3] [i_0]))) | (arr_1 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (max((arr_5 [i_0 + 1] [i_0 + 1] [i_2] [i_3]), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_1] [i_2] [12LL])))))));
                        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0])))), ((~(((/* implicit */int) arr_0 [i_0]))))))), (((max((arr_1 [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_3 + 2] [i_1] [i_1]), (((/* implicit */unsigned short) arr_0 [i_2]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            arr_12 [i_0] [(unsigned short)18] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [12U]), (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (max((arr_9 [i_0 + 1] [i_1] [i_2] [i_3 + 3]), (((/* implicit */long long int) arr_2 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) : (arr_10 [i_0 - 1] [3] [i_0 - 1])));
                            arr_13 [i_4] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [(signed char)0] [i_2 + 4])), (arr_10 [i_0 - 1] [i_0 - 1] [i_0])))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [19ULL])) : (((/* implicit */int) arr_4 [i_2] [i_4]))))) & (max((arr_10 [i_0 + 1] [i_1] [i_2]), (arr_10 [i_0] [10] [i_0]))))) : (max((arr_11 [i_2] [i_2] [i_4 + 1] [i_4] [i_4 - 2]), (arr_11 [i_3] [i_3] [i_4 + 1] [i_4 + 3] [i_4 + 3])))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_5 + 3] [i_2])), ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2]))) : (min((((/* implicit */unsigned long long int) ((arr_8 [i_0 - 1] [(_Bool)1] [15] [i_0 - 1]) || (((/* implicit */_Bool) arr_6 [18U] [18U] [i_2 + 3] [i_3]))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_2] [(signed char)3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))) : (arr_10 [i_0] [i_0] [i_0])))))));
                            arr_18 [i_0] [(_Bool)1] [i_0] [i_3] [i_5 + 3] [i_1] = ((/* implicit */unsigned short) arr_11 [i_0 + 1] [i_3 + 1] [i_2] [12LL] [i_2 - 3]);
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_1 [3ULL])))) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_2 - 2] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [(short)12] [i_3 - 1] [i_5 - 1])))) <= (((((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_4 [10] [(unsigned char)6])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3 + 1])))) % (((/* implicit */int) ((arr_5 [i_3] [i_1] [i_2] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2]))))))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_6] [18] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10181)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */long long int) ((4157380481229571703ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14992)) | (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_24 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_0 - 1] [i_0] [i_7] [i_7] [i_7] [i_7]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 1] [i_7] [i_7] [8LL] [i_7]))))) : (min((arr_14 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_7] [i_7]), (((/* implicit */int) arr_3 [i_0 + 1] [i_7] [i_7]))))));
            arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) <= ((+(((/* implicit */int) arr_15 [i_0 - 1]))))));
            arr_26 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6065488907238322599LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (863781399U)))), (((arr_1 [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)2] [i_7] [i_0 - 1] [(unsigned short)2])))))));
        }
        arr_27 [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_9 [i_0] [(short)17] [i_0 - 1] [i_0 - 1])) - (((((/* implicit */unsigned long long int) arr_2 [i_0])) - (arr_10 [(unsigned short)20] [(unsigned char)15] [(unsigned short)13]))))) * (((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0]))) : (arr_11 [i_0] [i_0] [i_0] [10LL] [i_0]))) - (max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_10 [20ULL] [4U] [4U])))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_24 = ((/* implicit */signed char) max((((((/* implicit */int) min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_8] [i_0])))) ^ (((((/* implicit */_Bool) arr_19 [i_8] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_15 [i_0])))))), (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_15 [i_0 - 1])))) ? (((((/* implicit */int) (unsigned short)32289)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-30507))))))));
            var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((((_Bool)1) && ((_Bool)1))), (((arr_5 [i_0] [11U] [i_8] [i_8]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8]))))))))) * ((((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_8] [i_8] [(signed char)18])))) ? (max((arr_9 [i_8] [i_8] [i_8] [(unsigned char)17]), (((/* implicit */long long int) arr_16 [i_8] [i_8] [3U] [i_0 + 1] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)18] [(_Bool)1] [(short)18] [(_Bool)1])))))));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_16))));
}
