/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229585
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
    var_13 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (var_6))))))));
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) 4294967295U);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = (-(min((((arr_10 [i_2] [i_1] [i_2] [i_3] [i_1] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) (short)-11865))))), (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 - 4])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)7])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_6])))))));
                                arr_22 [i_0] [i_1] [i_2] [i_6] = arr_13 [i_0];
                            }
                        } 
                    } 
                    arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) arr_26 [i_7]);
        arr_29 [i_7] = ((/* implicit */short) ((((/* implicit */int) max((arr_25 [i_7]), (arr_25 [i_7])))) * (((((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) arr_25 [i_7])) : (arr_27 [i_7] [i_7]))) / (((((/* implicit */int) arr_24 [i_7])) << (((((/* implicit */int) arr_25 [i_7])) - (25031)))))))));
        var_17 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_24 [i_7])))) * (((((/* implicit */int) arr_25 [i_7])) / (((/* implicit */int) arr_26 [i_7]))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)67)) ^ (arr_27 [i_7] [i_7])));
    }
    for (short i_8 = 2; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (unsigned short i_10 = 3; i_10 < 12; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 2])) >> (((((/* implicit */int) arr_34 [i_8 + 1] [i_10] [i_10 + 2])) - (22087))))) << (((((int) arr_37 [i_10 - 3])) - (1929335764)))));
                    arr_40 [i_10] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8] [i_8] [i_10]))) * (max((arr_30 [i_8] [(unsigned char)5]), (((/* implicit */unsigned long long int) (signed char)-68)))))));
                    arr_41 [i_10] [i_9] [i_9] [i_9] = min((((((((/* implicit */_Bool) (short)32767)) ? (548682072064LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)67))))) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8]))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)64)) * (((((/* implicit */int) (signed char)-68)) / (((/* implicit */int) (signed char)127))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_48 [i_8] [i_9] [i_10] [i_11] [i_12] [i_8] = ((/* implicit */short) (_Bool)0);
                                var_20 = ((/* implicit */unsigned short) ((_Bool) ((arr_45 [i_10 - 2] [i_10 - 3] [i_10 + 1] [i_10 - 3] [i_10] [i_8 + 2] [i_8 + 1]) / (arr_45 [i_10 + 3] [i_10] [i_10 - 3] [i_8] [i_8] [i_8 - 2] [i_8 - 2]))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((17397998263690126682ULL), (((/* implicit */unsigned long long int) arr_24 [i_8]))))) ? (9162778596990497272LL) : (17179869183LL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_10 - 3] [i_8 - 1] [(unsigned short)3] [i_8 + 1] [i_8] [i_8 - 1]))))) ? (((/* implicit */int) arr_34 [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_26 [i_8]))))), (max((9073308243462788436ULL), (((/* implicit */unsigned long long int) arr_26 [i_8 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_13 = 2; i_13 < 11; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    {
                        arr_58 [i_8] [i_8] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_8] [i_8] [i_8])) / (arr_47 [i_8 + 1] [i_8 - 1] [i_13 - 1] [i_13 - 1])));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_8] [i_13])) <= (((/* implicit */int) (signed char)35))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8]))) + (arr_51 [i_13] [i_13])))) ? (((/* implicit */int) arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((((/* implicit */int) arr_52 [i_8] [i_13])) - (((/* implicit */int) arr_56 [i_8] [i_13] [i_8])))))) + (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), ((short)16384))), (((/* implicit */short) (_Bool)0)))))));
        }
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((short) arr_59 [i_16] [i_16]));
        var_25 = ((/* implicit */unsigned int) arr_26 [i_16]);
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_16]))));
        var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (signed char)92)) - (((/* implicit */int) arr_24 [i_16])))));
    }
    /* vectorizable */
    for (unsigned int i_17 = 1; i_17 < 20; i_17 += 2) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_17 + 1])) ? (((/* implicit */int) arr_65 [i_17 + 1])) : (((/* implicit */int) arr_25 [i_17 + 1]))));
        arr_67 [i_17] = ((/* implicit */int) arr_64 [i_17 - 1] [i_17]);
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((-548682072068LL) / (((/* implicit */long long int) ((/* implicit */int) (short)1023)))))) || (((/* implicit */_Bool) (signed char)77))));
            arr_71 [i_17 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)99)) << (((((/* implicit */int) (unsigned short)35974)) - (35970)))));
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 17; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_17])) || (((/* implicit */_Bool) (signed char)-19)))))));
                        arr_76 [i_17] [i_18] [i_17] [i_20] = ((/* implicit */unsigned char) arr_69 [i_17] [i_17 - 1]);
                        var_31 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_17 + 1] [i_17 + 1]))) / (-1LL))));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */signed char) ((unsigned long long int) (signed char)120));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13881)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned short)8215))));
    }
}
