/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228808
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_7);
        var_13 = ((/* implicit */unsigned int) (-(((unsigned long long int) var_11))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((int) ((int) arr_3 [i_1])));
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 2096128U))));
            arr_11 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_6)) >= (var_7))));
            arr_12 [3ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) var_3))))) >= (var_12)));
        }
        arr_13 [i_1] = ((((((/* implicit */_Bool) ((2147483641) >> (((2096128U) - (2096109U)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_12)))))) ? (((/* implicit */long long int) ((var_9) >> (((((unsigned int) arr_5 [i_1])) - (27341U)))))) : (((arr_1 [i_1]) >> (((((/* implicit */int) var_11)) - (126))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((arr_8 [i_3 + 4] [i_3 + 2] [i_3 - 1]) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (2147483641))) + (26443)))));
            arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((arr_14 [i_3]) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))));
            var_17 = (!(((/* implicit */_Bool) var_7)));
            var_18 = ((arr_17 [i_1] [i_3 + 2] [i_1]) % (arr_2 [i_3 - 1]));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_19 = min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) arr_16 [i_1] [i_4] [i_1]))))));
            var_20 = ((/* implicit */int) min((((/* implicit */long long int) 2147483641)), (9223372036854775807LL)));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) var_10);
                    arr_26 [(signed char)3] [i_5] [i_5] = ((((/* implicit */_Bool) (-(arr_8 [i_5 + 2] [i_6] [(_Bool)1])))) ? (33554400LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1]))) : (2096137U))))))));
                    arr_27 [15ULL] = ((/* implicit */long long int) arr_5 [i_5]);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) var_7);
    var_23 -= ((/* implicit */unsigned char) ((int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))), (((long long int) (-9223372036854775807LL - 1LL))))));
    var_24 = ((/* implicit */_Bool) var_8);
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (min((281474943156224ULL), (((/* implicit */unsigned long long int) 1200723375U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
