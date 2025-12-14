/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219920
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)246))));
                        var_21 = arr_9 [i_0] [i_1];
                    }
                } 
            } 
        } 
        var_22 = max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 2]))))), ((~(2515787367U))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_14 [i_4] [(signed char)10] = ((/* implicit */signed char) arr_12 [i_4]);
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_5 + 4] [i_6] = ((/* implicit */signed char) arr_12 [i_4]);
                    var_23 = ((/* implicit */unsigned char) arr_5 [i_6 + 1] [i_5 + 1] [12U]);
                    arr_22 [(unsigned short)15] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [10LL]))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_4]))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 4; i_7 < 7; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_7 - 3] [i_7]))))) ? (max((1779179938U), (1779179911U))) : (max(((+(arr_5 [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_7 - 1])))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 6; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_31 [i_9] [8ULL] [i_9] = ((/* implicit */unsigned char) arr_0 [i_9]);
                    var_25 = (-(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_13 [i_7 - 2])))) && (((/* implicit */_Bool) min((arr_13 [i_7]), (((/* implicit */unsigned int) arr_18 [i_7])))))))));
                    arr_32 [i_7 - 1] [i_9] = ((/* implicit */long long int) (+((+(min((arr_17 [i_7] [i_8] [i_9]), (((/* implicit */unsigned long long int) arr_26 [(unsigned char)0] [i_8]))))))));
                }
            } 
        } 
        arr_33 [i_7 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(unsigned short)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_7]) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_7 + 1] [12U]))))))))) : ((+((-(arr_29 [i_7])))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (signed char i_11 = 2; i_11 < 6; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) arr_12 [i_11]);
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 8; i_12 += 4) 
                    {
                        for (signed char i_13 = 2; i_13 < 9; i_13 += 2) 
                        {
                            {
                                var_27 = arr_36 [8LL] [1U] [i_12] [2U];
                                arr_45 [i_13] [7U] [i_10] [i_10] [i_10] [i_10] [i_7] = ((/* implicit */short) (~((-(min((4294967274U), (((/* implicit */unsigned int) (unsigned char)53))))))));
                            }
                        } 
                    } 
                    arr_46 [i_7] [i_7] [i_11] = arr_4 [i_7];
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_38 [i_7 - 3] [i_10] [i_11 - 1])) || (((/* implicit */_Bool) arr_38 [i_7 - 1] [i_7 - 1] [i_11])))) || (((((/* implicit */_Bool) 2515787370U)) || (((/* implicit */_Bool) 2515787377U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_14 = 4; i_14 < 7; i_14 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) arr_10 [i_14 - 4]);
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 2; i_16 < 8; i_16 += 2) 
            {
                var_30 = ((/* implicit */int) arr_8 [i_15]);
                arr_55 [i_15] [i_14] [i_14] [i_15] = ((/* implicit */long long int) arr_11 [i_16] [i_15]);
                /* LoopSeq 4 */
                for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    arr_59 [i_15 - 1] [i_15] [i_15] [i_15] [(short)3] = ((/* implicit */short) (~(((((/* implicit */int) arr_6 [24U] [i_14 + 3] [24U] [i_14 + 3])) & (((/* implicit */int) arr_18 [i_15]))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_15] [i_14])) ? (((/* implicit */int) arr_47 [i_14 + 3])) : ((-(((/* implicit */int) arr_39 [(signed char)2] [(signed char)2] [i_15 - 1] [(signed char)5]))))));
                    var_32 = (~(arr_43 [i_14] [i_15] [i_16] [i_14] [i_14]));
                }
                for (signed char i_18 = 2; i_18 < 9; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 1; i_19 < 6; i_19 += 2) /* same iter space */
                    {
                        arr_66 [i_14 + 3] [i_14 + 3] [i_15] [2U] [i_14] [i_14] [(short)9] = ((/* implicit */short) ((arr_49 [i_18 - 1] [i_15 - 1]) * (arr_49 [i_18 + 1] [i_15 + 1])));
                        var_33 = ((/* implicit */unsigned int) arr_6 [i_14] [i_15 - 1] [17LL] [(unsigned char)2]);
                        var_34 = ((/* implicit */_Bool) arr_61 [i_15 + 1] [i_15 - 1] [i_15 + 1]);
                    }
                    for (unsigned char i_20 = 1; i_20 < 6; i_20 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) arr_3 [7]);
                        arr_69 [(short)8] [1] [i_16] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) arr_57 [0LL] [i_16 - 1] [i_15] [i_15] [i_15]))));
                        arr_70 [i_14 - 2] [i_15] [(signed char)1] [i_15] [i_20 + 4] = ((/* implicit */unsigned char) arr_54 [i_18] [7U] [i_16] [7U]);
                    }
                    arr_71 [i_14] [i_14] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */int) (((+(((/* implicit */int) arr_67 [i_14 - 3] [i_14] [i_14 - 3] [i_14 - 3] [(unsigned short)0])))) == (((/* implicit */int) arr_41 [i_14] [i_15 + 1] [(short)3] [i_16 + 2] [i_18]))));
                    arr_72 [i_15] [i_16] [5U] [i_15] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_16] [i_14])) ^ (((/* implicit */int) arr_1 [i_15])))) / ((+(arr_54 [i_18 - 1] [i_16] [i_15 - 1] [i_14])))));
                }
                for (signed char i_21 = 2; i_21 < 9; i_21 += 4) /* same iter space */
                {
                    arr_76 [i_14] [i_15] [i_14] [i_14] [i_14 + 1] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_23 [i_14 - 1] [i_15 + 1])) - (((((/* implicit */_Bool) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (arr_0 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14])))))));
                    arr_77 [8U] [i_15] = (~(2515787353U));
                }
                for (signed char i_22 = 2; i_22 < 9; i_22 += 4) /* same iter space */
                {
                    arr_82 [i_15] [i_16] [i_14] [i_14] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_39 [i_14] [i_16 + 1] [i_14] [i_14])) ? (((/* implicit */int) arr_50 [i_16] [i_16] [i_15])) : (arr_30 [i_14] [i_15] [i_15] [(unsigned short)1])))));
                    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_75 [i_15 + 1] [i_15] [i_15]))));
                    arr_83 [i_15] [i_16] [i_16] [(signed char)9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_16 - 2] [i_15 - 1]))));
                    arr_84 [i_15] [i_15] [i_15] [i_15 - 1] [(unsigned char)5] [i_15] = ((/* implicit */short) arr_58 [9U] [i_15 - 1] [i_15 - 1] [i_15]);
                }
                var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_14 - 1] [i_15] [i_15])) & (((/* implicit */int) arr_75 [i_14 - 1] [5U] [i_15]))));
            }
            arr_85 [i_14] [i_15] = ((/* implicit */unsigned int) arr_51 [i_14] [i_15] [i_15]);
            arr_86 [i_14] [i_15] = ((/* implicit */short) (~((-(130272558871102234LL)))));
        }
        arr_87 [i_14] [i_14] = ((/* implicit */signed char) (-((~(arr_53 [i_14] [i_14] [i_14] [i_14])))));
        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-9659))));
    }
    var_39 = ((/* implicit */unsigned char) var_15);
    var_40 = ((/* implicit */long long int) min((((/* implicit */int) (short)-30790)), (-574218814)));
    var_41 = ((/* implicit */unsigned int) var_2);
}
