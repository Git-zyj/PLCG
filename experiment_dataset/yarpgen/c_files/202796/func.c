/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202796
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
    var_20 = ((((((/* implicit */int) (short)-8056)) + (2147483647))) << (((((/* implicit */int) var_13)) - (1))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)121)) - (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8068)) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)121))))))));
                    var_23 = ((/* implicit */short) (unsigned short)26366);
                    var_24 = (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned char)134)))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */int) (short)-27824)) : (((/* implicit */int) (signed char)15))))) : (((((((/* implicit */_Bool) var_4)) ? (1152851135862669312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1536))) : (arr_5 [i_0] [i_1 + 3] [i_3]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) 8422254934652603663LL))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) var_3);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (signed char)124);
                            var_27 = ((((/* implicit */int) (unsigned char)74)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5 - 1] [i_3] [i_0 - 1]))))));
                            arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)8050))) + (arr_10 [i_3] [i_4 - 1] [i_5]))) << (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_5] [i_3] [i_3] [i_1 - 1] [i_1 - 1])) % (((/* implicit */int) arr_13 [i_5] [i_4 - 2] [i_4] [i_1 + 1] [i_1]))));
                            var_29 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5 - 1] [i_3] [i_3] [i_3] [i_0 - 1])))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            arr_21 [i_6 - 1] [i_0] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((arr_10 [i_1] [i_3] [i_6 + 2]) - (875854273U)))));
                            arr_22 [(unsigned char)1] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121))))) ? (((/* implicit */long long int) ((int) (unsigned short)56861))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_3] [i_6])) : (-8907520146306271315LL)))));
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((unsigned char) (short)31))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-8046)) ^ ((~(((/* implicit */int) (unsigned short)0)))))) >> (((((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) (unsigned short)37133)) : (((/* implicit */int) (signed char)-93))))) ? ((~(arr_4 [i_7]))) : (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_7])))) - (10827969962438575515ULL)))));
                                var_31 = ((/* implicit */unsigned long long int) arr_13 [i_8 - 2] [i_8] [i_8] [i_8 - 1] [i_8 - 1]);
                            }
                        } 
                    } 
                }
                var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -29LL)) ? (((/* implicit */int) (short)24969)) : (((/* implicit */int) (short)-8055))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (arr_7 [i_1 + 1] [3ULL] [i_0])))))));
                var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_0 [i_0 + 2])), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-27196)), (9223372036854775807LL)))) ? ((-(8907520146306271341LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_1 + 3] [i_1 + 2])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
}
