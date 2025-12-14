/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243427
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
    var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)22)))))))));
    var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_3 - 2] [i_2] [i_1] [i_1] = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned short)61039))))));
                            var_17 ^= ((/* implicit */unsigned char) (-(-1210774874)));
                            var_18 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)22))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)61039)))))))));
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)233)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), ((+(4503599593816064LL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
            }
        }
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~((-(((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 3])))))))));
        arr_21 [i_0] [(unsigned char)2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35400)))))));
        var_24 = (+((+(((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_24 [i_0 - 1] = ((/* implicit */unsigned char) (~((~(-2050514620)))));
            var_25 = ((/* implicit */unsigned short) (-((+((+(arr_16 [(unsigned char)2] [i_0] [(unsigned char)4] [i_0])))))));
        }
    }
    for (short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            arr_30 [i_9] [i_9] [i_10] = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)131))))));
            arr_31 [i_9] [(short)3] [i_10 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
            arr_32 [i_9] [i_10] [i_9] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
            var_26 |= ((/* implicit */long long int) (-((+(((/* implicit */int) arr_27 [i_10 + 1] [i_10 - 1]))))));
        }
        for (unsigned short i_11 = 3; i_11 < 12; i_11 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */short) (~((~(((/* implicit */int) var_7))))));
            var_28 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)61039))))));
        }
        for (unsigned short i_12 = 3; i_12 < 12; i_12 += 1) /* same iter space */
        {
            arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)30135))));
                arr_44 [i_13] [i_12] [i_9] [i_13] |= ((/* implicit */unsigned short) (+(-1210774874)));
            }
            for (short i_14 = 2; i_14 < 12; i_14 += 2) 
            {
                arr_49 [i_12 - 2] [i_9] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)30131))))));
                arr_50 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -5433226868551198226LL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
                {
                    arr_53 [i_9] [i_12] [(unsigned char)1] [i_14] [(unsigned char)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)124))));
                    arr_54 [i_9] = (~(8425989963947037241LL));
                }
                for (long long int i_16 = 2; i_16 < 12; i_16 += 2) 
                {
                    arr_58 [i_9] [i_9] [(unsigned char)3] [i_9] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    arr_59 [i_9] [i_9] = ((/* implicit */short) (~((~(((/* implicit */int) arr_19 [i_16] [i_16 + 2]))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_17 = 4; i_17 < 12; i_17 += 4) 
                {
                    var_31 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1633969002)))))));
                    var_32 -= ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_45 [i_9] [i_14 - 2] [i_14] [i_12 - 2]))))));
                    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_12 + 1] [i_12 - 1] [i_12 - 2] [i_12])))))));
                    arr_62 [i_9] [i_12 - 2] [i_14 - 1] [i_14] |= ((/* implicit */long long int) (-((~(((/* implicit */int) arr_11 [i_12] [i_12 - 2] [i_17] [i_17 - 1] [i_14 - 2] [i_9]))))));
                }
                for (unsigned char i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    var_34 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_35 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_9))))));
                    var_36 = ((/* implicit */unsigned short) (-((-(var_6)))));
                }
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                {
                    arr_69 [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_60 [i_19] [i_14 + 2] [i_14] [i_14 - 2]))));
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_14 - 2] [i_14 + 2] [i_14 - 2]))));
                        var_38 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)4496))));
                        arr_73 [(short)0] [i_12] [i_14] [4LL] [i_19] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_63 [i_14] [i_14] [i_20] [i_14 + 2] [i_20]))));
                        arr_74 [i_9] [i_12 - 1] [i_14] [i_19] [i_9] [i_19] [i_12] = ((/* implicit */short) (~(var_6)));
                    }
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        var_40 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)(-32767 - 1)))));
                        var_41 += ((/* implicit */short) (~(268402688)));
                        arr_79 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)61289))));
                    }
                }
            }
        }
        var_42 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)3211))))));
    }
    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
    {
        var_43 = (-((+(((/* implicit */int) (unsigned char)255)))));
        arr_82 [i_22] [(short)15] = ((/* implicit */short) (+((~(arr_20 [i_22] [i_22] [i_22] [i_22] [i_22])))));
    }
    var_44 = ((/* implicit */unsigned short) var_13);
    var_45 |= (~((+(((/* implicit */int) var_2)))));
}
