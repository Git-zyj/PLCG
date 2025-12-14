/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214334
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) var_11);
        var_15 = ((/* implicit */int) arr_2 [i_0]);
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-17286))));
        arr_9 [i_1 - 3] = ((/* implicit */signed char) ((((long long int) arr_5 [i_1])) + (((long long int) 18446744073709551611ULL))));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)24890))) > (var_1))))) + (arr_5 [i_1])));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_6 [i_1]))));
        var_19 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_6 [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */int) var_7);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_2] [i_5] [i_2] |= ((((((/* implicit */_Bool) arr_6 [(unsigned char)23])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)9)))) & ((+(((/* implicit */int) (unsigned char)100)))));
                            arr_25 [i_2] [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)14485))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) (~(2115294506)));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-24891)) : (-68991944)))) ? (((/* implicit */int) arr_2 [i_7 - 1])) : (((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 2])))))));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_32 [i_3] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */signed char) ((int) ((short) 2115294506)));
                            var_21 ^= ((/* implicit */int) ((unsigned char) arr_13 [i_3] [6]));
                        }
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3 - 3] [i_4] [i_3 - 3] [i_3 - 3]))) : (arr_23 [i_3] [i_3 + 1] [i_3 - 3] [3] [i_3 - 3] [i_3 - 2] [i_4]))))));
                    }
                } 
            } 
            var_23 ^= ((/* implicit */short) (~(((/* implicit */int) (short)24874))));
        }
        for (short i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_34 [i_2] [10ULL]))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24903))));
            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (var_13)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_12]))))) ? (arr_3 [i_2] [12LL]) : ((~(((/* implicit */int) arr_18 [i_2] [(signed char)3]))))));
            var_29 &= ((/* implicit */long long int) (~(((((arr_31 [(unsigned short)0] [(signed char)6] [i_2] [i_12] [(signed char)6]) + (2147483647))) << (((((var_8) + (52802677))) - (28)))))));
            arr_44 [i_12] = (~(((/* implicit */int) arr_35 [i_2] [i_12])));
            var_30 = ((/* implicit */unsigned char) arr_31 [i_2] [i_2] [i_2] [i_12] [6]);
            var_31 *= ((/* implicit */signed char) (unsigned short)65535);
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        arr_51 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(2115294506)));
                        arr_52 [i_2] [i_13] [i_13] [i_14] [i_14] [i_15] = ((/* implicit */unsigned char) ((long long int) (unsigned short)65535));
                        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_14 - 2] [i_14 - 3]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_14 + 1] [i_14] [i_14] [i_14 - 1])) ? (arr_50 [i_14 - 3] [i_14] [(unsigned char)8] [i_14 - 2]) : (((/* implicit */int) (short)-9))));
                        var_34 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
                        var_35 += ((/* implicit */signed char) ((short) var_0));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_18 = 4; i_18 < 20; i_18 += 3) 
        {
            for (int i_19 = 1; i_19 < 22; i_19 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)6)))) | (((/* implicit */int) max((arr_59 [i_18 + 3] [i_18 - 4]), (arr_59 [i_18 - 1] [i_18 - 4]))))));
                    arr_63 [i_17] [i_18] = ((/* implicit */long long int) (unsigned short)20);
                    var_37 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44573)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_17] [i_17] [i_18] [i_19])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_57 [i_19])), ((short)(-32767 - 1))))) : (((/* implicit */int) arr_59 [i_18 - 3] [i_19 - 1])))));
                }
            } 
        } 
        arr_64 [i_17] = max((((/* implicit */int) arr_60 [i_17] [i_17] [i_17])), ((-(max((63110119), (((/* implicit */int) (unsigned short)0)))))));
        arr_65 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2115294498)) ? (((/* implicit */int) (unsigned short)33608)) : (((/* implicit */int) (unsigned short)30142))));
        var_38 = ((/* implicit */unsigned char) max((13171442257721340461ULL), (((/* implicit */unsigned long long int) -2115294484))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23; i_20 += 2) 
        {
            for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
            {
                {
                    var_39 = ((/* implicit */int) (-(((long long int) (unsigned short)5))));
                    var_40 = ((/* implicit */unsigned char) arr_70 [i_17] [i_20]);
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_17])))))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned long long int) var_6);
}
