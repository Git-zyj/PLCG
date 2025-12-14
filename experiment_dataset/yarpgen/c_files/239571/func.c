/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239571
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) 2147483616)) : (3179391097U)))))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_15)), ((-(max((((/* implicit */unsigned long long int) var_4)), (var_9)))))));
    var_20 *= ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (var_15)));
    var_21 *= ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_10 [i_3] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 412592530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 454829100761870200ULL)))))) : (0ULL)))) ? (((/* implicit */unsigned long long int) -1192591073)) : (((unsigned long long int) 18446744073709551600ULL))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) max((((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_3]))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */int) (!(((((long long int) 8587837440ULL)) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_2 [i_0 - 2] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((9919368844439406724ULL), (((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_0 - 2] [i_2]))))) && ((!(((/* implicit */_Bool) 13441852541527687148ULL)))))))) : (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])))))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_4 [i_0])))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            arr_21 [i_6 - 1] [i_1] [i_0] [i_0] [3U] [3U] = ((/* implicit */unsigned char) ((var_8) > (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0 - 2] [i_5 + 1] [i_6 - 1] [i_6 - 2]))));
                            arr_22 [i_0] [(_Bool)1] [3LL] [3LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (signed char)-45)) + (76)))))) > (arr_20 [i_0] [i_0] [i_0] [i_0] [i_6])));
                        }
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_0 - 3] [i_1] [i_2 - 1] [i_7] [i_2 - 1] [i_5 + 1] [7U])) ? (arr_23 [i_7 + 2] [1ULL] [i_1] [i_2 + 1] [i_2 + 3] [i_1] [i_0 - 2]) : (arr_23 [i_0] [i_0] [i_1] [i_0] [i_5] [i_0] [i_7 - 1]))) / (min((arr_23 [i_0] [i_1] [i_1] [i_1] [i_5 + 4] [i_5 + 4] [i_5 + 4]), (arr_23 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0 - 3])))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)16383));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (7U) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])))))))) >= (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))))));
                        }
                        for (int i_8 = 3; i_8 < 9; i_8 += 4) 
                        {
                            var_27 *= ((/* implicit */unsigned char) arr_29 [i_0 + 2] [(short)10] [i_2 - 1] [(_Bool)1] [i_8 + 4]);
                            arr_30 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_8 - 1] [i_0]))) & (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [(unsigned char)6] [i_8 + 1] [i_8])) : (2147483647))))));
                            var_28 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (arr_18 [12LL] [i_1] [12LL]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))))));
                        }
                        var_29 &= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                        arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0 - 2] [(unsigned char)12])), (min((((((/* implicit */_Bool) 3928872352218184292ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_4 [i_5]))), (arr_14 [(unsigned char)9] [i_1] [(unsigned char)9] [(unsigned char)12])))));
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-1730196201))))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 7963573912109968438LL)) && (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
