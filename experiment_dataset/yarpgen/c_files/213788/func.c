/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213788
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
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 += ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (11956317605223477607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) >= (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_1 [i_1]) : (18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_1);
        }
        for (short i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 4] [i_0])) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) max(((unsigned char)110), ((unsigned char)110)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1])) == (((/* implicit */int) var_7)))))));
            arr_9 [i_0] [i_2] = ((/* implicit */signed char) arr_0 [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1] [i_2])))) % (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1])))))));
                    arr_14 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                }
                arr_15 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_2] [i_2 - 4] [i_3] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_11 [i_0])))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_12))));
                            arr_22 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_3)))))))), (var_2)));
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0])) < (((/* implicit */int) var_5)))) ? (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_10 [i_2] [i_5] [i_6])))))) : (((/* implicit */int) var_5))));
                            arr_23 [i_0] [i_2] [i_3] [i_5] [i_6] [i_0] = ((/* implicit */signed char) 13933375918883255151ULL);
                            var_19 *= ((/* implicit */signed char) arr_13 [i_0] [i_2] [i_3] [i_6] [i_6] [i_6]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_7)), (arr_17 [i_0] [i_2] [i_2] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((arr_11 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) ? (((/* implicit */unsigned long long int) var_1)) : (arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_2 + 1] [i_2])));
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_26 [i_2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_7 [i_0 - 1]), (arr_7 [i_0]))))));
                arr_27 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_11 [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_24 [i_0] [i_2] [i_2] [i_7])))))))));
                arr_28 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 1] [i_2] [i_2] [i_2 - 3]))) ^ (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]))) < (var_1))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))) != (var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_1)))))));
            var_22 = ((/* implicit */_Bool) ((max((((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned short)7)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-115)))))) * (((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_2]))));
        }
        var_23 = max((arr_24 [i_0] [i_0] [i_0] [i_0]), (min((arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))));
        var_24 = ((/* implicit */signed char) min((((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))));
        var_25 += ((/* implicit */_Bool) var_11);
    }
    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_26 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (4513368154826296484ULL))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8]))))))))));
        arr_31 [i_8] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_18 [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8])))) >= (((((/* implicit */_Bool) max((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) arr_3 [i_8] [i_8]))))) ? (arr_12 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1]))))));
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)94))))) || (((/* implicit */_Bool) arr_3 [i_8] [i_8])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_4), (var_0))))))) : ((+(arr_11 [i_8])))));
        var_27 = ((/* implicit */signed char) var_12);
    }
    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_9), (var_8)))), (min((((/* implicit */unsigned long long int) arr_20 [i_9] [i_9] [(signed char)6] [i_9] [i_9] [i_9] [i_9])), (13933375918883255165ULL)))))) ? (13933375918883255151ULL) : (((/* implicit */unsigned long long int) var_1)))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_9 + 1] [i_9] [i_9])) * (((/* implicit */int) var_6))))) >= (min((((/* implicit */unsigned long long int) var_4)), (arr_34 [i_9])))));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_11)));
}
