/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30909
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) (unsigned short)224);
        var_18 = ((/* implicit */long long int) var_1);
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_4 [i_2]) - (arr_4 [i_2]))))));
                arr_10 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_1])) == (var_7)));
                var_20 &= ((/* implicit */_Bool) (-((~(var_6)))));
                arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
            }
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_5 [i_4]))))), (min((((long long int) (_Bool)1)), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))))))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (~(arr_4 [i_1])));
                    arr_16 [i_1] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)244)) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (unsigned short)224)) ? (((/* implicit */int) arr_8 [i_5] [i_1] [i_1])) : (arr_15 [i_1 + 1] [i_1] [i_2] [i_4] [i_5] [i_2])))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_19 [i_1] [i_4] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65299)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                    arr_20 [i_6] [i_4] [i_4] [i_1 + 1] |= ((/* implicit */short) ((((/* implicit */int) (signed char)-46)) - (arr_14 [i_2] [i_4] [i_4] [i_1 + 1])));
                    arr_21 [i_1 + 1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned short) (+(((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))));
                    var_23 = var_12;
                }
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_26 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1]))) : (arr_22 [i_1 - 1] [i_1] [i_1 + 1])))) ? ((-(arr_22 [i_1 - 1] [i_1] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_8))))))));
                var_24 = ((/* implicit */int) arr_7 [i_2] [i_1]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                arr_29 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((unsigned long long int) -1319066799)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65306)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14021)))))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)244)) ? (var_12) : (((/* implicit */int) var_1))))) ? (max((var_4), (((/* implicit */long long int) var_8)))) : (max((((/* implicit */long long int) var_0)), (arr_22 [i_1 - 1] [i_2] [i_8]))))))))));
                arr_30 [i_8] [i_2] [i_1] = ((/* implicit */signed char) arr_3 [i_8]);
                var_26 = ((/* implicit */_Bool) (-(max((min((arr_28 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_1])))), (((/* implicit */unsigned long long int) arr_22 [i_2] [i_1] [i_2]))))));
            }
            for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_9 [i_1]))))) == (min((var_6), (((/* implicit */unsigned int) (unsigned short)224)))))))));
                var_28 -= ((/* implicit */_Bool) -3248732230834458314LL);
                arr_34 [i_2] [i_9] &= ((/* implicit */int) var_4);
            }
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65312)), (((((/* implicit */int) (unsigned short)65327)) >> (((((/* implicit */int) (signed char)-1)) + (27)))))))) || (((/* implicit */_Bool) var_0)))))));
            var_30 = ((/* implicit */unsigned int) var_9);
        }
        var_31 = ((/* implicit */unsigned long long int) min((var_2), (((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_10)))) : (min((((/* implicit */int) (unsigned char)255)), (arr_32 [i_1])))))));
    }
    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) /* same iter space */
    {
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_6 [i_10] [i_10])), (max((((/* implicit */long long int) var_11)), (3248732230834458320LL))))), (3248732230834458328LL)));
        var_32 = ((/* implicit */unsigned char) min(((-(var_7))), (((/* implicit */long long int) var_5))));
    }
    var_33 = ((/* implicit */long long int) (-(((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    var_34 -= var_10;
}
