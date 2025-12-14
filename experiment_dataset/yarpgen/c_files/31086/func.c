/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31086
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
    var_19 = max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (unsigned char)82)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_11 [(unsigned char)7] [11U] [4LL] [11U] [i_4] [4LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 0ULL))) * (((/* implicit */int) arr_1 [(_Bool)0] [(short)11]))));
                                var_20 = ((/* implicit */unsigned long long int) max(((unsigned char)182), ((unsigned char)173)));
                                arr_12 [i_1] [i_1] [8LL] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)80)) * (((/* implicit */int) (unsigned char)209))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)20] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)81));
                                arr_23 [i_0] [i_1] [i_6] [i_0] [7ULL] [i_5] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_5]);
                            }
                        } 
                    } 
                    arr_24 [i_0] [(unsigned char)11] [(_Bool)1] [i_5] = ((/* implicit */_Bool) ((unsigned char) var_5));
                    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_0] [i_1 - 1] [0ULL] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_22 [4ULL] [i_1] [6ULL] [i_9] [12ULL] [i_9]))))))) && (((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_2))))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max((arr_20 [i_8 - 1] [18] [i_1 - 1] [i_9] [i_8 - 1]), (arr_20 [i_8 - 1] [18ULL] [i_1 - 1] [18ULL] [17ULL]))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)156)))) : (max((((arr_25 [(unsigned char)18] [i_1] [i_8]) ^ (((/* implicit */int) arr_7 [(_Bool)1] [15] [i_8] [(_Bool)1])))), (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8 + 2] [i_8]))))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (~(((arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]) >> (((((/* implicit */int) arr_9 [16ULL] [(_Bool)1] [i_8 + 1] [i_1 + 1] [i_1 + 1] [i_0])) - (141)))))));
                        arr_36 [9] [9] [(_Bool)1] [(_Bool)1] [9] = ((/* implicit */int) max((min((267386880U), (((/* implicit */unsigned int) (short)25253)))), (((/* implicit */unsigned int) arr_26 [i_1 - 1] [i_1 + 1] [i_1] [i_8 - 2]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_24 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1 - 1] [i_1] [(unsigned short)0])) ? (((/* implicit */int) ((arr_2 [(_Bool)1] [(_Bool)1] [i_8]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82)))))) : ((~(var_16)))))), (((((/* implicit */_Bool) min((arr_30 [i_0] [5ULL]), (((/* implicit */unsigned char) var_12))))) ? (((/* implicit */unsigned long long int) arr_25 [i_0] [(_Bool)1] [i_8 - 1])) : (min((arr_16 [14U] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_17)))))));
                            arr_41 [i_0] [7ULL] [i_8 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_1 + 1] [i_8] [i_11]))) ? (max((((/* implicit */int) var_12)), (arr_25 [i_0] [i_1 - 1] [i_8 + 1]))) : (((arr_25 [i_0] [i_1 - 1] [i_8 + 2]) | (arr_25 [i_1] [i_8] [i_11])))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            arr_44 [i_0] [i_0] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_8 - 1] [i_8 + 1] [i_8])) ? (arr_2 [i_8 + 1] [i_8 + 1] [i_8]) : (arr_2 [i_8 + 2] [i_8 - 1] [i_8]))) != ((-(arr_2 [i_8 + 2] [i_8 + 2] [i_8])))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) - ((+(((((/* implicit */_Bool) 11170371701486196506ULL)) ? (arr_4 [i_0] [13ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                            arr_45 [i_0] [i_12] [i_12] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_43 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1]))))));
                            arr_46 [18ULL] &= var_0;
                            arr_47 [i_12] [(short)18] [i_12] [(_Bool)1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_1 - 1] [i_8 - 1])) ^ (((/* implicit */int) arr_30 [i_1 + 1] [i_8 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), (max((var_0), (var_15))))))) : (((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? ((-(5299136515291445772ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((var_8) ? (((arr_16 [i_0] [(unsigned short)11] [i_8] [i_13]) >> (((/* implicit */int) var_4)))) : (((/* implicit */unsigned long long int) ((arr_40 [i_0] [(unsigned char)4] [12] [i_10] [i_13]) << (((arr_48 [i_0] [i_0] [(unsigned char)4]) - (2003505473U)))))))), (18446744073709551615ULL))))));
                            arr_52 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_5 [i_0] [i_1 - 1] [i_8] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)81)))) : (max((((/* implicit */unsigned long long int) var_13)), (arr_16 [i_0] [i_1] [i_10] [i_13 - 1]))))), (max((17076315370290108571ULL), (max((var_7), (70368744177663ULL)))))));
                        }
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_54 [i_1 - 1] [i_1] [i_14] [(unsigned char)0])), (var_18)))) ? (((/* implicit */long long int) max((-1347981555), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (1069547520U))))))) : (max((((/* implicit */long long int) 0U)), (6888079730607395115LL))))))));
                            arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((unsigned short)480), (((/* implicit */unsigned short) (short)11852))));
                        }
                    }
                    arr_57 [1U] [i_1 - 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_26 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) ? (((13147607558418105844ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_30 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_3 [i_8] [i_8])), (var_14))))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_1))));
    var_29 = min((8823906399188278956ULL), (((/* implicit */unsigned long long int) ((((int) 1U)) | (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_5)))))))));
}
