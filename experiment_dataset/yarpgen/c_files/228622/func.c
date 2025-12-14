/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228622
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */int) (short)-9082)), (-50866377)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -50866376)) ? (50866377) : (50866382)));
                arr_8 [i_0] [i_1 - 2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [(signed char)0] [i_2]), (((/* implicit */unsigned short) arr_3 [i_1]))))) * (min((50866376), (((/* implicit */int) arr_6 [6]))))))) ? (((unsigned long long int) min((((/* implicit */int) arr_6 [(signed char)5])), (-50866377)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_16 = -50866377;
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_12 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                arr_13 [i_3] [i_3] = ((/* implicit */int) ((signed char) ((signed char) arr_9 [i_1] [6ULL])));
                arr_14 [3] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_4 [1U])) >= (arr_1 [i_0])))));
            }
            arr_15 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0])) : (min((((/* implicit */int) arr_6 [i_0])), (50866375))))), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_1] [i_1] [i_0]))))))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_17 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */short) arr_0 [i_5])), (arr_11 [i_5]))))), (arr_9 [i_1] [i_5])));
                    var_18 = ((/* implicit */int) min((max((arr_16 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_4]), (arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]))), (((/* implicit */signed char) ((-50866376) == (50866376))))));
                }
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -50866376)))))) ^ (((long long int) arr_2 [i_0] [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_0] [i_4] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */short) ((max((min((((/* implicit */unsigned int) arr_18 [i_6] [i_4])), (arr_10 [(unsigned char)1] [i_1 + 1] [i_4] [i_6]))), (((/* implicit */unsigned int) max((arr_19 [i_4]), (((/* implicit */int) arr_3 [i_4]))))))) << (((((int) -50866377)) + (50866395)))));
                        var_20 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_0] [i_4] [i_4] [i_4] [i_6] [i_4]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_4])) || (((/* implicit */_Bool) arr_2 [i_7] [i_7]))))) : (min((-50866377), (50866374))))));
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) arr_9 [i_0] [i_0])), (-50866359))))), (((long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (-50866376) : (-50866376))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */int) max((arr_26 [(signed char)3] [i_6] [i_4] [i_4] [1U] [(unsigned char)1]), (((/* implicit */short) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_4] [i_1])) ? (arr_17 [i_4]) : (-50866372)))))), (((unsigned int) arr_2 [2] [i_4]))));
                        var_23 = ((/* implicit */unsigned char) ((max((arr_29 [i_1 - 2] [i_4] [i_1 + 1] [i_4] [i_1]), (((/* implicit */long long int) arr_26 [i_1 - 2] [i_1] [i_4] [i_4] [i_1] [i_1])))) / (((/* implicit */long long int) min((50866383), (((50866356) & (50866376))))))));
                    }
                }
                arr_30 [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0])), (arr_17 [i_4])));
                arr_31 [i_4] [i_4] [i_4] = ((unsigned int) ((unsigned int) min((((/* implicit */int) arr_6 [i_1])), (50866376))));
            }
        }
        var_24 -= ((/* implicit */unsigned int) min((-50866377), (50866394)));
        var_25 -= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [(unsigned char)0] [(unsigned char)0])), (arr_10 [i_0] [i_0] [i_0] [i_0])))), (min((arr_25 [i_0] [i_0] [(signed char)6] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))), (min((((/* implicit */long long int) ((arr_17 [(short)6]) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (56377)))))), (max((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [8U])), (arr_25 [i_0] [i_0] [0U] [8] [i_0])))))));
    }
    var_26 |= ((/* implicit */unsigned int) ((long long int) ((min((var_6), (-50866376))) == (((/* implicit */int) var_2)))));
}
