/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226397
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) / (((/* implicit */unsigned long long int) 2147483647))));
        var_15 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_16 = ((/* implicit */signed char) arr_2 [i_1]);
        var_17 += ((/* implicit */unsigned long long int) ((max((arr_7 [i_1]), (arr_1 [i_1]))) + (min((arr_7 [i_1]), (((/* implicit */long long int) var_6))))));
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) max((15571003925064416018ULL), (((/* implicit */unsigned long long int) max((1397045424), (((/* implicit */int) (signed char)127)))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(2363643039U)))), (max((arr_11 [i_2 - 3]), (arr_11 [i_2 - 4])))));
            arr_15 [i_2 - 3] [i_2 - 3] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_13 [i_3] [i_2] [i_2 - 1])), (var_4)))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
            var_20 = ((/* implicit */unsigned long long int) arr_13 [(unsigned char)11] [i_2] [i_2 - 2]);
            arr_16 [i_2 - 3] [i_2 - 3] = ((/* implicit */int) min((min((var_1), (((/* implicit */long long int) arr_8 [i_2 - 3])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 2) 
        {
            arr_19 [i_2 - 3] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) arr_9 [17U] [i_4 - 4])), (min((((/* implicit */unsigned int) arr_13 [1ULL] [i_4] [i_2])), (arr_12 [i_2] [i_2] [i_2]))))));
            arr_20 [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_4 - 2] [i_2 - 2] [2ULL]))))), (min((arr_9 [i_2 - 4] [i_4 - 4]), (arr_9 [i_2 - 1] [11])))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [(short)20] [i_4] [(short)20]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))) - (arr_10 [i_2]))))))))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((max(((~(arr_11 [0ULL]))), (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 - 2] [i_5] [i_6])))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2] [i_5] [i_6]))))))))));
                var_23 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 1] [i_2 - 3])) * (((/* implicit */int) arr_18 [i_6 + 2] [i_2] [i_2 - 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6 + 2] [i_2] [i_2 - 4])))))));
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_32 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_2]), (((/* implicit */short) var_3))))) ? (min((1931324257U), (((/* implicit */unsigned int) (short)-13724)))) : (var_0)))) : (var_10)));
                var_24 = ((/* implicit */long long int) min(((-(6240096431998240159ULL))), (((/* implicit */unsigned long long int) (+(((var_12) / (((/* implicit */int) arr_30 [i_2])))))))));
                arr_33 [i_2] [i_5] [11LL] = (~((~(((/* implicit */int) arr_17 [i_2 - 3] [i_2 - 4] [i_2 + 1])))));
                var_25 &= ((/* implicit */signed char) var_2);
            }
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_37 [i_8] [i_5] [i_2] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / (6240096431998240159ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_29 [i_8] [i_2 - 3]))))));
                var_26 = ((/* implicit */signed char) max((max((arr_12 [i_2] [15U] [i_2 - 3]), (arr_12 [i_2] [i_2] [i_2 - 3]))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_4))), ((~(var_13)))))));
                var_27 = ((/* implicit */unsigned int) ((max((arr_11 [i_2 - 3]), (arr_11 [i_2 - 2]))) - (arr_11 [i_2 - 1])));
                arr_38 [i_2 - 4] [i_5] [i_8] = ((/* implicit */short) var_8);
            }
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_21 [i_5])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((min((((/* implicit */unsigned int) (signed char)127)), (1931324256U))) - (90U))))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)222))))))));
            arr_39 [i_2] [i_2] [(unsigned char)18] = ((/* implicit */short) arr_11 [i_5]);
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) > (min((arr_25 [i_2 - 1] [i_5]), (((/* implicit */long long int) var_6))))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((((-(var_0))) - ((-(arr_29 [i_9] [i_9]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_9])) - (((/* implicit */int) arr_30 [i_9]))))))))));
        var_31 = ((/* implicit */short) arr_31 [i_9] [i_9] [i_9] [i_9]);
        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (max((var_1), (-2740094111442004281LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_9] [i_9])) / (((/* implicit */int) (unsigned char)147))))))) >> (((arr_41 [i_9]) - (201940927599032180ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        var_33 ^= ((/* implicit */short) arr_25 [i_10] [i_10]);
        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_10] [i_10])) > (((/* implicit */int) arr_2 [i_10]))));
        var_35 = ((/* implicit */signed char) ((var_13) >= (arr_40 [i_10])));
    }
}
