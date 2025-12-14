/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212117
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
    var_20 = ((/* implicit */int) 1721184387U);
    var_21 = ((/* implicit */int) min((var_21), (max((((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) (short)-12235)) ? (var_12) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((2573782909U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)6864)))))))), (((/* implicit */int) var_16))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? ((-(var_10))) : (((/* implicit */unsigned int) max((1665983714), (((/* implicit */int) (unsigned short)65535)))))))) ? ((+(min((4189949102U), (((/* implicit */unsigned int) (short)-23749)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_23 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -1001448146))) ? (((((/* implicit */_Bool) var_5)) ? (var_11) : (var_18))) : (min((arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]), (arr_8 [i_1] [i_1 + 1] [1] [i_1])))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((2969968408U) ^ (((/* implicit */unsigned int) -2055897044)))), ((+(2573782909U)))));
                        var_25 = (-((+(((/* implicit */int) (short)-1)))));
                        var_26 = ((int) ((((/* implicit */_Bool) (short)32754)) ? ((+(((/* implicit */int) (unsigned short)39565)))) : (((/* implicit */int) min((arr_6 [i_2]), ((unsigned short)24207))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_16 [23U] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(2094707827U)));
                            arr_17 [i_0] [i_3 - 1] [i_3 - 1] [i_3] [i_4] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((1324998888U) >> (((((/* implicit */int) (unsigned short)16257)) - (16244))))));
                        }
                        for (int i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            var_27 = ((/* implicit */int) ((unsigned int) var_17));
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-29)) >= (((/* implicit */int) var_4))))) : ((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */int) (signed char)-115)) - (((/* implicit */int) (short)14336)))) : ((-(-1125937817))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 904094500);
                            arr_25 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3] [i_6] = ((/* implicit */signed char) ((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5857)) ? (var_13) : (var_13)))))) | (((/* implicit */unsigned int) min((-1001448146), (((((/* implicit */int) (short)32767)) / (31835280))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_2))) & ((-(((/* implicit */int) var_9))))));
                            arr_28 [i_0 - 1] [20] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(1393559494U)));
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) - (((((/* implicit */_Bool) var_9)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            var_31 = (+(((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0 + 3] [i_3 + 1])) & (arr_10 [(signed char)19] [i_1 - 1] [(signed char)19] [(signed char)19]))));
                            arr_33 [i_0] = ((/* implicit */int) var_0);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_38 [i_0 + 2] [(short)23] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */unsigned int) var_12))))));
                        var_32 = (unsigned short)49278;
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (1721184387U) : (((/* implicit */unsigned int) arr_31 [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_1 - 2]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_41 [i_0] [i_0] [i_2] [i_10] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)5412)) << (((2573782909U) - (2573782893U)))));
                        var_34 = ((/* implicit */unsigned short) ((((3092407973U) >> (((((/* implicit */int) (short)12611)) - (12596))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_35 ^= ((/* implicit */int) var_10);
                    }
                }
                var_36 = ((/* implicit */signed char) arr_36 [23] [i_0 - 1] [i_0 - 1] [(signed char)19]);
                var_37 += ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) >> (((660669350) - (660669319)))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_11] [i_11] [i_11] [6U] [i_1])) ? (((((/* implicit */_Bool) 0)) ? (-1001448146) : (((/* implicit */int) var_4)))) : (max((((/* implicit */int) var_14)), (arr_12 [(signed char)6] [i_1] [i_0] [i_0 + 1] [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)4538))))) : (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097088)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)0))))) : (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11]))))))))))));
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((1165476618), (2147483647))))));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (short i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) min((var_1), (((((/* implicit */_Bool) (signed char)-2)) ? (1321889827) : (0))))))));
                                arr_51 [i_11] [i_11] [i_13] [i_0] [i_11] [i_13] = ((/* implicit */unsigned short) ((((unsigned int) arr_7 [i_12 + 4] [21] [i_12 - 1] [i_12 + 2])) <= (((/* implicit */unsigned int) var_6))));
                                arr_52 [i_0] [i_1 - 1] [i_11] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1] [22] [i_1 + 1])) ? (((/* implicit */int) (signed char)-113)) : (arr_10 [i_0 + 1] [i_1 + 1] [i_11] [i_11])))) : (var_19)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
