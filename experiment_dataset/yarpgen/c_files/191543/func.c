/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191543
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
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [8U] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
            arr_6 [15LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((1146051013), (((/* implicit */int) ((((/* implicit */unsigned int) ((int) -724787426))) < (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5007))) : (3965200343U))))))));
            arr_7 [i_0 + 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0 - 3])))) + (((/* implicit */int) ((short) arr_3 [i_0 - 3] [17] [i_0])))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) 406209484246391747ULL);
            arr_10 [i_0] = ((/* implicit */long long int) (+(arr_9 [i_0])));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_13 [i_0 - 1] [i_0 - 1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))))));
            var_19 = ((/* implicit */long long int) var_12);
        }
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) arr_8 [i_0] [i_4]);
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((signed char) arr_2 [i_0]));
            var_21 -= ((/* implicit */short) min((var_5), (((/* implicit */unsigned char) arr_15 [i_0] [i_0]))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_22 = ((/* implicit */_Bool) arr_8 [i_0] [i_5]);
            arr_19 [i_5] = ((((/* implicit */int) arr_15 [i_0 - 3] [i_0])) << (((((/* implicit */int) arr_15 [i_0 + 2] [i_5])) - (69))));
        }
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((arr_14 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4LL))))))));
            arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(unsigned char)21])) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_6])))) : (((unsigned long long int) var_0))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) + (724787408)));
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */short) min((((((/* implicit */int) var_7)) + (var_16))), (max((((/* implicit */int) (unsigned char)148)), (((((/* implicit */_Bool) (short)12087)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_7]))))))));
            var_26 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned short)14227)))))))) + (((/* implicit */int) arr_2 [i_0]))));
            arr_26 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_7] [i_7])) && (((/* implicit */_Bool) -724787408))))) != (((/* implicit */int) arr_24 [i_0 - 2] [i_0 - 2] [i_7])))) ? (1757984849) : (((/* implicit */int) var_6))));
        }
        arr_27 [(_Bool)1] [i_0 - 4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0]))))), (((unsigned short) arr_25 [i_0] [i_0] [i_0]))))), (max((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3233444178U))), (arr_14 [i_0])))));
        var_27 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_17 [i_0 - 3])), (arr_25 [i_0 - 3] [i_0 - 3] [i_0]))) / (arr_3 [i_0] [i_0] [i_0])));
    }
    var_28 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        for (unsigned int i_9 = 4; i_9 < 12; i_9 += 3) 
        {
            {
                var_29 *= ((/* implicit */unsigned short) (short)12848);
                var_30 = ((/* implicit */unsigned char) arr_15 [i_8] [i_8]);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) arr_29 [i_8] [i_8]);
                        var_32 ^= ((/* implicit */unsigned short) arr_36 [i_8] [i_8] [i_10] [i_11 - 1]);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_8] [i_9] [13ULL])) + (((/* implicit */int) arr_33 [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((-724787412) * (((/* implicit */int) arr_24 [i_8] [i_8] [i_8]))))) : (arr_29 [i_8] [i_9])));
                    }
                    var_34 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_33 [i_10] [i_10])) / (((/* implicit */int) arr_33 [i_10] [i_10]))))));
                }
            }
        } 
    } 
}
