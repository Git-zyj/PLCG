/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28648
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
    var_12 *= var_8;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(unsigned short)13] [i_0] = arr_1 [i_0] [i_0];
        var_13 *= ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) (_Bool)0)) : (min((((/* implicit */int) ((signed char) 4294967294U))), (max((((/* implicit */int) (unsigned char)109)), (var_6))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (arr_8 [i_2 - 1] [i_2 - 2] [(signed char)6]) : ((((_Bool)1) ? (-1051160945463040859LL) : (((/* implicit */long long int) 724380319U))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_5))));
            }
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_16 -= ((/* implicit */unsigned short) var_7);
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    arr_15 [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (var_6))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (17514209562305941521ULL))));
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 8562490633287344078ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (9884253440422207537ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_4 - 2])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (arr_9 [i_0] [i_4 - 2] [i_5] [i_3])));
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19539))) > (7582369542171243965LL))))) : (((var_4) - (var_2)))));
                    }
                }
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_3]) : (arr_0 [i_0]))))));
                    var_22 = ((/* implicit */_Bool) arr_4 [i_1] [i_3]);
                    arr_20 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [1ULL] [i_6] [i_6]) : (arr_10 [(signed char)3] [i_1] [i_6] [i_1])));
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (-930751691162630407LL) : (((((/* implicit */_Bool) var_3)) ? (arr_19 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55005)))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65359))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [1LL] [i_7 + 1] [i_7 + 4] [i_7 + 4]))) : (((((/* implicit */_Bool) 718062216437081064LL)) ? (arr_18 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
                        arr_23 [i_6] [i_6] [i_6] [1LL] [i_6] [i_6] = ((((/* implicit */_Bool) 3603048844U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_1))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_3] [i_6] [i_8])) ? (arr_19 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                    }
                }
            }
            arr_26 [i_0] [i_0] [i_0] = ((var_4) * (arr_4 [i_0] [i_1]));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_14 [i_1] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)26562)) ? (var_4) : (((/* implicit */unsigned long long int) arr_8 [i_0] [(signed char)1] [i_0])))) : (((/* implicit */unsigned long long int) var_6)))))));
        }
    }
    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) min((arr_11 [i_9 - 3] [i_9 - 3] [i_9] [i_9]), (var_1)))) ? (var_2) : (max((((/* implicit */unsigned long long int) (unsigned char)221)), (arr_14 [i_9] [i_9] [i_9 - 1] [i_9 + 2]))))), (((((/* implicit */_Bool) max(((unsigned short)65359), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((var_3), (((/* implicit */unsigned long long int) var_7))))))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 434722833201842579LL)) ? (arr_28 [i_9]) : (((/* implicit */int) var_7))))) ? (min((1993605285150472413ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 691918452U)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1191903559U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (624143679U)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (min((0LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)176))))))))) : (((((/* implicit */_Bool) (unsigned short)3463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8799388260057966547ULL)))));
            var_31 = ((/* implicit */unsigned long long int) arr_7 [i_10 + 1] [i_9]);
        }
    }
    for (unsigned short i_11 = 3; i_11 < 15; i_11 += 1) /* same iter space */
    {
        arr_34 [i_11] [i_11] = ((/* implicit */unsigned char) (((_Bool)1) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) arr_10 [i_11] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (max((var_3), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)9] [(unsigned short)9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_11 + 1] [i_11])))))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) -17))));
        var_33 = ((/* implicit */unsigned short) max((min(((-(16))), (((/* implicit */int) min(((_Bool)1), (arr_32 [i_11])))))), (((/* implicit */int) var_9))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        var_34 = ((/* implicit */unsigned short) arr_28 [i_12]);
        arr_37 [i_12] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_5)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    var_35 |= ((/* implicit */signed char) ((arr_5 [i_14]) & (max((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_32 [i_14])))))))));
                    var_36 = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_12] [i_12] [i_13] [i_14]))) && (((/* implicit */_Bool) (~(var_3)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                {
                    arr_48 [(_Bool)1] [i_15] [(unsigned short)11] [i_12] &= max((((/* implicit */unsigned int) arr_46 [(unsigned char)8] [i_15] [i_15])), (1727592289U));
                    arr_49 [(unsigned short)9] [i_16] [i_16] [i_16] = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)-36))))), (((((/* implicit */_Bool) var_4)) ? (arr_38 [i_12] [2ULL] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_15])))))))), (((long long int) (unsigned short)37751))));
                    var_37 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)255)), (16453138788559079202ULL)));
                }
            } 
        } 
    }
}
