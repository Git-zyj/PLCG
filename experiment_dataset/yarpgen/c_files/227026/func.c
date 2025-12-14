/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227026
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
    var_20 = ((/* implicit */unsigned short) ((short) var_19));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_19);
                                var_22 = ((/* implicit */unsigned int) max((((arr_9 [i_0] [i_3] [i_1] [i_3]) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-64))))))), (((/* implicit */long long int) ((_Bool) (~(4185213809U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        var_23 -= ((/* implicit */short) ((max(((~(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)63321)))))) << (((((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (17986948367241062261ULL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 |= ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_17)))));
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_13 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1])));
                            arr_18 [i_1] [7] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) arr_11 [i_5]);
                            var_25 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / ((-(arr_9 [i_0] [i_1] [i_2] [i_5])))));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_21 [i_1] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (max((((long long int) (unsigned short)2214)), (((/* implicit */long long int) (short)25494))))));
                            var_26 ^= ((/* implicit */short) ((_Bool) max((((/* implicit */int) ((signed char) -2003569855))), ((-(1686751247))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -705641724)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65513))) : (arr_5 [(unsigned char)6] [i_2] [i_2] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_2] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33927))))))));
                            var_28 = ((/* implicit */int) max((max((((/* implicit */unsigned char) arr_6 [i_8] [i_8 - 2] [i_8 - 2])), (var_18))), (((/* implicit */unsigned char) max((arr_6 [i_8] [i_8 + 2] [i_8]), (var_1))))));
                            var_29 = ((/* implicit */short) ((int) ((unsigned char) 764430172718669274ULL)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_30 &= ((/* implicit */int) ((((/* implicit */long long int) 1073741312)) * (((long long int) arr_3 [i_2]))));
                            arr_26 [i_0] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */int) (signed char)78)) == ((+(arr_16 [i_1] [i_1])))));
                            var_31 += ((/* implicit */int) ((((/* implicit */unsigned int) (~((~(arr_16 [i_2] [i_9])))))) < (((((/* implicit */_Bool) arr_23 [i_5 + 1] [i_1] [i_5 + 1] [i_5] [i_9])) ? (max((((/* implicit */unsigned int) var_1)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_9])))))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) -58870858914548702LL))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(arr_11 [i_5 - 2])))) | (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 2] [i_0]))) : (var_6))))))));
                            var_34 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (~(-1494750779)))), (1982126849U)))));
                            var_35 = ((/* implicit */long long int) (~((-(((var_10) ? (var_13) : (((/* implicit */int) (unsigned short)31608))))))));
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4754247674932250883LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_2] [i_1] [i_1] [i_2]))))));
                            var_37 = ((2003569839) / (((/* implicit */int) (signed char)121)));
                            var_38 = ((/* implicit */int) ((signed char) ((((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_16))))) | (((/* implicit */int) arr_1 [i_0] [i_2])))));
                        }
                        for (int i_12 = 3; i_12 < 21; i_12 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [5]), (arr_25 [i_0] [i_1] [i_2] [i_1] [i_5 - 2] [i_12] [i_12])))), (((((/* implicit */_Bool) 8388352)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5 - 3] [i_12])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            arr_35 [i_0] [i_1] [i_2] [i_5] [i_12 - 3] = arr_10 [i_0] [i_1] [i_2] [i_5] [i_12 - 3];
                            var_40 = ((/* implicit */int) (~((+(var_15)))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        arr_39 [i_0] [i_1] [i_2] [i_13] = ((/* implicit */unsigned int) (((((+(arr_5 [i_0] [i_1] [i_2] [i_13]))) * (((/* implicit */unsigned long long int) ((int) var_2))))) > (((/* implicit */unsigned long long int) max(((~(arr_19 [i_1] [i_2] [i_1] [i_1]))), (((/* implicit */long long int) ((int) 813586478))))))));
                        /* LoopSeq 4 */
                        for (short i_14 = 1; i_14 < 22; i_14 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [(unsigned short)11] [i_13] [i_14 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_2] [i_13] [i_13] [i_14]))))) ? (63ULL) : (((((/* implicit */unsigned long long int) 165737711)) & (14129163116950152504ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(67645734912LL)))))))));
                            var_42 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (max((((/* implicit */long long int) var_3)), (var_12)))));
                            var_43 = ((/* implicit */unsigned short) (-(max((var_12), (((/* implicit */long long int) arr_16 [i_1] [i_14 + 1]))))));
                        }
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */signed char) ((int) var_13));
                            var_45 = ((/* implicit */unsigned char) var_16);
                            var_46 = ((/* implicit */signed char) (-(((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_15]))));
                            var_47 ^= max((((/* implicit */long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) (_Bool)1))))), (-3433592139329786619LL));
                        }
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                        {
                            arr_48 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((long long int) arr_46 [i_0] [i_1] [i_2] [i_13]));
                            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((arr_2 [i_0] [i_2] [i_0]) == (((/* implicit */int) var_14)))))));
                        }
                        for (signed char i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                        {
                            var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))));
                            var_50 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (max((arr_33 [i_13] [i_1] [i_2] [18ULL] [i_17]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                            var_51 = ((/* implicit */unsigned int) ((max((2089036449), (((/* implicit */int) (short)25467)))) & (((((/* implicit */int) ((unsigned short) var_9))) | (((/* implicit */int) arr_27 [13ULL] [19U] [i_2] [i_1] [i_0] [13ULL]))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_18 = 2; i_18 < 22; i_18 += 4) 
                        {
                            var_52 -= ((/* implicit */short) (+(((((/* implicit */long long int) var_9)) | (arr_20 [i_18 - 2] [i_18] [i_18] [i_18] [i_18])))));
                            var_53 = ((((((/* implicit */int) (short)-16558)) + (2147483647))) << (((((/* implicit */int) (signed char)6)) - (6))));
                            var_54 = ((((/* implicit */long long int) ((/* implicit */int) (short)25467))) % (-8670653446882608870LL));
                        }
                        for (unsigned short i_19 = 1; i_19 < 22; i_19 += 3) 
                        {
                            var_55 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_19] [i_19 + 1] [i_19] [i_19] [i_13])) ? (arr_20 [i_19] [i_19 + 1] [i_19 - 1] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (short)17329))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5)))))));
                            arr_58 [i_0] [i_1] [i_13] [i_19] = ((/* implicit */signed char) (+((-(arr_30 [i_0] [i_19 - 1] [i_2] [i_13] [i_19] [i_0])))));
                            arr_59 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) max((3ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                            arr_60 [i_0] [i_1] [i_13] = ((/* implicit */signed char) arr_30 [i_19] [i_19] [i_0] [i_13] [i_0] [i_1]);
                        }
                        /* vectorizable */
                        for (signed char i_20 = 0; i_20 < 23; i_20 += 1) 
                        {
                            var_56 = ((/* implicit */int) var_8);
                            arr_63 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17ULL))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_57 += ((/* implicit */long long int) (unsigned short)16);
                        /* LoopSeq 2 */
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 1) /* same iter space */
                        {
                            var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) (~(arr_49 [i_0] [9LL] [i_1] [i_1] [i_22] [i_1] [i_0]))))));
                            var_59 -= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (signed char i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
                        {
                            arr_71 [i_0] [i_1] [i_1] [i_1] = -1698196182;
                            var_60 &= ((/* implicit */unsigned char) (~(-8670653446882608849LL)));
                            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) arr_56 [i_0] [i_2] [i_2] [i_21] [i_23]))));
                            var_62 = arr_43 [i_23] [i_21] [i_1] [i_1] [i_0] [i_0];
                        }
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 23; i_24 += 2) 
                        {
                            var_63 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_2] [i_21] [i_24])) || (((/* implicit */_Bool) -5109396414274223255LL)))))));
                            var_64 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1959782030))))));
                            var_65 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_24] [i_21] [(signed char)22] [(signed char)22] [i_0]))));
                            var_66 = (!(((/* implicit */_Bool) (~(120898395589116207ULL)))));
                        }
                        var_67 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_68 [i_1] [i_21] [i_2] [i_2] [i_1] [i_1])) * (((unsigned long long int) (signed char)-87))));
                    }
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 3) 
                    {
                        arr_76 [i_0] [i_1] [i_0] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) 11672794416952610946ULL)) ? (5109396414274223269LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))));
                        arr_77 [i_0] [i_1] [i_1] [i_0] = (signed char)19;
                        arr_78 [i_0] [i_1] [i_25] = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) (unsigned short)53935))) + (2147483647))) << ((((((-(((/* implicit */int) arr_57 [i_2])))) << ((((~(((/* implicit */int) var_19)))) - (28628))))) - (1920)))));
                        var_68 = (!(((/* implicit */_Bool) arr_67 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])));
                        var_69 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)-16558)) ^ (arr_4 [(_Bool)1])))));
                    }
                    /* LoopSeq 1 */
                    for (int i_26 = 1; i_26 < 21; i_26 += 1) 
                    {
                        arr_81 [i_1] [i_2] [i_2] [(_Bool)0] = (~(((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_26] [i_26 - 1] [i_0])) ? ((~(((/* implicit */int) (unsigned short)55019)))) : (((/* implicit */int) ((_Bool) 108086391056891904LL))))));
                        var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) ((unsigned int) ((long long int) ((signed char) (signed char)-7)))))));
                        var_71 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)255)), (17ULL)));
                    }
                    arr_82 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-16);
                    var_72 = ((/* implicit */long long int) max((((int) (_Bool)0)), (((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)6)), (var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_73 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 4) 
    {
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            {
                arr_87 [i_27] [i_27] = ((int) (-(1365672180)));
                var_74 = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_27] [i_28] [i_28] [i_27] [i_28]))));
                arr_88 [i_27] = ((((((/* implicit */_Bool) -5109396414274223250LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((5109396414274223234LL), (((/* implicit */long long int) (unsigned char)112)))))) < (((/* implicit */long long int) ((/* implicit */int) (short)16575))));
            }
        } 
    } 
}
