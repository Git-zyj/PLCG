/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48191
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
    var_13 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_8)) - (((((/* implicit */int) var_7)) - (((/* implicit */int) var_12)))))));
    var_14 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) var_0);
                        var_17 = ((/* implicit */signed char) arr_10 [i_0 - 1] [i_0 - 2] [i_0 - 1]);
                        var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2]))));
                        var_19 = ((/* implicit */signed char) ((long long int) arr_4 [i_0 + 1]));
                        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_4] [(_Bool)1] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) (~(((long long int) 1747334006219316309ULL))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_3 [i_0 - 2]))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
                        }
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [(short)4] [i_0] [i_0] [i_0] [i_0]))) : (var_10)));
        var_24 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 1]))));
        var_25 = ((/* implicit */signed char) arr_2 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    arr_25 [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_21 [i_8] [i_7])))) | (((/* implicit */int) ((signed char) arr_21 [i_6] [i_6])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 1; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */_Bool) 16699410067490235306ULL);
                        arr_29 [i_9] [i_8] [i_9] [(signed char)14] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_9 - 1])) : (((/* implicit */int) arr_20 [i_9 + 1]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((8748057935595597070LL), (((/* implicit */long long int) (signed char)19)))))));
                        /* LoopSeq 3 */
                        for (signed char i_11 = 3; i_11 < 24; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+((+(3526841315397003892LL))))))));
                            var_29 = ((/* implicit */long long int) var_3);
                            arr_35 [i_11] [i_11] [i_11] [i_11] [i_11] = (+(arr_27 [i_10 + 1] [i_11] [i_11 - 1] [i_11 - 1]));
                            arr_36 [i_11] [i_10] [i_11] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_31 [i_6] [(signed char)17] [(signed char)22] [i_7])) > (((/* implicit */int) min((var_12), (arr_18 [i_6]))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= ((-(1747334006219316309ULL))));
                            var_31 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_20 [i_10 + 1]))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)30)), (var_2)))) == (((((/* implicit */_Bool) arr_18 [i_10 - 1])) ? (((/* implicit */int) arr_18 [i_10 + 1])) : (((/* implicit */int) arr_18 [i_10 - 1])))))))));
                            arr_39 [i_6] [i_7] [i_12] [i_8] [i_12] = ((/* implicit */signed char) (+(-6365178403453145210LL)));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_7))));
                            var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((long long int) arr_40 [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1])) : (((var_0) | (((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_6] [(unsigned short)16] [i_6] [i_10 + 1])))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            {
                                arr_48 [(short)16] [i_7] [i_7] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_20 [i_7]), (arr_37 [i_6] [i_7]))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_44 [i_15] [i_14] [i_8] [i_6])), (var_2))))));
                                var_35 = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_14])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)9)) ? (17603103372065059425ULL) : (((/* implicit */unsigned long long int) -1807466077014018522LL))));
}
