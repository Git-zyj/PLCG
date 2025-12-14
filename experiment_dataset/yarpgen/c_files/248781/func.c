/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248781
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
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_10) : (var_15)));
    var_19 ^= ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(18446744073709551615ULL)))));
        arr_2 [4] |= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) var_5))))))) : ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
                                arr_17 [(_Bool)1] [i_2] [(_Bool)1] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_16)) ? (var_13) : (var_14)))));
                                arr_18 [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        arr_22 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_11))))));
                        arr_23 [(signed char)5] [i_6] [i_3] [i_3] [i_6] [(signed char)5] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0)));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                            arr_27 [i_7] [i_6] [i_3 - 1] [i_6] [i_1] = (+(((/* implicit */int) var_9)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_34 [i_1] [i_6] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                    }
                    var_27 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16)))))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))));
                    /* LoopSeq 3 */
                    for (int i_12 = 3; i_12 < 19; i_12 += 1) 
                    {
                        var_31 ^= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        arr_42 [i_11] [i_11] [i_12] [i_12 - 1] = ((/* implicit */unsigned char) (~((~(var_0)))));
                        var_32 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_6))))));
                    }
                    for (long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        arr_45 [i_1] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_46 [(_Bool)1] [i_10] [i_11] [i_13 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(7569551215199713754ULL)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_37 = (!(((/* implicit */_Bool) var_11)));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))));
                            arr_49 [i_14] [i_13] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (var_3) : (((/* implicit */long long int) var_13))));
                        }
                    }
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_54 [i_15] = ((/* implicit */_Bool) (-(16264693405119160018ULL)));
                        arr_55 [i_1] [i_15] [i_10] [(unsigned short)17] [(short)11] [i_15] = ((/* implicit */int) (!(var_1)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 3) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_59 [i_10] [i_15] [i_16 - 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                            var_40 = ((/* implicit */short) var_14);
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        arr_62 [i_17] = ((/* implicit */short) (~((~(((/* implicit */int) var_11))))));
        arr_63 [i_17] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        arr_64 [i_17] = ((/* implicit */unsigned int) (+(10805814731163565792ULL)));
    }
    /* LoopSeq 3 */
    for (unsigned short i_18 = 2; i_18 < 21; i_18 += 4) 
    {
        var_41 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_2))))));
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (var_14)))) : (((var_17) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
        var_43 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (+(var_8)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13))))));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_69 [i_19] = ((/* implicit */unsigned short) var_1);
        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (unsigned char i_20 = 4; i_20 < 8; i_20 += 3) 
        {
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                {
                    var_45 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)));
                    arr_78 [i_19] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))));
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (short i_23 = 0; i_23 < 12; i_23 += 4) 
                        {
                            {
                                arr_83 [i_19] [(short)8] [i_20] [i_22] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 16264693405119160025ULL))));
                                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_24 = 3; i_24 < 10; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 13; i_25 += 3) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 4) 
            {
                {
                    var_47 ^= (-(((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                    var_48 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? ((~(var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))))));
                }
            } 
        } 
        var_50 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_8)))), ((~(var_14)))));
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 13; i_27 += 3) 
        {
            for (short i_28 = 0; i_28 < 13; i_28 += 1) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 3) 
                {
                    {
                        arr_101 [i_29] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_14)) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                        var_51 -= (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        arr_102 [i_24 + 3] [(_Bool)1] [i_27] [i_28] [i_28] [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (max((var_15), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_12))))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (var_14)))));
                        arr_103 [i_24] [i_29] [i_29] [i_29] = (((!(((/* implicit */_Bool) 6ULL)))) ? ((+(((/* implicit */int) var_17)))) : ((+(((/* implicit */int) var_1)))));
                        arr_104 [i_29] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))))));
                    }
                } 
            } 
        } 
        arr_105 [i_24 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_13))))));
    }
}
