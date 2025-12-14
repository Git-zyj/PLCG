/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44119
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) var_8)), ((-(arr_3 [i_0] [i_0]))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((min((((67108863LL) / (var_1))), (min((arr_10 [i_3] [i_2 + 2] [(short)8] [i_0]), (arr_14 [i_0]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_9 [i_4] [i_2 + 2] [i_1])))))) >= (arr_10 [i_1] [i_0] [i_4 + 1] [i_3 - 1]))))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2] [0] [i_2])) ^ (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2])))))))));
                            arr_15 [i_0] [i_0] [1ULL] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [i_1] [i_2] [i_3 - 1])) : (((unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_3] [4LL] [i_4])))) > (((((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551604ULL))) + (5366732603379695480ULL)))));
                        }
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_2) + (((/* implicit */long long int) arr_12 [i_0])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_19 [17LL] [i_3] [17LL] [i_1] [4] |= ((/* implicit */unsigned char) arr_14 [i_1]);
                            var_22 ^= ((/* implicit */int) ((unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)0] [i_5]))))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_3 [6U] [i_1])))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_2]))) : (arr_5 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (((((/* implicit */unsigned long long int) arr_14 [i_1])) ^ (10120938056617043015ULL))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (10120938056617043019ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)9] [i_2])))))));
                            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)17] [i_0])) + (((/* implicit */int) arr_18 [i_0] [16LL] [i_2] [i_3 + 1] [i_6] [i_6]))))));
                        }
                    }
                    var_26 = ((/* implicit */short) (((-(((/* implicit */int) arr_21 [(signed char)14] [i_1] [i_1] [i_2])))) / (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
                    var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8325806017092508608ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [5LL]))) : (1016007383U))))))), (((((/* implicit */_Bool) arr_22 [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [6]) <= (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((10120938056617043019ULL) / (((/* implicit */unsigned long long int) arr_12 [i_2]))))))));
                    arr_24 [i_0] [i_1] [i_2] [i_2 + 2] = arr_6 [7U] [(signed char)10] [7U];
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_5);
}
