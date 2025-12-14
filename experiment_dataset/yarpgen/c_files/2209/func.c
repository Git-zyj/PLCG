/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2209
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((arr_2 [(unsigned short)12]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_3 [i_1]))))));
            arr_6 [i_1] = ((/* implicit */int) arr_1 [i_0 - 3]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_19 = ((/* implicit */_Bool) (+(3018153001830094551LL)));
                var_20 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
            }
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [(signed char)4] [i_5] = ((/* implicit */short) arr_4 [i_0] [i_1 + 4]);
                            var_21 &= ((/* implicit */short) arr_12 [i_3] [i_0] [i_3] [i_0]);
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_4] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_0] [i_0] [i_3] [i_4] [i_1 + 2]), (arr_7 [i_6] [i_1] [i_0]))))) : (min((((/* implicit */long long int) arr_4 [i_1] [(signed char)7])), (arr_9 [i_0] [i_1] [i_4] [i_4])))))) ? (((((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 1] [i_1] [i_1 - 3])) % (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 1] [i_1] [i_1 - 3])))) : (((/* implicit */int) max(((unsigned short)16582), (min(((unsigned short)35543), ((unsigned short)61614)))))));
                            arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_12 [i_1] [i_0 - 1] [i_3] [i_1 - 4]), (arr_10 [i_0] [i_0 - 1] [i_1] [i_1 + 4])))) % (((/* implicit */int) ((short) min((arr_13 [i_1]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_0]))))))));
                            var_23 = ((/* implicit */long long int) arr_12 [i_1] [i_3] [i_1] [i_1]);
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_1] [i_7] [i_1] [i_1] [(signed char)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_14 [i_0 + 1] [7LL] [i_3] [22] [22])) : (((/* implicit */int) arr_1 [i_3]))));
                            var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -2499449759103252516LL)), (10288854514599830757ULL)));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_26 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */short) arr_4 [i_0 - 2] [i_1]))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [(signed char)4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)17] [17LL])) ? (((/* implicit */int) arr_14 [24LL] [24LL] [5U] [5U] [5U])) : (((/* implicit */int) arr_19 [i_0] [(unsigned short)14] [i_0] [i_4] [21U]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48953))))))));
                            var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)48954))));
                        }
                        arr_27 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_0] [i_1])), (((((/* implicit */_Bool) min((arr_25 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 4])) : (((((/* implicit */_Bool) arr_12 [i_1] [(unsigned short)6] [i_3] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_1])) : (((/* implicit */int) arr_4 [i_4] [i_3]))))))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((arr_18 [i_0] [i_0] [(_Bool)1] [i_3] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) arr_4 [i_0] [i_0]))))));
                        var_27 += ((/* implicit */int) ((((/* implicit */_Bool) ((arr_24 [i_0] [i_1 - 2] [i_3] [i_4] [7LL]) % (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_3] [i_0 - 3] [i_1 - 1] [i_1]), (arr_10 [8LL] [i_1 - 1] [i_3] [i_1 - 3]))))) : (((long long int) min((((/* implicit */unsigned short) arr_11 [(signed char)20] [(signed char)20] [i_3] [i_3])), (arr_10 [i_4] [i_3] [i_3] [i_0]))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) arr_2 [7LL]);
        }
        var_29 = ((/* implicit */unsigned int) arr_12 [(signed char)12] [i_0] [i_0] [(signed char)12]);
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [(signed char)10] [i_9] [i_9] [(signed char)10] [i_9] [(short)4] [22U]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)16581)) > (((/* implicit */int) arr_0 [(unsigned short)20]))))) : (((/* implicit */int) (unsigned short)62160))))) ? ((~(((/* implicit */int) arr_0 [i_9])))) : (((/* implicit */int) arr_12 [(short)22] [(short)22] [2] [i_9]))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) max((((/* implicit */signed char) arr_8 [(unsigned short)2] [(unsigned short)2])), (arr_4 [i_9] [(signed char)18])))), (arr_0 [i_9])))) ? ((+(min((((/* implicit */long long int) arr_21 [i_9] [i_9])), (arr_24 [(unsigned char)1] [i_9] [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) max((arr_29 [i_9]), (arr_25 [(signed char)8] [i_9] [(signed char)8])))) ? (max((((/* implicit */long long int) 793774833)), (745036547333674184LL))) : (arr_9 [i_9] [i_9] [i_9] [i_9])))));
    }
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_15)))) - (9252)))))), ((+(((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) var_2)))))))))));
}
