/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4568
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
    var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_1)), (var_7))), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)254))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_0 [3U]) : (16231516917381775466ULL)))), (((/* implicit */unsigned long long int) (((+(arr_0 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
                var_21 = ((unsigned int) ((((((/* implicit */int) (signed char)-92)) - ((-2147483647 - 1)))) | (((/* implicit */int) ((1771912790U) >= (var_9))))));
                var_22 = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_14 [i_4] [i_3] [i_2] = ((/* implicit */_Bool) (~(3709464626U)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_5] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) var_6);
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max(((~(max((var_13), (((/* implicit */unsigned int) arr_12 [i_6] [i_4] [i_3] [i_2])))))), (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)79))))) : (((4127126798U) / (arr_11 [i_2] [i_5]))))))))));
                            }
                        } 
                    } 
                    arr_23 [i_4] [13ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_4])) ? (max((((/* implicit */unsigned int) ((signed char) var_0))), (max((((/* implicit */unsigned int) (unsigned char)64)), (arr_1 [i_2] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_28 [i_8 + 1] [i_2] [i_8] [i_8 + 1] [i_7] [i_2] [i_4])) : (arr_20 [i_8] [(short)8] [i_2] [i_8 - 3] [i_2] [i_4] [i_4])))))));
                                arr_29 [i_2] [i_3] [i_4] [i_4] [i_7] [i_7] [i_8 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((signed char) (-((-(arr_21 [i_2] [i_3] [i_4] [i_8])))))))));
                                arr_30 [i_2] [i_2] [i_7] [(short)5] [i_7 - 3] [i_8 - 1] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-63)), ((-((-(18298524272382041048ULL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_28 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_2] [i_9 - 1]), (((/* implicit */int) arr_35 [i_2] [i_3] [i_9] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_6)), (var_7))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))))))) : (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-68))))) : (arr_20 [i_9 + 1] [i_3] [(unsigned char)8] [i_10] [i_2] [i_2] [i_10]))))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(max((((/* implicit */unsigned int) ((signed char) var_10))), (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))))))))));
                            }
                        } 
                    } 
                    arr_39 [i_9] [i_9] [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((signed char) var_3)))))));
                }
                /* LoopNest 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) ((short) 18298524272382041048ULL))) ? (((/* implicit */int) max(((((_Bool)1) && (((/* implicit */_Bool) (short)32745)))), ((!(((/* implicit */_Bool) -6335225831609315087LL))))))) : (((/* implicit */int) (signed char)118)));
                                arr_50 [i_2] [i_13] [i_12] [i_13] [i_2] [(_Bool)1] = ((((/* implicit */_Bool) (+(arr_33 [i_13 + 3] [i_13] [i_13] [i_14])))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))))) : (min((arr_43 [i_13] [i_13 + 2] [i_13] [7U]), (arr_43 [i_3] [i_13 + 3] [i_13 + 3] [i_14]))));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (3952355776U)))))), (((((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_13 - 1] [12U])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_43 [i_13] [i_13 + 3] [i_13 + 3] [i_2]))))))));
                                arr_51 [i_2] [i_2] [i_2] [i_13] [(signed char)2] = ((/* implicit */unsigned int) max((((arr_32 [i_13]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-57))))) : (arr_34 [i_12] [i_13] [i_13] [i_13 + 2]))), (((/* implicit */unsigned long long int) min(((signed char)-71), (var_6))))));
                                arr_52 [i_2] [i_2] [i_2] [i_13] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) (+((~(((/* implicit */int) max((arr_4 [(unsigned char)12] [i_12]), (((/* implicit */short) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) (signed char)-1);
                /* LoopSeq 1 */
                for (unsigned int i_15 = 3; i_15 < 13; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            {
                                var_32 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2885173884U), (4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_17]))))) : (((/* implicit */int) ((_Bool) var_0)))))), (max((min((((/* implicit */unsigned int) (unsigned short)65535)), (555836301U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))));
                                arr_61 [i_15 - 3] [i_3] [i_16] = ((/* implicit */unsigned int) ((int) (_Bool)0));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((unsigned int) var_2))))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) min(((-(arr_41 [i_15 - 1] [i_15 - 3] [i_15 - 1] [i_15 + 1]))), (arr_41 [i_15 + 1] [i_15 - 1] [i_15 - 3] [i_15 - 3])));
                    arr_62 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(max((min((var_0), (((/* implicit */long long int) arr_1 [(unsigned char)4] [i_15])))), (((/* implicit */long long int) arr_56 [i_15 - 2] [(unsigned char)6] [i_15] [(_Bool)1] [(unsigned char)6] [i_15 + 1]))))));
                    var_35 |= ((/* implicit */_Bool) arr_4 [(short)3] [i_3]);
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)58230)))));
                }
                arr_63 [i_2] [i_3] [i_3] = var_3;
            }
        } 
    } 
}
