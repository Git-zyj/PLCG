/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192765
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0 - 2] [i_0] = ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)-119)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (signed char)-80)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)(-127 - 1))))))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-121)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_1))))) : (((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))));
        }
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (min((var_15), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : ((~(var_4)))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) | (var_18)))) ? (((/* implicit */int) max((max((var_8), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) min((var_3), (var_2))))))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_8))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_14)))))) << (((min((((/* implicit */int) var_9)), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_3)))))) + (41)))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_13)))) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_14)) - (208))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) (signed char)111))), (((var_15) & (((/* implicit */long long int) var_13))))))) | (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_16)), (var_1)))), (((unsigned long long int) var_12))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) var_18))));
            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_15)));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (42)))));
                        var_27 ^= ((/* implicit */long long int) var_7);
                        var_28 = ((/* implicit */short) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))));
            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_11)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1))));
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        }
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_7)) << (((var_18) - (1871380097687064917LL)))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_34 = ((/* implicit */int) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            var_35 *= ((/* implicit */short) ((unsigned char) var_1));
                            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_9))))));
                        }
                        for (short i_13 = 1; i_13 < 12; i_13 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
                            var_39 = ((/* implicit */_Bool) ((unsigned int) var_7));
                        }
                        for (short i_14 = 2; i_14 < 11; i_14 += 3) 
                        {
                            var_40 -= ((signed char) var_3);
                            var_41 = ((/* implicit */unsigned long long int) var_1);
                            arr_41 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)2037)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15))) : (((/* implicit */long long int) ((var_4) & (var_13))))));
            var_43 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_14)) << (((((/* implicit */int) var_14)) - (219)))))));
            arr_42 [i_9] [i_3 - 2] [i_9] = ((/* implicit */unsigned long long int) ((var_13) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_16)))))));
        }
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))));
            var_45 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_11)))))) & (((((/* implicit */_Bool) var_17)) ? (var_15) : (var_18))));
        }
        for (unsigned short i_16 = 4; i_16 < 12; i_16 += 3) 
        {
            var_46 = ((/* implicit */long long int) ((signed char) var_12));
            var_47 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_18))));
            var_48 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) <= (((/* implicit */int) var_11))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
    {
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    var_49 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_15) <= (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 1; i_20 < 16; i_20 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                        {
                            var_50 = ((((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1))))) <= (((/* implicit */int) max((var_17), (((/* implicit */short) var_14))))))) && (((/* implicit */_Bool) var_11)));
                            var_51 = ((/* implicit */unsigned short) min((max((var_12), (((/* implicit */short) var_7)))), (((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-65))))));
                            arr_64 [i_17] [i_17] [15LL] [5] = ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_2)))))) ? (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        for (short i_22 = 1; i_22 < 15; i_22 += 3) 
                        {
                            arr_68 [i_17] [i_20] [i_19] [(_Bool)1] |= (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_2))))));
                            var_52 = (~(((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) & (var_15))));
                            arr_69 [i_17] [i_18 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((var_13), (15U))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_16), (var_0))))))));
                        }
                        var_53 = max((((/* implicit */long long int) ((262144) | (((/* implicit */int) var_1))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) | (var_18))));
                    }
                    arr_70 [i_17] [i_17] [i_19] [i_19] = ((/* implicit */signed char) ((max((var_4), (((/* implicit */unsigned int) var_9)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_7), (((/* implicit */unsigned char) var_0)))), (min((var_7), (var_7)))))))));
                    arr_71 [i_17] [i_17] [i_18] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) | (((long long int) var_13))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_3)))))))) <= (((/* implicit */int) var_2))));
                }
                var_55 |= ((/* implicit */int) ((var_13) << (((/* implicit */int) min((min((var_11), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((var_18) <= (((/* implicit */long long int) ((/* implicit */int) var_17)))))))))));
            }
        } 
    } 
}
