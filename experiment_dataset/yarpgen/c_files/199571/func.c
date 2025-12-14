/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199571
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */signed char) max(((-(((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) (signed char)123)))))));
        var_14 *= ((/* implicit */signed char) (+((~(arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_15 = (~(arr_1 [i_0]));
            var_16 |= ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-72)) * (((/* implicit */int) var_6))))), (((arr_5 [i_0] [i_1 + 2]) >> (((arr_5 [i_0] [6ULL]) - (14100819879740831228ULL))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) (+(min((((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_2))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) ((short) var_11)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_2 + 2] [i_0] [i_3 + 1])) / (14874921110342727890ULL))))));
                arr_13 [i_0] [4ULL] = (-(arr_7 [7ULL] [i_0]));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) (+(((((/* implicit */int) var_4)) & (((/* implicit */int) arr_3 [i_0]))))));
                            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_19 [i_0] [10LL] [i_3 - 2] [10LL] [i_2 + 1] [(signed char)5])));
                            var_20 = ((/* implicit */short) min((min((arr_7 [i_2 - 1] [i_3 + 1]), (arr_7 [i_2 - 1] [i_3 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-81))))) < (arr_7 [i_3 + 1] [i_2 + 3]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 - 2] [i_2 - 2] [i_7 + 1]))) / (arr_9 [i_2] [10ULL])));
                    var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_21 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_23 = ((arr_24 [i_2 + 2] [(signed char)7] [i_6] [i_2 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                        var_24 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_10)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((13886377852280244059ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned long long int) arr_1 [i_2 - 2]))));
                        var_26 = ((/* implicit */short) ((unsigned long long int) var_12));
                    }
                    var_27 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_12)))) | ((~(arr_4 [12LL]))));
                    var_28 = arr_5 [i_2 + 2] [i_6];
                }
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_2 + 2] [i_2 + 3])) <= (((/* implicit */int) (signed char)-87))));
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_19 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 2])))) / (var_12)));
            }
        }
    }
    var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-98)), ((+(var_9)))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
