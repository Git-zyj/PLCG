/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35970
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((signed char) (!(((/* implicit */_Bool) var_2))))), (((/* implicit */signed char) var_17)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)7]);
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21061))))) ? ((~(min((17750560882643692722ULL), (((/* implicit */unsigned long long int) var_13)))))) : (((((/* implicit */_Bool) (~(arr_2 [i_2] [(short)9])))) ? (min((((/* implicit */unsigned long long int) (unsigned short)21061)), (17750560882643692722ULL))) : (16072180390832298523ULL)))));
                        arr_9 [i_3] [i_2] [8LL] [7LL] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) 1904076785)) ? (17750560882643692719ULL) : (1484849537720546009ULL))))) ? (((/* implicit */unsigned long long int) (-(arr_0 [(signed char)9])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), ((~(var_18))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) (-(696183191065858907ULL)));
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2] [i_5] = ((/* implicit */_Bool) min((arr_5 [i_5] [i_0] [i_0] [i_0]), (arr_5 [i_5] [i_5] [i_5] [i_5])));
                        }
                        arr_15 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16900))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) (~((+(arr_12 [i_0] [i_2] [i_0] [i_0] [i_0])))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2142039672))) ? (min((((/* implicit */unsigned long long int) max((arr_16 [0ULL] [i_2] [i_4]), (arr_5 [i_0] [i_0] [i_2] [i_0])))), (var_18))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(arr_7 [i_0] [i_2] [i_2] [i_4] [i_0])))) / (8388741828919676676LL))))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 16961894535989005604ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 16961894535989005602ULL)))))) : (min((arr_16 [i_0] [i_1] [i_4]), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), ((~(var_16)))))) : ((-(arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] [(short)1] [i_1])))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (696183191065858893ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 17750560882643692722ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41307))) : (var_18)))))) : (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)16))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_23 [i_7] [(_Bool)1] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)992)) - (992))))))) : ((-(((/* implicit */int) (short)11250))))));
                        /* LoopSeq 4 */
                        for (int i_8 = 3; i_8 < 8; i_8 += 1) /* same iter space */
                        {
                            var_26 *= ((/* implicit */unsigned long long int) arr_13 [i_7] [i_7] [i_8 - 2] [i_8 - 2] [i_8]);
                            arr_26 [i_7] [i_7] = ((/* implicit */short) arr_1 [i_2]);
                            arr_27 [i_0] [i_1] [i_2] [i_0] [6ULL] |= ((/* implicit */signed char) (_Bool)1);
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 8; i_9 += 1) /* same iter space */
                        {
                            var_27 += ((/* implicit */int) ((((unsigned long long int) var_14)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11730)) ? (((/* implicit */int) (short)11729)) : (613426375))))));
                            arr_30 [i_9] [i_0] [i_7] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [(signed char)6] [i_7] [4ULL] [5U] [i_2] [i_7] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)1008)) && (((/* implicit */_Bool) arr_24 [i_0] [i_7] [(unsigned short)4] [i_2] [i_7] [i_0] [(signed char)6]))))) : (((/* implicit */int) ((_Bool) 1066622077)))));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 8; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((short) arr_16 [i_0] [i_2] [i_7]));
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-1009)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))))));
                        }
                        for (int i_11 = 3; i_11 < 8; i_11 += 1) /* same iter space */
                        {
                            var_29 ^= min(((-(((/* implicit */int) ((((/* implicit */int) arr_37 [i_7])) == (((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_11 + 2] [i_11]))))))), (((((/* implicit */int) (short)-11716)) + (((/* implicit */int) arr_22 [i_11 + 1] [i_11 - 3] [i_2] [i_11 - 2] [i_11 - 2])))));
                            var_30 &= ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_2] [i_7] [0ULL]);
                        }
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_7])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_7])) : (((/* implicit */int) arr_10 [i_7] [(short)7] [i_0]))))), (arr_31 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max((((/* implicit */unsigned int) var_17)), ((+(arr_0 [i_1]))))))));
                                var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_12]))))) ? (((/* implicit */int) var_11)) : (((int) (unsigned short)60453))));
                                var_34 ^= ((/* implicit */unsigned short) arr_36 [i_0] [i_0] [i_0] [i_0] [8ULL]);
                                var_35 &= ((/* implicit */unsigned int) (-((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) % (arr_4 [i_0] [i_2] [i_12])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_14 = 3; i_14 < 9; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_1] [i_14]) ? (arr_6 [i_0] [i_1] [i_2] [i_14]) : (((/* implicit */int) var_6))));
                        var_37 = ((/* implicit */int) var_3);
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (short)-11250)) : (((/* implicit */int) arr_25 [i_0] [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [i_2])))) ^ (((/* implicit */int) ((_Bool) 633066677U))))))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_48 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_25 [i_0] [i_1] [i_2] [i_0] [i_2] [5ULL] [i_2])))), (((((/* implicit */_Bool) (~(-361583688)))) ? (((((/* implicit */int) (short)1008)) | (((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)117)), ((short)23504))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1553675199)) ? ((+(arr_31 [i_16] [i_15] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [1ULL] [i_16]))))) < (((/* implicit */unsigned long long int) 14U))));
                            var_40 = ((/* implicit */_Bool) ((unsigned long long int) ((arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15] [i_15] [i_15] [i_15] [i_15]))))));
                            var_41 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            arr_55 [i_17] = ((((/* implicit */int) min(((unsigned short)52934), (((/* implicit */unsigned short) arr_33 [i_0] [i_1] [i_0] [i_15] [i_17]))))) / (((/* implicit */int) ((short) (short)990))));
                            var_42 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [(_Bool)1] [i_17] [(unsigned short)5])) ? (((((var_15) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_2])) - (2808))))) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned short)4088)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_17] [i_0] [i_17]))))))), (((((/* implicit */_Bool) max(((short)-7556), (((/* implicit */short) (unsigned char)188))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) 11U))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_43 *= ((/* implicit */signed char) arr_44 [i_1] [i_15] [i_2] [i_1] [i_0] [i_0]);
                            var_44 += arr_36 [i_18] [i_2] [i_2] [i_2] [i_0];
                        }
                    }
                }
            } 
        } 
    } 
    var_45 &= 16961894535989005607ULL;
}
