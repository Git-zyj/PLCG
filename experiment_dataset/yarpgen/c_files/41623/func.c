/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41623
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) var_7);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            var_15 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */int) arr_5 [(signed char)9]);
                var_16 = ((/* implicit */unsigned char) min((arr_6 [i_1]), (arr_6 [i_0])));
                var_17 = ((/* implicit */short) max((min((((/* implicit */long long int) arr_3 [i_0] [(unsigned char)2])), (-5410567598112199553LL))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) max((min((((/* implicit */short) (unsigned char)114)), (arr_7 [i_4] [i_4] [(signed char)0] [(_Bool)0]))), (((/* implicit */short) arr_10 [i_4] [i_4] [i_4] [i_4]))));
        var_18 *= ((/* implicit */signed char) 1782994365);
        var_19 = var_9;
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_19 [10U] = ((/* implicit */unsigned int) var_5);
        var_20 -= ((/* implicit */short) var_2);
        arr_20 [i_5] = ((/* implicit */unsigned int) (unsigned short)12185);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) arr_21 [i_6] [i_6]);
        var_22 = var_8;
        /* LoopSeq 4 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) arr_26 [i_7] [i_6]);
            var_24 -= (unsigned char)128;
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 21; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) arr_34 [i_6] [i_8] [i_6] [i_6]);
                            arr_38 [i_8] [i_8] [i_9] [(short)8] [i_8] [i_9] [i_11] = ((/* implicit */short) 9223372036854775808ULL);
                            arr_39 [i_6] [i_10] [i_9] [i_10] [i_11] &= ((/* implicit */unsigned short) arr_24 [i_6]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) arr_42 [i_6] [i_8] [i_8] [i_9] [i_8] [i_13]);
                            arr_45 [i_8] [i_12] [i_6] [i_9] [i_8] [i_6] [i_8] = ((/* implicit */short) arr_27 [i_6] [i_8] [i_9]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_50 [i_6] [i_8] [i_8]);
                            var_28 = ((/* implicit */unsigned int) var_5);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_41 [i_15] [i_15] [i_15] [i_15]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)144))));
                var_31 = ((/* implicit */short) (signed char)32);
            }
            var_32 *= ((/* implicit */short) (_Bool)0);
        }
        for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_60 [i_6] [i_6] [i_17] = ((/* implicit */unsigned char) var_2);
                        arr_61 [i_18] [i_18] [i_6] [i_18] = ((/* implicit */signed char) arr_35 [i_17] [(unsigned short)8] [i_17] [(unsigned short)8] [i_17] [i_18]);
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) max((var_33), (arr_25 [i_6] [i_6])));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                for (signed char i_21 = 3; i_21 < 21; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        {
                            var_34 *= ((/* implicit */short) arr_47 [i_6] [i_19] [i_20] [i_20] [i_22] [i_20]);
                            arr_72 [i_22] [i_21] [i_6] [i_19] [i_6] |= ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    } 
                } 
            } 
            arr_73 [(_Bool)1] [(_Bool)1] [(_Bool)1] = arr_24 [i_6];
        }
        var_35 = ((/* implicit */unsigned short) arr_59 [i_6] [i_6] [i_6] [i_6]);
    }
    /* LoopNest 2 */
    for (short i_23 = 0; i_23 < 21; i_23 += 2) 
    {
        for (unsigned char i_24 = 2; i_24 < 20; i_24 += 1) 
        {
            {
                arr_79 [(unsigned char)20] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_44 [i_23] [i_23] [i_23] [i_23] [i_23])), (min((((/* implicit */unsigned short) (_Bool)1)), (arr_42 [(signed char)6] [i_23] [i_24] [i_23] [i_23] [i_23])))))), (min((var_1), (((/* implicit */unsigned int) arr_51 [i_23] [i_23] [(unsigned short)10] [i_24 + 1] [i_23]))))));
                var_36 |= ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (1635905206)));
                var_37 = ((/* implicit */short) arr_64 [i_23] [i_24 + 1]);
            }
        } 
    } 
}
