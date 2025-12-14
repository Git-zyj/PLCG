/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30201
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_16 &= var_12;
        var_17 *= ((/* implicit */unsigned int) max((min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((short) 719556552U)))));
        var_18 -= ((/* implicit */unsigned char) arr_1 [(short)2] [(short)12]);
        arr_4 [i_0] = ((/* implicit */signed char) var_2);
    }
    var_19 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) -8490499691505412687LL))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-112))))), (var_15)))));
    var_20 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)96)), (-1581368411)))) : (min((4294967292U), (1373917337U))))), ((-(((((/* implicit */_Bool) (short)-20982)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_3 [i_1])))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
        var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1]))))) - (min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)111))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_2 = 4; i_2 < 9; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(arr_1 [i_2] [i_2]))))));
            var_24 *= ((/* implicit */unsigned char) var_2);
            var_25 -= ((/* implicit */unsigned int) arr_9 [i_2] [(short)9] [(short)9]);
            arr_12 [i_1] = ((/* implicit */unsigned short) var_15);
        }
        for (long long int i_3 = 4; i_3 < 9; i_3 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_1])), (var_3)))) ? ((+(arr_9 [0U] [i_1] [i_3 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_3 - 2] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7603340622416996760ULL)) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_5))))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_3 - 4])), ((~(18446744073709551615ULL)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                arr_20 [i_4] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_3] [i_4]))) : (((((/* implicit */_Bool) (unsigned short)45081)) ? (811560958U) : (var_10)))));
                arr_21 [i_1] [(unsigned char)8] [(short)9] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_3 - 1] [i_3] [(unsigned char)7]))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_28 *= ((/* implicit */long long int) (-(arr_19 [i_5 - 1] [i_4 - 1] [i_3 - 1])));
                    var_29 |= ((/* implicit */short) var_8);
                    arr_24 [i_1] [(unsigned short)0] [(unsigned char)6] [i_5] = ((/* implicit */signed char) arr_1 [i_5] [i_3]);
                }
                arr_25 [i_4] [i_3 - 1] [i_3 - 1] [i_1] |= ((/* implicit */_Bool) ((long long int) arr_10 [i_3 - 1]));
                var_30 -= ((/* implicit */signed char) (short)25679);
            }
        }
        /* vectorizable */
        for (long long int i_6 = 4; i_6 < 9; i_6 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(((/* implicit */int) (short)-5043)))))));
            var_32 = ((/* implicit */short) arr_6 [i_6]);
        }
        for (long long int i_7 = 4; i_7 < 9; i_7 += 2) /* same iter space */
        {
            var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_1] [i_1] [i_7]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(signed char)2] [i_7 - 1] [i_7 + 1]))) : ((+(((((/* implicit */_Bool) arr_18 [i_1] [6U] [i_7 - 1])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned char)9])))))))));
            arr_30 [i_7] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_11 [4] [8U] [i_1])), (((((/* implicit */_Bool) arr_16 [i_1] [i_7 - 2])) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (unsigned char)208))))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(554512772U)))))) ? (811560958U) : ((+(2115228306U)))));
        var_34 -= ((/* implicit */_Bool) (+((-(((arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
    }
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3181)))));
}
