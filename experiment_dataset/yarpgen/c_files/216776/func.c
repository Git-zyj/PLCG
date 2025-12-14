/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216776
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
    var_16 = ((/* implicit */_Bool) (signed char)(-127 - 1));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (signed char)0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0]))));
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (+(0U)));
                    var_21 = arr_4 [i_0] [16U];
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_5] [i_5])), (var_7)))))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_19 [i_8])));
                        arr_21 [i_7] [i_6] [i_7] [i_8 + 1] = ((/* implicit */short) min((((/* implicit */unsigned int) var_6)), (var_7)));
                        arr_22 [i_5] [i_5] [i_7] [i_7] [i_8] = arr_12 [i_5] [i_6] [i_7] [i_8 + 2] [i_7];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 4; i_12 < 10; i_12 += 2) 
                        {
                            arr_34 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] [i_10] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_8 [i_10]))))));
                            var_24 = ((/* implicit */unsigned int) var_5);
                        }
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_39 [i_5] [i_5] [i_10] [(short)6] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_9]))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((+(var_13))), (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_10] [i_9 - 1] [i_9 - 2])))))));
                            var_26 ^= ((/* implicit */signed char) arr_29 [i_5] [i_9] [i_10] [i_10]);
                        }
                        var_27 = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        arr_40 [(_Bool)1] = ((/* implicit */unsigned short) var_2);
        var_28 -= ((/* implicit */_Bool) (-(var_13)));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_29 += ((/* implicit */unsigned int) arr_0 [(short)0]);
        arr_43 [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_30 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (min((var_7), (((/* implicit */unsigned int) arr_8 [0U]))))));
        var_31 = ((/* implicit */_Bool) arr_7 [(signed char)2] [i_15] [i_15] [(signed char)2]);
        var_32 = ((/* implicit */signed char) var_15);
        /* LoopSeq 3 */
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            var_33 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_57 [i_17] [i_17] [i_17] = arr_5 [i_18] [i_16] [i_16];
                        arr_58 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */short) var_6);
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_52 [i_18] [i_16] [i_16] [i_15]))));
                        var_35 = ((/* implicit */_Bool) min((7041028547915309353LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)48977)))))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
                        {
                            arr_61 [i_17] [i_19] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_55 [i_15] [i_17] [i_17])));
                            arr_62 [i_15] [i_17] = ((/* implicit */short) var_2);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_65 [i_17] [i_17] [i_17] [(unsigned char)16] [(unsigned char)16] [i_20] [i_16] |= ((/* implicit */signed char) min((arr_46 [i_18] [i_15]), (((/* implicit */unsigned short) (_Bool)0))));
                            arr_66 [i_20] [i_20] [i_17] [i_16] [i_17] [i_16] [i_15] = ((/* implicit */signed char) var_3);
                        }
                    }
                } 
            } 
            arr_67 [i_15] = max((((/* implicit */unsigned short) max((arr_7 [i_16] [i_15] [i_16] [i_16]), (arr_7 [i_16] [i_16] [i_15] [i_16])))), (max((arr_46 [i_16] [i_16]), (var_4))));
        }
        for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                for (int i_23 = 1; i_23 < 20; i_23 += 3) 
                {
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 1) 
                    {
                        {
                            arr_78 [i_15] [i_23] [i_24] = arr_52 [i_15] [i_15] [i_23] [i_15];
                            arr_79 [i_15] [i_21] [i_22] [(short)2] [i_23] = ((/* implicit */unsigned short) arr_72 [i_15] [i_21 - 1] [i_22]);
                            arr_80 [i_24] [i_23] = ((/* implicit */unsigned short) max((arr_56 [i_15] [i_21 + 1] [i_22] [i_23] [i_15]), ((_Bool)1)));
                            var_36 = ((/* implicit */int) max((var_36), ((-(((/* implicit */int) (short)4095))))));
                        }
                    } 
                } 
            } 
            var_37 ^= ((/* implicit */_Bool) (~(max((var_7), (((/* implicit */unsigned int) arr_3 [(_Bool)1] [i_15] [i_15]))))));
        }
        for (unsigned int i_25 = 2; i_25 < 22; i_25 += 1) 
        {
            var_38 = ((/* implicit */_Bool) 1826876421813701429ULL);
            /* LoopNest 2 */
            for (unsigned short i_26 = 4; i_26 < 22; i_26 += 2) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        arr_87 [i_15] [i_25 - 1] [i_26] [i_26] [i_27] = ((/* implicit */unsigned short) (!(var_5)));
                        var_39 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_49 [i_25 + 1] [i_25 - 1] [i_26 + 1]), (((/* implicit */unsigned short) arr_74 [i_26] [i_25 + 1])))))));
                    }
                } 
            } 
        }
        arr_88 [i_15] = ((/* implicit */signed char) arr_47 [i_15]);
    }
}
