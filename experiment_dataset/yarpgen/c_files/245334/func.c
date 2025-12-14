/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245334
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
    var_20 = ((/* implicit */short) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) var_1);
                    var_22 = ((/* implicit */unsigned short) (~(arr_2 [i_2] [i_2 - 1] [i_2 - 1])));
                    arr_6 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (+(4025422021367384058LL)));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16U)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34185)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) var_19)) != (25U))) || (((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_3)))));
            /* LoopNest 3 */
            for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) arr_0 [i_6]);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned long long int) 267386880U)) : (18446744073709551598ULL)));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 4294967268U))));
                            var_28 = ((/* implicit */int) (+(arr_13 [i_3 + 1])));
                        }
                    } 
                } 
            } 
            var_29 &= ((/* implicit */short) (-(9U)));
            var_30 &= ((((/* implicit */_Bool) (+(1675946074U)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (-1647910913))));
            /* LoopSeq 4 */
            for (int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_18)) & (((/* implicit */int) arr_1 [i_3])))) - (((/* implicit */int) arr_7 [i_7 + 1] [i_3 + 2] [i_7 + 1]))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_32 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) ^ (-1LL));
                    arr_22 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (arr_19 [i_3 - 1] [i_3 - 2]) : (((/* implicit */int) var_9))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (-(-8353735700432876088LL))))));
                }
                for (unsigned short i_9 = 3; i_9 < 20; i_9 += 4) 
                {
                    arr_25 [2LL] [2LL] [2LL] [2LL] |= ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (short)-25473)) : (((/* implicit */int) (unsigned short)52077)));
                    var_34 = (-(1585232702445837215LL));
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) & (arr_5 [i_0]))) & (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_16)) - (159)))))))))));
                }
                for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 1675946067U)) ? (((/* implicit */int) arr_10 [i_0] [i_7])) : (((/* implicit */int) arr_24 [i_0] [i_7] [i_7] [i_3 - 1]))));
                    var_37 = ((/* implicit */int) arr_9 [i_7]);
                }
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) (short)-25463);
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((var_19) + (2147483647))) >> (((3817710912103301602LL) - (3817710912103301573LL))))))));
                var_40 = ((/* implicit */short) arr_24 [i_0] [(short)12] [i_0] [i_0]);
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_13 = 1; i_13 < 17; i_13 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_27 [i_0] [i_0 + 1])) : (((/* implicit */int) var_18)))))));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25485))) != (arr_12 [i_0 - 1] [i_12])));
                    arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)235)))))) : (arr_12 [i_0] [i_0 - 1]));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12] [i_12]))) : (var_0)));
                }
                for (short i_14 = 1; i_14 < 17; i_14 += 2) /* same iter space */
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_3 + 1] [i_14 + 4])) ? (var_19) : (arr_23 [i_0] [i_0])));
                    var_44 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3 + 2])) ? (arr_38 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 1]) : (arr_38 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])));
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_3 + 2]))) - (arr_31 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14 + 2])));
                    /* LoopSeq 4 */
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((long long int) 4LL)) & (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3])))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24)))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        var_46 = (~(arr_26 [i_0 + 1] [i_3 + 1] [i_3 - 1] [i_14 + 1]));
                        var_47 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6136)) && (((/* implicit */_Bool) (unsigned short)15720))));
                    }
                    for (unsigned long long int i_17 = 4; i_17 < 20; i_17 += 3) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (unsigned short)65509)))));
                        arr_53 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(arr_51 [i_0] [i_0] [i_0])))) : (arr_13 [i_0 - 1])));
                        var_49 = (~(var_5));
                    }
                    for (unsigned long long int i_18 = 4; i_18 < 20; i_18 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((int) ((long long int) arr_26 [i_0] [i_0] [i_0] [i_0]))))));
                        var_51 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_0] [i_3 + 2] [i_0] [i_0]))));
                        var_52 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65510))));
                    }
                }
                var_53 = ((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12])))));
            }
            for (unsigned short i_19 = 3; i_19 < 17; i_19 += 1) 
            {
                var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((arr_32 [i_3 + 1] [i_3 + 1] [i_19 - 3]) > (arr_32 [i_3 + 1] [i_3 + 1] [i_19 - 2]))))));
                var_55 = arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
            }
        }
        for (short i_20 = 2; i_20 < 19; i_20 += 3) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65521)) | (((/* implicit */int) (short)25468)))))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_22 = 1; i_22 < 19; i_22 += 1) 
                {
                    var_57 |= ((((/* implicit */_Bool) arr_32 [i_20 - 2] [i_20 - 2] [i_20 - 2])) ? (var_10) : (((/* implicit */long long int) arr_32 [i_20 + 2] [i_20 + 2] [i_20 + 2])));
                    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))));
                }
                for (int i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    var_59 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1647910912)) ? (((/* implicit */int) (unsigned short)13462)) : (((/* implicit */int) arr_60 [i_0] [i_0] [i_0])))))));
                    var_60 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (arr_32 [i_0] [i_0] [i_0 - 2]) : (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0])))));
                    arr_72 [(unsigned short)18] [i_0] [i_0] [(unsigned short)18] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (short i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41045)) & (((/* implicit */int) (unsigned short)52078)))))));
                        var_62 = (~(((/* implicit */int) var_12)));
                    }
                    for (short i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
                    {
                        var_63 = ((/* implicit */short) var_18);
                        var_64 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25478)) / (((/* implicit */int) arr_1 [i_25]))))) ? (((((/* implicit */long long int) 1574274745)) ^ (arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65497))));
                        var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) (+(-44067739))))));
                        var_66 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1574274756)) || (((/* implicit */_Bool) -1647910892)))) ? (((/* implicit */int) (unsigned short)52051)) : (((/* implicit */int) var_1))));
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_20] [i_0 - 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_66 [i_20] [i_20] [i_20] [i_23])) : (((/* implicit */int) arr_14 [i_20] [i_21] [i_21] [i_21]))));
                    }
                }
                var_67 |= ((/* implicit */unsigned long long int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_80 [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (int i_26 = 0; i_26 < 21; i_26 += 4) 
                {
                    arr_83 [i_0] [i_0] [i_0] [i_20] [i_20] [i_0] = ((/* implicit */unsigned short) ((var_8) != (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_8)))));
                    arr_84 [i_0] [i_0] [i_0] [i_20] = ((/* implicit */signed char) ((unsigned int) arr_7 [i_0 + 1] [i_0 - 1] [i_20 - 1]));
                }
                for (unsigned short i_27 = 2; i_27 < 20; i_27 += 4) 
                {
                    var_68 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_86 [i_20] [i_0] [i_0] [i_0] [i_20])) : (((/* implicit */int) arr_86 [i_0] [i_0] [i_0] [i_0] [i_20]))))));
                    var_69 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-4789241684455908765LL)))) ? (((/* implicit */int) arr_85 [i_27 - 2] [i_27 - 2] [i_27 - 2] [i_27 - 2] [i_27 - 2] [i_27 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))))));
                    var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_27] [i_20 + 1] [i_27])) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))))));
                    var_71 = ((/* implicit */unsigned long long int) max((var_71), (((/* implicit */unsigned long long int) (+(arr_5 [i_0 + 1]))))));
                    var_72 = ((/* implicit */int) ((((/* implicit */long long int) var_19)) / (((((/* implicit */_Bool) var_15)) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46075)))))));
                }
            }
        }
        for (short i_28 = 2; i_28 < 19; i_28 += 3) /* same iter space */
        {
            var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) var_19))));
            var_74 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-122))));
            var_75 = ((/* implicit */short) arr_16 [i_0]);
        }
        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) 
        {
            var_76 = ((/* implicit */unsigned int) ((unsigned short) (-2147483647 - 1)));
            var_77 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : ((+(4294967284U)))));
        }
        var_78 |= ((((/* implicit */_Bool) var_2)) ? ((~(arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_18))));
        /* LoopNest 3 */
        for (long long int i_30 = 4; i_30 < 18; i_30 += 3) 
        {
            for (int i_31 = 3; i_31 < 20; i_31 += 1) 
            {
                for (unsigned short i_32 = 3; i_32 < 17; i_32 += 4) 
                {
                    {
                        var_79 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_28 [i_30] [i_30])) ? (arr_92 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)46428)))))));
                        var_80 = ((/* implicit */unsigned long long int) arr_32 [i_32] [i_32] [i_32]);
                        var_81 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7U)) ? (6673730996515666797ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27896)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_33 = 2; i_33 < 20; i_33 += 1) /* same iter space */
    {
        var_82 = ((/* implicit */unsigned short) var_6);
        var_83 = ((((/* implicit */_Bool) arr_23 [i_33] [i_33])) ? (((/* implicit */unsigned long long int) (-(460128372)))) : (max((((/* implicit */unsigned long long int) (unsigned short)58503)), (((((/* implicit */_Bool) (unsigned char)130)) ? (10192110817569533981ULL) : (10738345169448556962ULL))))));
        var_84 = ((/* implicit */short) (-(((((/* implicit */int) arr_94 [i_33] [i_33 - 2] [i_33])) ^ (((/* implicit */int) var_2))))));
    }
    var_85 |= ((/* implicit */int) var_10);
}
