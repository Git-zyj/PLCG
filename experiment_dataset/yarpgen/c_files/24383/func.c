/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24383
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)-9))));
    var_21 = ((/* implicit */long long int) (short)-8421);
    var_22 = ((/* implicit */signed char) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) (signed char)9);
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(9763700915972008086ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(unsigned short)5] [i_0] [i_3] [1] = ((/* implicit */long long int) var_0);
                                arr_14 [i_4 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (short)26869);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_5] [i_0] [i_0] [i_5] = ((/* implicit */signed char) var_19);
                    arr_18 [(short)3] [(short)3] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) 1ULL)) ? ((+(1747778872U))) : (((((/* implicit */_Bool) var_3)) ? (1747778878U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    var_24 = ((/* implicit */unsigned int) 9763700915972008105ULL);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3538117041U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned short)41497)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41497))) : (1779091067347410544ULL)))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned short)24039))))));
                }
                arr_19 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)60779))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */short) 1747778872U);
        var_26 = ((/* implicit */unsigned char) 1030205842);
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17316)) ? (6356496549141449600ULL) : (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6)))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            arr_34 [(short)9] [i_8] = ((/* implicit */unsigned int) var_5);
                            var_29 = 2U;
                            arr_35 [6LL] [i_8] [i_7] [i_8] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5676021076958704770LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (-1LL)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (1030205849) : (((/* implicit */int) (short)27050))))));
            }
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                arr_38 [i_7] [i_11] = var_10;
                var_32 = ((/* implicit */signed char) var_7);
            }
        }
        for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-93)))) : ((+(var_17)))));
            var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65535))))));
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_10)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65526)))))))));
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 13; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27050)) ? (((/* implicit */int) (short)-27062)) : (((/* implicit */int) (short)6699))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_3))));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))) : (4294967285U));
                            var_38 = ((/* implicit */short) (unsigned short)1);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) (unsigned short)24039)) : (((/* implicit */int) (signed char)106))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)72))))) : (var_14));
                    arr_53 [i_12] [i_12] [i_16] = ((/* implicit */unsigned char) var_2);
                }
                for (signed char i_17 = 1; i_17 < 14; i_17 += 4) 
                {
                    var_40 = ((/* implicit */short) var_10);
                    arr_57 [i_12] = ((/* implicit */short) var_4);
                    arr_58 [i_12] [i_12] = ((/* implicit */int) var_13);
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17277717646088662929ULL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned short)30077))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775800LL)));
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-12258))))) : (((((/* implicit */_Bool) (signed char)106)) ? (3155331120U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                        arr_62 [i_17] [1] [5U] [i_12] [i_17] [i_17] [i_17] = ((/* implicit */signed char) 4294967285U);
                    }
                    for (short i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        arr_67 [(unsigned char)5] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_19) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048574U)) ? (-1976576444) : (((/* implicit */int) (signed char)-1)))))));
                        arr_68 [i_12] [i_17] [(unsigned char)8] [i_12] = ((/* implicit */signed char) (-((+(((/* implicit */int) (short)9928))))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) 198674589U)) ? ((-(((/* implicit */int) (unsigned short)4756)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_3))))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 13; i_20 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12283)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)4756)))))));
                        arr_71 [i_20] [(unsigned char)5] [i_20] [i_20] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_19))))));
                        arr_72 [i_6] [i_6] [i_12] = ((/* implicit */signed char) (unsigned short)12180);
                        var_45 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (short i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? ((~(((/* implicit */int) (signed char)-20)))) : (((/* implicit */int) (signed char)-3)))))));
                        var_47 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4U)) ? (3669291848U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12260)))))));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4756))))) ? (((((/* implicit */_Bool) (short)-15229)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (11U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) 2147483647)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                    }
                }
                for (int i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    arr_78 [i_12] [i_6 + 3] [i_6] [i_12] = ((/* implicit */unsigned short) var_4);
                    var_50 = ((/* implicit */short) var_14);
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        arr_81 [i_6] [i_12] [i_12] [(short)15] [(short)15] [(short)15] [(short)15] = ((/* implicit */short) (unsigned short)7245);
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4294967279U) : (((/* implicit */unsigned int) -2147483647))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5714))))))));
                        var_52 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32189))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        arr_84 [15U] [15U] [i_24] [15U] [i_24] [i_12] [i_12] = ((/* implicit */unsigned char) var_16);
                        arr_85 [(unsigned short)2] [i_12] [i_13] [i_12] [(signed char)8] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                        var_53 = (+((-(((/* implicit */int) (signed char)-1)))));
                    }
                }
                var_54 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_16))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 16; i_25 += 3) 
        {
            for (unsigned char i_26 = 0; i_26 < 16; i_26 += 1) 
            {
                {
                    arr_92 [i_6] [i_25] [i_26] = ((/* implicit */short) -8037853162481591119LL);
                    arr_93 [i_26] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-127))))) ? (((/* implicit */unsigned int) 2147483647)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53359))) : (8U))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 2) 
                    {
                        var_55 = var_8;
                        var_56 = ((/* implicit */unsigned char) var_19);
                    }
                    for (unsigned char i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) var_17);
                        /* LoopSeq 1 */
                        for (int i_29 = 0; i_29 < 16; i_29 += 2) 
                        {
                            var_58 -= 4294967288U;
                            arr_101 [4U] [i_28] [4U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3392434094U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (902533212U)))) : (14040391575943140583ULL)));
                            arr_102 [i_6 + 3] [i_6] [i_6 - 1] = ((/* implicit */short) var_12);
                        }
                        var_59 = ((/* implicit */signed char) var_19);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_30 = 3; i_30 < 13; i_30 += 3) 
                    {
                        for (unsigned char i_31 = 0; i_31 < 16; i_31 += 4) 
                        {
                            {
                                var_60 = ((/* implicit */unsigned char) var_15);
                                var_61 = ((/* implicit */unsigned char) var_4);
                                arr_108 [i_31] [(unsigned short)0] [i_30] [i_31] [i_31] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483629)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))));
                                arr_109 [i_30] [i_30] [i_30] [i_30] [i_25] [i_6 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_13))))));
                                var_62 = ((/* implicit */short) ((((/* implicit */_Bool) 2221694513U)) ? ((~(4406352497766411036ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_32 = 0; i_32 < 16; i_32 += 4) 
        {
            for (unsigned char i_33 = 0; i_33 < 16; i_33 += 2) 
            {
                {
                    arr_116 [i_6] [i_6] [i_32] [i_33] = ((/* implicit */unsigned int) var_13);
                    arr_117 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (902533212U)));
                    /* LoopSeq 4 */
                    for (signed char i_34 = 0; i_34 < 16; i_34 += 3) /* same iter space */
                    {
                        var_63 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        var_64 *= var_1;
                    }
                    for (signed char i_35 = 0; i_35 < 16; i_35 += 3) /* same iter space */
                    {
                        var_65 -= ((/* implicit */unsigned char) 2221694513U);
                        var_66 = ((/* implicit */signed char) 902533212U);
                    }
                    for (signed char i_36 = 0; i_36 < 16; i_36 += 3) /* same iter space */
                    {
                        var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967277U)))));
                        arr_126 [i_6] [i_33] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) -2147483638)) : (2221694522U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32193)))))));
                    }
                    for (signed char i_37 = 0; i_37 < 16; i_37 += 3) /* same iter space */
                    {
                        var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) 0U)) ? (3392434084U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3392434083U)) ? (((/* implicit */int) var_8)) : (-2147483631))))));
                        var_69 = ((/* implicit */signed char) var_19);
                        var_70 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)62135)) ? (4294967275U) : (2375036679U)))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_38 = 0; i_38 < 24; i_38 += 2) 
    {
        var_71 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
        var_72 = ((/* implicit */unsigned int) (unsigned short)65535);
    }
}
