/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224980
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (25)))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_9);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_9);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1414517098)) / (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) + (((3025391860U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)249)))), ((-(-467773665)))))), ((~(var_0)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (arr_4 [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_2]))))) ? (((/* implicit */int) max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))) : (((/* implicit */int) max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_3] [i_3])), (((((/* implicit */int) arr_0 [i_3] [i_3])) ^ (((/* implicit */int) arr_0 [i_2] [i_3]))))));
            arr_12 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-123))))) ? (((arr_7 [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-52), (((/* implicit */signed char) arr_9 [i_2] [i_2]))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */long long int) 467773665)) != (arr_5 [i_3])))) : (min((arr_4 [i_3]), (-467773665)))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_2])) < (((/* implicit */int) (unsigned char)7))))), (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) var_1)) : (arr_11 [i_2] [i_2] [i_2])))))));
            arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))), (((((/* implicit */int) arr_9 [i_2] [i_2])) + (((/* implicit */int) (signed char)-52))))))) ? (((/* implicit */int) var_10)) : (max((arr_4 [i_2]), (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)31)))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_17 [i_4] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_15 [i_2]), (var_13)))) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_15 [i_4]))))), (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4253328329U)) || (((/* implicit */_Bool) (unsigned short)0)))))) : (var_2)))));
            var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_2]))) ? (((arr_11 [i_2] [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1833312741)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (signed char)-51))))))) : (((((/* implicit */_Bool) ((arr_14 [i_4]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((arr_10 [i_2]) % (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_4]))) : (0U)))))));
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2] [i_2])) >> (((((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (var_12) : (((/* implicit */int) arr_1 [i_2] [i_2])))) + (1090482696)))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [i_4]), (((unsigned char) (unsigned short)63899))))) ? (max(((-(((/* implicit */int) arr_8 [i_2] [i_4])))), ((-(((/* implicit */int) (short)24803)))))) : (((/* implicit */int) ((short) arr_4 [i_2])))));
        }
        arr_18 [i_2] [i_2] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_2] [i_2])) : (((/* implicit */int) min((var_5), (((unsigned short) (-2147483647 - 1)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5])) ^ (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_5])))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)24803)), ((unsigned short)0)))) ? (((/* implicit */int) arr_19 [i_5])) : ((-(((/* implicit */int) arr_21 [i_5] [i_5]))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_3)) : (arr_22 [i_5] [i_5] [i_5])))), ((~(8691452623842198937LL)))))));
            var_25 |= ((/* implicit */int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 3277438987U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)20868))))) / (min((-8691452623842198938LL), (((/* implicit */long long int) (unsigned char)147))))))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) ((short) (-(((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])) : ((-2147483647 - 1)))))));
                arr_27 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) arr_19 [i_6]);
            }
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                var_27 = ((/* implicit */int) (+(arr_29 [i_5] [i_5] [i_5])));
                /* LoopSeq 2 */
                for (signed char i_9 = 3; i_9 < 23; i_9 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) arr_32 [i_8] [i_8] [i_5] [i_5])) >> (((((/* implicit */int) arr_30 [i_5] [i_6] [i_6])) + (142))))))) < (((((/* implicit */_Bool) 63U)) ? (((/* implicit */int) arr_20 [i_9 + 1])) : (((/* implicit */int) (unsigned char)166))))));
                    arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_6] [i_6])) : (((/* implicit */int) arr_30 [i_5] [i_6] [i_5]))))))) ? ((-(arr_28 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_9])) : (((/* implicit */int) max((((/* implicit */short) (signed char)63)), ((short)-24803)))))))));
                    arr_34 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_6] [i_8] [i_9 - 3])) || (((/* implicit */_Bool) -2409608825245455579LL))));
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1975065781))) ? ((-(((/* implicit */int) arr_31 [i_8] [i_10])))) : ((-(((/* implicit */int) var_13))))));
                    var_30 = ((/* implicit */unsigned int) arr_20 [i_10]);
                }
                var_31 ^= ((((/* implicit */int) (signed char)110)) & (((/* implicit */int) (short)24803)));
            }
        }
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        var_32 *= ((/* implicit */unsigned long long int) arr_19 [i_11]);
        var_33 = ((/* implicit */short) var_12);
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)108)) ? (-319528500) : (((/* implicit */int) (signed char)-113)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)103)))))) : (max((((/* implicit */unsigned int) arr_19 [i_11])), (var_0)))));
    }
}
