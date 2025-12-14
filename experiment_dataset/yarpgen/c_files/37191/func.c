/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37191
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)240)))) % ((+((-(((/* implicit */int) (unsigned char)114))))))));
                    arr_6 [(unsigned short)12] [(unsigned short)12] [i_2] [i_2 - 4] = ((/* implicit */signed char) (((~(((/* implicit */int) ((unsigned short) var_7))))) ^ ((~(((((/* implicit */_Bool) 1152921502459363328ULL)) ? (((/* implicit */int) (short)21956)) : (((/* implicit */int) (signed char)127))))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_2 - 2] [i_2 - 4])))) ? ((-(arr_3 [i_2 - 3] [i_2 - 1]))) : (((arr_3 [i_2 - 4] [i_2 - 4]) + (var_2))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_3)))) ? (262128U) : (arr_2 [i_0] [i_0]))) << (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) var_2))))) - (((/* implicit */int) ((((/* implicit */_Bool) 3010440726U)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (unsigned short)33686))));
        arr_10 [i_3] = ((/* implicit */_Bool) var_0);
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            var_17 = arr_3 [i_4] [i_5 - 1];
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(min(((-(((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) arr_1 [i_5 - 1] [i_5 + 1])))))))));
        }
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) (~(((unsigned long long int) arr_23 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 2]))));
                        arr_26 [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) arr_19 [i_8] [i_4] [i_4]);
                        arr_27 [i_6] [i_6] [(signed char)7] [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_6 + 1])) ? (arr_9 [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_4] [i_6] [i_6 + 1])) : (((arr_14 [(unsigned short)8] [i_4]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_11 [i_4])))))))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 7; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (var_2)));
                        var_22 ^= var_5;
                        var_23 = ((/* implicit */_Bool) var_5);
                    }
                } 
            } 
            arr_36 [i_9 - 2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)10))));
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 894491824U)) && (((/* implicit */_Bool) (unsigned char)19))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (2504770741U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_12 [i_4]))) : (((/* implicit */unsigned long long int) arr_9 [i_14]))));
                            arr_48 [i_14] [i_13] [i_12] [i_9 + 1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (12U))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned char) ((unsigned char) 4294967295U))))));
            var_27 = ((/* implicit */_Bool) arr_18 [(unsigned short)1] [i_4]);
        }
        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_37 [i_15 - 2] [i_15 - 1] [i_15 - 1] [i_15 - 1])) | (((/* implicit */int) arr_37 [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1])))) | ((~(((/* implicit */int) arr_37 [i_15 + 1] [i_15 - 2] [(_Bool)1] [i_15 - 1]))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_28 [i_4] [i_15 - 1] [i_15 - 2]))));
            arr_51 [i_15 - 1] &= ((/* implicit */signed char) arr_35 [i_15 - 2] [i_15] [i_15] [i_15 + 1]);
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (3177720821U)))) ? (max((((/* implicit */int) arr_25 [(signed char)4] [(signed char)4] [9U] [(signed char)1] [i_15] [1])), (((((/* implicit */int) arr_33 [i_4] [i_4] [i_15] [(signed char)8] [i_4])) - (((/* implicit */int) var_0)))))) : (894300535))))));
        }
        var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_29 [i_4] [i_4] [(unsigned char)0])) << ((((+(((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4])))) - (31800))))) != ((+((~(((/* implicit */int) (signed char)-1))))))));
        arr_52 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3400475472U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1701295348U)));
    }
}
