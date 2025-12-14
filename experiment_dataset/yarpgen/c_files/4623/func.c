/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4623
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
    var_13 = ((/* implicit */unsigned char) var_2);
    var_14 ^= ((/* implicit */unsigned int) ((281200098803712ULL) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_0)) : (3151394528U))))))));
    var_15 -= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)-48)), (0U))) > (394796538U)))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((signed char) ((long long int) var_9))))));
        var_18 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_19 -= ((/* implicit */short) arr_0 [i_1]);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (short)11))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_21 += ((/* implicit */unsigned int) (-(var_6)));
                        var_22 ^= ((/* implicit */unsigned int) ((arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 - 1]) / (arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 + 3])));
                        var_23 = ((/* implicit */short) min((var_23), (arr_5 [i_3] [(short)19])));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(var_5))))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_26 = ((/* implicit */signed char) (+((+(var_5)))));
                arr_18 [i_5] [i_5] [i_6] = 3696636031U;
                var_27 = ((/* implicit */unsigned int) (unsigned char)255);
            }
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (arr_16 [i_7 + 1] [i_7])));
                        arr_24 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */long long int) (-(arr_19 [i_5])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 18; i_9 += 4) 
            {
                for (int i_10 = 2; i_10 < 19; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 18; i_11 += 4) 
                        {
                            var_29 &= ((/* implicit */long long int) (-(arr_31 [i_10] [i_10 - 2] [13] [i_10] [i_10])));
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(2699631109442226828LL)))) ? (((((/* implicit */long long int) var_4)) | (var_10))) : (((/* implicit */long long int) arr_22 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10]))));
                            var_30 = ((var_4) >> (((arr_12 [i_1] [i_1] [(short)3] [i_9 - 3]) - (1253301233810008611LL))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            arr_35 [i_5] [i_5] = ((/* implicit */int) arr_20 [i_5] [i_9 - 3] [i_10 - 1] [5LL]);
                            arr_36 [i_1] [i_5] [i_9 - 2] [i_10] [i_1] [i_10] [i_9] = ((/* implicit */int) arr_21 [i_1]);
                        }
                        for (signed char i_13 = 3; i_13 < 19; i_13 += 2) 
                        {
                            var_31 *= ((/* implicit */unsigned int) var_1);
                            arr_39 [i_1] [i_1] [16U] [i_5] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-3483))));
                            arr_40 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20103))) : (var_2)));
                        }
                        for (unsigned int i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            var_32 = ((unsigned int) var_1);
                            var_33 -= ((/* implicit */unsigned int) var_0);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_34 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(0U))))));
                            var_35 = ((/* implicit */unsigned int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10 - 2] [i_9 + 2] [i_10 - 2] [i_10 + 1] [i_9 + 2])))));
                            arr_47 [i_1] [i_5] [i_9] = ((/* implicit */signed char) ((arr_31 [(unsigned char)10] [i_10 - 2] [i_10 - 1] [i_5] [i_5]) | (((/* implicit */unsigned long long int) arr_11 [i_10 + 1] [i_10 - 2] [i_9 - 3] [i_9 - 3]))));
                            var_36 = ((/* implicit */short) arr_6 [i_10 - 1] [i_9 - 1]);
                            arr_48 [i_1] [i_5] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_28 [i_1] [6LL] [i_5]);
                        }
                    }
                } 
            } 
        }
        for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            arr_53 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (short)24877);
            var_37 ^= var_11;
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    for (short i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */short) ((arr_41 [i_19 - 1] [i_19] [i_19] [i_19 + 3] [i_19 + 2] [i_19 + 2] [(short)9]) & (arr_41 [i_19 + 2] [i_19] [19ULL] [i_19 + 1] [i_19 + 4] [i_19 + 1] [i_19])));
                            arr_63 [i_1] [i_17] [i_16] [i_1] [i_18] [i_18] = ((arr_22 [i_1] [i_1] [i_1] [i_17]) << (((arr_23 [i_19 - 1] [i_19] [(unsigned char)2] [i_19] [i_19]) - (15344067660394193676ULL))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_16] [i_17] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))))) > (arr_23 [i_1] [i_19 - 1] [i_17] [i_17] [i_19])));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */unsigned int) max((var_40), (2125550021U)));
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 2) 
    {
        var_41 = ((955625918U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_20]))));
        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (~(var_0))))));
    }
    /* vectorizable */
    for (short i_21 = 1; i_21 < 23; i_21 += 2) 
    {
        var_43 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_67 [i_21 - 1]) : (arr_67 [i_21]))));
        arr_68 [i_21] [i_21] = ((/* implicit */int) var_12);
    }
}
