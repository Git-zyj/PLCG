/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197072
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) arr_5 [i_0 + 2])), (1073217536U))));
            arr_7 [3U] [3U] = ((/* implicit */signed char) min(((-((+(var_0))))), (((unsigned int) max((0U), (1467962212U))))));
            var_19 = ((/* implicit */unsigned int) max((18320500376290248683ULL), (((/* implicit */unsigned long long int) 3221749759U))));
            var_20 = arr_2 [i_0 + 2] [i_0 + 2];
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((-(((arr_0 [22U]) << (((arr_3 [i_1] [i_1]) - (12276733171358461769ULL))))))), (((unsigned int) (signed char)117))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2]) / (9U)));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_22 &= ((1862073476U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 1] [i_2] [(signed char)22] [i_4]))) < (3745108745U)));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) var_10))))) ? (((2098059513U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 3] [1U] [i_0 + 3] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 11U))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_5 [i_0 + 3])) : (((/* implicit */int) arr_5 [i_2]))));
                    var_26 = ((/* implicit */unsigned long long int) (signed char)127);
                    arr_18 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0] = 1862073476U;
                }
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_3] [16U] = ((((/* implicit */unsigned long long int) 0U)) * (13056865278850510356ULL));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])) : (arr_11 [i_2])))) || (((/* implicit */_Bool) 512U))));
                    var_28 &= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_1 [19U]))) << (((((/* implicit */int) arr_12 [i_3] [i_3] [i_0 + 2] [i_6])) + (69)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) 3624666564U);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1372399526U)) && (((/* implicit */_Bool) arr_15 [i_0 + 2] [i_7] [i_3]))));
                    }
                    var_31 = (~(arr_15 [i_0 + 1] [i_0 - 2] [i_0 + 3]));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 1]))) + (3221749754U)));
                    arr_26 [i_8] [i_8] [i_2] [i_3] [i_2] [i_8] = ((/* implicit */signed char) ((((var_1) * (var_11))) < ((+(var_3)))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                {
                    arr_29 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 19U)) - (((((/* implicit */unsigned long long int) 2098059513U)) / (var_16)))));
                    var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [19U] [(signed char)15] [i_9] [19U] [i_0 + 1] [i_0 + 3]))));
                    var_34 = ((/* implicit */signed char) var_13);
                    arr_30 [i_3] [i_3] [i_9] [i_3] [i_0 + 1] = ((/* implicit */unsigned int) ((arr_3 [i_0 - 2] [i_0 - 1]) + (6530646226919464826ULL)));
                }
                var_35 = ((/* implicit */unsigned int) (signed char)9);
            }
            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2531077354U))));
                var_37 = ((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)127))))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                arr_37 [i_11] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) (signed char)120);
                var_38 = ((arr_4 [i_0] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 + 1])));
                var_39 = 3846383478U;
            }
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-69)) ? (var_18) : (arr_22 [i_2] [i_2] [i_0] [i_0 + 3] [i_0]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)6] [i_2])) && (((/* implicit */_Bool) var_9))))))))));
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            arr_41 [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) (((((-(var_8))) / (((unsigned int) arr_38 [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_4)))))));
            arr_42 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((var_11), (arr_19 [i_0 + 2] [i_12] [i_12] [i_12])))))) ? (((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 + 2])) - (13242308591774638200ULL))) : (((/* implicit */unsigned long long int) arr_36 [9U] [i_0 + 3] [i_0 + 1] [i_0 + 1]))));
            var_41 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18U)))))) != (((((/* implicit */_Bool) (signed char)-74)) ? (2665835171U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0])))))))));
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
        {
            var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)34))))) ? (((((/* implicit */_Bool) 4805431765913037210ULL)) ? (17806823793522112641ULL) : (((/* implicit */unsigned long long int) 18U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-87)), (2494169356U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (4294967271U));
            var_43 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 560537910U)) && (((/* implicit */_Bool) 3994731695561105205ULL))))));
        }
        for (signed char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
        {
            var_44 |= ((/* implicit */unsigned int) arr_44 [i_0 - 1] [1U]);
            var_45 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) (signed char)-115)), (var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_14] [i_14] [i_0 - 2] [i_14]))))) <= ((~(2998713082U)))));
        }
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_6))))) << (((var_13) - (3865965463U)))));
    var_47 = (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_14))))))))) : (((unsigned int) (~(var_2)))));
}
