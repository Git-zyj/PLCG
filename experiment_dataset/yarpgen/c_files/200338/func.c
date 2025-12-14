/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200338
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) var_4)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_8 [i_1 + 2] [15LL] [15LL] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        }
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 4 */
                for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    var_17 = ((/* implicit */int) min((var_17), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))))));
                    var_18 = ((/* implicit */short) (~(arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                    var_19 = (+(arr_11 [i_0]));
                }
                for (short i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    arr_22 [i_0] [i_2 + 1] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) (+(((var_0) | (((/* implicit */unsigned long long int) arr_0 [i_5]))))));
                    arr_23 [8U] [i_2 - 1] [i_3] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_6] [i_7] [i_6] [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_20 [i_0] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]));
                        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        arr_29 [i_0] [i_2] [i_2 - 1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0] [i_6] [i_3] [(_Bool)1] [i_0] [i_3])) > (((/* implicit */int) arr_5 [i_2 - 1] [i_6]))));
                    }
                    for (short i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) ^ ((+(((/* implicit */int) var_2))))));
                        var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_5 [i_2] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((~(var_6)))));
                        arr_34 [i_0] [i_2] [i_3] [i_0] [i_6] [i_2] [i_8] = ((/* implicit */short) (~(var_4)));
                    }
                    arr_35 [i_3] [i_3] [i_3] [i_6] [i_2] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 1] [i_2 + 1])) | (((/* implicit */int) arr_17 [i_2 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) var_12);
                        arr_38 [i_2] [i_2] [i_3] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) ((arr_18 [13LL] [i_6] [i_3] [i_2 + 1] [i_2] [i_0]) ? (((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_3] [i_0] [i_9] [i_9])) : (((/* implicit */int) var_1))));
                        var_25 += ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-4415)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_3] [i_6])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [i_10])))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3]))) * (var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_2] [i_3] [i_2] [7LL])))))));
                        var_28 &= ((/* implicit */unsigned int) arr_36 [i_10] [i_6] [12U] [i_2] [(unsigned char)11]);
                        var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_3]))) ^ (var_13));
                        var_30 += ((/* implicit */short) (+(arr_11 [i_2 - 1])));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32566)) ? (2097150U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [4ULL] [i_2] [i_2 - 1])))));
                        var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_2] [i_12] [i_3] [i_2] [i_12] [8U])) ^ (arr_0 [i_2])))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_14 [i_0] [i_3]))))));
                        var_33 = ((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3]);
                        var_34 = var_12;
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_35 = (!(((/* implicit */_Bool) var_3)));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (~((~(1966869832U))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        arr_54 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((_Bool) (short)27119));
                        var_37 = ((/* implicit */short) (~(0U)));
                        var_38 = ((/* implicit */unsigned int) max((var_38), ((~(arr_11 [i_3])))));
                        var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_0))))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) arr_21 [i_15] [i_3])))) : (((/* implicit */int) var_8))));
                        var_41 = ((/* implicit */unsigned int) arr_41 [i_0] [i_2 - 1]);
                        var_42 = ((/* implicit */unsigned int) min((var_42), ((+(arr_53 [i_2 - 1] [(unsigned short)10])))));
                    }
                    arr_58 [i_2] = ((/* implicit */unsigned char) ((unsigned int) arr_15 [i_2] [6U] [i_2 - 1]));
                }
                var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_0] [i_2 - 1] [(unsigned char)8] [i_3])))))));
            }
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
            {
                var_44 &= (+(3809370752U));
                arr_62 [i_2] = ((/* implicit */int) (((~(((/* implicit */int) arr_13 [i_16] [i_2] [i_0] [i_0])))) > (((/* implicit */int) arr_5 [i_2] [i_16 - 1]))));
                var_45 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_2 - 1] [i_2 - 1]))));
            }
            /* LoopSeq 1 */
            for (short i_17 = 1; i_17 < 14; i_17 += 3) 
            {
                var_46 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) || (((/* implicit */_Bool) (unsigned char)69)))))));
                arr_65 [i_0] [i_2] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_17 - 1] [i_2 + 1])) - (((/* implicit */int) var_1))));
                var_47 = ((/* implicit */signed char) var_8);
            }
            var_48 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
        }
    }
    var_49 = max((((((/* implicit */_Bool) ((short) 2328097446U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_12)))))) : (var_4))), (((/* implicit */long long int) max(((+(var_13))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
    var_50 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_10)) + (4610))) - (21))))) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_12)), (var_9)))))));
}
