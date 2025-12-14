/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235923
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
    var_19 = max((max((var_8), ((+(var_8))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_14)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))), (((unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))))));
            arr_5 [i_1] [i_1] [0] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (0LL)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_7)) : (var_17))) : (((/* implicit */int) (!(((/* implicit */_Bool) -3LL))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_17)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)27)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (_Bool)1))), (-1))))));
                        var_22 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) (short)127)) ? (var_9) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_4 = 4; i_4 < 17; i_4 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (1) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) (signed char)125)) - (var_14))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-14)))))))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_16 [i_0] = ((/* implicit */_Bool) (short)8726);
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) - (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) -20))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_25 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (-1088598071)))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))));
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_18))));
                    var_28 ^= ((/* implicit */unsigned int) ((var_14) & (var_3)));
                    arr_22 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-112))))));
                    var_29 = ((int) (_Bool)1);
                }
                for (signed char i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    arr_27 [i_0] = ((/* implicit */unsigned char) var_4);
                }
                for (long long int i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_15)) << (((((/* implicit */int) var_6)) - (56220)))))));
                    arr_33 [i_0] [(_Bool)1] [i_9] |= ((/* implicit */short) var_12);
                }
            }
            /* vectorizable */
            for (signed char i_10 = 4; i_10 < 17; i_10 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))));
                var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 18446744073709551605ULL))) << (((((var_16) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18)))) + (57)))));
                var_32 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (signed char)-1)) >= (var_14))));
                var_33 &= (~(var_14));
            }
            for (signed char i_11 = 4; i_11 < 17; i_11 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)24832)) : (((/* implicit */int) var_13)))))) & (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (0LL)))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))));
                arr_40 [(unsigned short)5] [i_1] [i_0] [i_11 + 3] = ((/* implicit */_Bool) ((((/* implicit */int) max((var_4), (var_13)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-1))))));
                arr_41 [i_0] [i_11] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_1)) : (-4)))) / (((18446744073709551605ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9129))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((var_16) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
            }
            for (signed char i_12 = 2; i_12 < 19; i_12 += 3) 
            {
                var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned int) var_18)), (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))));
                /* LoopSeq 2 */
                for (int i_13 = 4; i_13 < 18; i_13 += 4) 
                {
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (0LL)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12))))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_0))))))))) && (((/* implicit */_Bool) min((((var_16) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)63)))), (min((((/* implicit */int) var_0)), (var_3))))))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))))), ((signed char)-5))))) : (max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned short) (short)-4))))), (var_12)))));
                    var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) ((var_3) < (((/* implicit */int) (short)28))))) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-58)))))))) : (((((_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)52)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((var_10) << (((/* implicit */int) var_16))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        arr_52 [i_0] [i_0] [i_0] [i_13] [(_Bool)1] = ((/* implicit */signed char) (+(4906615416327505615ULL)));
                        arr_53 [i_13 + 2] [i_0] [i_13 + 2] [i_13] [i_13] [i_13 - 1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)127)) : (var_9)));
                        arr_54 [i_14] [(unsigned short)1] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */int) var_7)))) <= (((((/* implicit */_Bool) 1814167046)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)2))))));
                    var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6))));
                }
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_59 [i_12 - 2] [i_12] [i_12] [i_0] [i_12 - 1] [i_12] = (+(11ULL));
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) min(((signed char)-23), (((/* implicit */signed char) var_1)))))));
                }
                for (int i_17 = 2; i_17 < 18; i_17 += 1) 
                {
                    var_42 += ((/* implicit */_Bool) var_5);
                    var_43 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (13540128657382045985ULL) : (((/* implicit */unsigned long long int) var_9))))));
                }
            }
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_44 *= (-(((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) var_5)))));
                        arr_69 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (signed char)-25)) : ((-(((/* implicit */int) (unsigned short)65526)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_20 = 2; i_20 < 19; i_20 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    {
                        arr_78 [i_0] = ((/* implicit */short) (signed char)-1);
                        arr_79 [i_21] [i_0] [i_0] [i_20] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)26)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) var_2))))))), (((/* implicit */int) (short)4))));
                        arr_80 [i_0] [i_0] [i_20 + 1] [i_21] [16U] [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (var_9) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))) / (var_12)));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned int) var_15);
        }
        /* vectorizable */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_46 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)1));
            arr_84 [i_0] [i_0] = ((/* implicit */unsigned int) ((((7U) + (var_10))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
        /* vectorizable */
        for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (short i_25 = 3; i_25 < 17; i_25 += 2) 
            {
                for (unsigned short i_26 = 3; i_26 < 19; i_26 += 3) 
                {
                    {
                        var_47 = ((/* implicit */signed char) ((((632141882U) / (var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))));
                        var_48 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1668640184)) || (((/* implicit */_Bool) var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_16)))) : ((-(((/* implicit */int) var_13))))));
                    }
                } 
            } 
            var_49 += ((/* implicit */unsigned char) var_2);
        }
        arr_92 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (-1789297379639360036LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))));
    }
}
