/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201970
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
    var_11 = ((/* implicit */short) var_6);
    var_12 = ((/* implicit */unsigned long long int) (~(0U)));
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (7685639650314106725ULL))), (((/* implicit */unsigned long long int) (-(min((var_1), (((/* implicit */long long int) (short)32767)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_0] [2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-22), ((signed char)-20))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (_Bool)1))))) ? (((long long int) (signed char)37)) : ((+(var_1)))))));
                    var_14 &= -5672677146905317998LL;
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (min((((unsigned int) arr_8 [i_0] [(_Bool)1] [i_0])), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) (signed char)3))))))));
                    arr_10 [i_0] [(_Bool)1] [i_0] = (+(((var_1) << (((((((((/* implicit */_Bool) (short)-13479)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))) + (57))) - (56))))));
                }
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */short) ((signed char) (+(((unsigned int) arr_3 [6ULL] [3LL])))));
                            var_17 -= ((short) (_Bool)1);
                            arr_21 [i_0] [i_0] [i_4] [i_0] [i_5] [(signed char)5] [(signed char)5] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (signed char)-61)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [5U]))))) >> (((/* implicit */int) arr_18 [i_6] [(_Bool)1] [i_4] [i_4] [(short)0] [(_Bool)1])))), (((/* implicit */unsigned long long int) (signed char)4))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_10)))) ? (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)206))))))));
                            arr_24 [i_0] [(_Bool)1] [i_4] [i_5] [i_7] = ((/* implicit */signed char) var_8);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_4] [i_4] [i_7])) ? ((~(arr_12 [i_7] [i_4] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */int) arr_17 [i_0] [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_7])) & (((/* implicit */int) max((var_5), (((/* implicit */short) arr_20 [i_0] [(signed char)7] [i_5] [i_7]))))))) : (((/* implicit */int) ((_Bool) 7495651289578049422ULL)))));
                            arr_25 [1U] [1U] [1U] [i_4] [i_0] = ((/* implicit */long long int) (_Bool)1);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL)))))) ? (((/* implicit */int) arr_18 [i_0] [(_Bool)1] [9U] [(_Bool)1] [(unsigned short)4] [i_7])) : (((/* implicit */int) ((_Bool) max((((/* implicit */short) (signed char)2)), (arr_8 [i_0] [(short)1] [i_4])))))));
                        }
                        for (signed char i_8 = 3; i_8 < 7; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_0] [i_5] [i_8] = ((((/* implicit */unsigned long long int) -2143687197)) - (min((((/* implicit */unsigned long long int) max((arr_27 [i_0] [i_1] [i_4] [i_4] [i_0]), ((short)22167)))), (min((arr_11 [i_0] [i_1] [i_5] [i_8]), (var_7))))));
                            arr_31 [(_Bool)1] [i_0] [(_Bool)1] [8] [8ULL] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned long long int) (unsigned char)56)))), (1ULL)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_8] [i_8 + 2] [i_8 - 2] [(short)2] [i_0])), (((unsigned short) var_4))))))));
                            arr_32 [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_8)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551592ULL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) 63)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (signed char)65)) : (209349215))))))) : (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [(short)6] [(short)6])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_37 [i_0] [i_1] [i_4] [i_1] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)32762)), (arr_2 [i_0] [i_9]))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_5))))), ((((_Bool)1) ? (10951092784131502194ULL) : (((/* implicit */unsigned long long int) 2147483638))))))));
                            var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (-128323960) : (((/* implicit */int) (short)30720))))) ? (((((((/* implicit */int) arr_17 [i_0] [i_0] [(_Bool)1] [i_5] [i_9])) + (2147483647))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)1))))))) : (((/* implicit */int) ((signed char) min((6593422815234341762ULL), (6320489560683875343ULL)))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) var_7))) < (arr_34 [i_0] [i_0] [7ULL] [8U] [i_0])));
                        }
                        arr_38 [(_Bool)1] [(_Bool)1] [i_4] [i_0] [2LL] = ((/* implicit */signed char) (_Bool)1);
                        arr_39 [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_1] [i_5])) : (var_2))), (((/* implicit */int) min(((short)17321), (((/* implicit */short) (_Bool)1))))))) : (((((/* implicit */int) (signed char)-73)) * (((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */short) (unsigned short)56245);
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((_Bool) (short)-5));
                            arr_46 [(signed char)1] [(_Bool)1] [i_4] [i_10] [i_0] = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_28 [3ULL] [i_0] [i_10] [8LL] [3ULL]))))), (min((((/* implicit */long long int) arr_1 [(_Bool)1] [i_1])), (var_1))))));
                            arr_47 [0ULL] [(_Bool)1] [i_0] [i_10] [i_0] [0ULL] [i_0] = ((/* implicit */short) ((_Bool) ((signed char) var_10)));
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            arr_50 [i_12] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) arr_6 [i_0] [(short)6] [i_0])) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_1] [i_0]), (((/* implicit */signed char) (_Bool)1))))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17321))) * (0ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned char)9] [i_0] [i_4] [i_10] [i_12]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-17331)), (4294967291U))))));
                            arr_51 [6U] [i_0] = ((/* implicit */short) var_4);
                        }
                    }
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)16454)));
                        arr_55 [(unsigned char)2] [(unsigned char)2] [9LL] [i_0] = ((/* implicit */int) (signed char)-2);
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_58 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)32766)))) * (((/* implicit */int) min(((unsigned short)15573), (var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_1 [i_4] [i_0])));
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 128323959)) ? (((/* implicit */unsigned long long int) var_3)) : (13225436432575781252ULL)))))));
                            var_27 = ((int) 7243716209245536398LL);
                            arr_59 [i_0] [(_Bool)0] [i_0] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(var_10)))))));
                        }
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_2 [i_0] [(unsigned short)7]), (((/* implicit */long long int) ((int) arr_29 [i_4] [i_1] [i_4] [i_13]))))))));
                    }
                    var_29 = ((/* implicit */long long int) arr_35 [i_0] [i_0]);
                    arr_60 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)111)))) ? (((/* implicit */long long int) var_10)) : (((var_1) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))))) ? (min((((int) var_3)), ((-(-128323951))))) : ((+(((/* implicit */int) ((_Bool) -189771477)))))));
                    arr_61 [i_0] = (+(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_1] [i_1] [i_0]))));
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    var_30 = arr_63 [i_0] [i_0] [4] [i_0];
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1082221273)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4773))) : (0ULL)));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1871723757U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)101)) / (-286965440)))) : (((((((/* implicit */unsigned long long int) 2627620160U)) & (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (var_10)))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-112)));
                    var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_15]))));
                    var_35 = ((/* implicit */unsigned short) min((min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_13 [i_1] [i_0])))), (((/* implicit */long long int) (unsigned char)131)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_15] [i_0] [(short)8]))))))))));
                }
                arr_68 [i_1] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) arr_14 [i_0] [i_1])) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) - (arr_14 [i_1] [i_0])))));
                arr_69 [i_0] [i_0] [6LL] = ((/* implicit */unsigned short) max(((signed char)-117), ((signed char)-59)));
            }
        } 
    } 
}
