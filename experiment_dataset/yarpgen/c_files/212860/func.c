/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212860
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
    var_14 = ((/* implicit */unsigned short) (short)26870);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) max((((/* implicit */unsigned int) var_5)), (var_13)))) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((long long int) 285438955)))))));
                    arr_9 [i_2 + 3] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_2 + 3] [i_2 - 2])), (arr_1 [i_2 + 3]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)65535))))), (max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_2 - 2] [i_3] [i_3 + 1])))));
                        arr_13 [i_0] [2LL] [2LL] [i_2 + 4] [i_3] = ((/* implicit */long long int) arr_4 [i_3] [i_1] [i_0]);
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2]))));
                    }
                    for (short i_4 = 3; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [11LL] [i_2] [(unsigned char)9])) ? (((unsigned long long int) (signed char)-85)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3704))))), (min((((/* implicit */int) (short)-26870)), (var_1))))))));
                        var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_10 [i_4 - 3] [(_Bool)1] [(_Bool)1] [i_4] [i_4])))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26845))) : (2647570308U))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)26870))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_5))));
                    }
                    for (short i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [1ULL] [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_5] [i_2 + 3] [i_5] [(_Bool)1]);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24404))) >= (((((/* implicit */_Bool) arr_4 [(short)12] [i_5 + 1] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26870))) : (arr_4 [5ULL] [i_5 - 1] [i_5])))));
                        arr_20 [i_1] |= ((/* implicit */unsigned short) ((((arr_16 [i_2 + 4] [i_2 + 4] [0LL]) || (arr_16 [i_0] [i_2 - 1] [i_5]))) || (((/* implicit */_Bool) var_12))));
                        var_19 = ((((/* implicit */_Bool) ((unsigned short) ((14069870011772327486ULL) * (arr_17 [i_0] [i_0] [(unsigned short)0]))))) ? (min((((/* implicit */unsigned int) (signed char)-1)), (min((134201344U), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_5] [i_5 - 1] [i_2 + 1]) >= (((/* implicit */unsigned long long int) var_9)))))));
                        arr_21 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) 3637794650447691395ULL)) ? ((-(min((var_7), (((/* implicit */unsigned long long int) 332640093U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 + 3] [i_5 - 2] [i_2 - 2]))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)-26845))));
}
