/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195789
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
    var_15 = ((/* implicit */long long int) max(((unsigned short)27293), (min((var_3), (((/* implicit */unsigned short) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_5 [i_1] [i_0] [i_1]))))))) ? ((~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) (unsigned short)45746)))))));
                arr_6 [i_0] = ((/* implicit */long long int) min((arr_3 [i_0]), (max(((unsigned char)31), (arr_3 [i_0])))));
                var_17 &= ((/* implicit */signed char) var_8);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_18 = arr_9 [i_2 - 2];
            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned char)232), ((unsigned char)15))), ((unsigned char)10))))) : (var_12)))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((max((arr_0 [i_5]), (((/* implicit */long long int) ((var_5) <= (arr_9 [i_2])))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) (~(((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) (short)-21)))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_3 [i_5]))))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) max((arr_3 [i_5]), (arr_3 [i_5]))))));
                            var_22 -= min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) + (var_2)))) : (((((/* implicit */_Bool) (unsigned short)64396)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13))))), (((/* implicit */long long int) arr_19 [i_6] [i_5] [i_4 - 1] [i_3] [i_2])));
                            var_23 -= ((/* implicit */int) (~(((long long int) (+(((/* implicit */int) arr_8 [i_4])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) var_10);
                            arr_24 [i_7] [i_5] [i_7] [i_3] [i_7] = (+(4189256649163778238LL));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (unsigned short)64396);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((-2147483647 - 1)) % (((/* implicit */int) (signed char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (max((((/* implicit */long long int) (unsigned short)43940)), (-4809496201309628397LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -4797179125917844854LL)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)225)))))));
                            arr_28 [9] [i_3] [i_3] [(_Bool)1] [i_3] = arr_19 [i_2] [i_3] [0] [i_5] [i_8];
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_2 - 2] [i_2 - 1])) / ((+(((/* implicit */int) arr_26 [i_2 - 1] [i_2 - 1]))))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)64379)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (((((/* implicit */_Bool) 1598883998)) ? (var_10) : (((/* implicit */unsigned long long int) arr_37 [i_2] [i_9] [i_9] [(short)2]))))))));
                            arr_42 [i_11] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)39)) ? ((-(arr_10 [i_2 - 1] [i_10] [i_12]))) : (((/* implicit */unsigned long long int) 19LL))))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (arr_16 [i_2])))) - (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_22 [i_2] [i_11] [i_10] [i_11] [i_12]))))));
                            var_30 += ((/* implicit */unsigned short) max((-20LL), (((/* implicit */long long int) (!(((((/* implicit */int) var_0)) >= (((/* implicit */int) (unsigned short)21596)))))))));
                            var_31 &= arr_34 [i_2] [i_2] [i_2];
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((min((var_14), (((/* implicit */int) (short)-32741)))), ((-(((/* implicit */int) (signed char)88))))))), (((6131696060944045730LL) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) arr_29 [i_2]);
                        arr_54 [i_2] [i_14] [i_14] [i_15] = ((/* implicit */signed char) arr_47 [i_14] [i_14]);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_16 = 2; i_16 < 13; i_16 += 4) 
                    {
                        arr_59 [i_2] [i_13] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)244))) ? (((/* implicit */int) ((_Bool) min((var_11), (((/* implicit */unsigned short) var_7)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_0 [i_14]))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))));
                        arr_60 [i_2] [i_2] [i_14] [i_14] [i_2] [i_13] = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (signed char i_17 = 2; i_17 < 13; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_14])) | (((/* implicit */int) arr_39 [i_13] [i_17]))))), (((long long int) arr_11 [i_14] [i_13] [i_2 - 1])))) & (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_2])))));
                        arr_64 [i_14] = ((/* implicit */long long int) (+(min((((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
                        var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (short)32740)))) : (((/* implicit */int) arr_38 [i_2] [i_13] [i_14] [i_17]))));
                        arr_65 [i_14] [i_13] [i_14] = (+(((((long long int) arr_39 [i_2 + 1] [i_13])) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_1)))))))));
                    }
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min(((unsigned short)41137), (((/* implicit */unsigned short) var_1)))))));
                        var_37 -= ((/* implicit */short) ((-450413152) - (((/* implicit */int) (unsigned short)21609))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)43910)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_45 [i_2] [i_13])))) >= (((/* implicit */int) min((var_6), (((/* implicit */short) var_7)))))))))))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_35 [i_2 - 2])))), ((-(((/* implicit */int) arr_35 [i_2 - 2])))))))));
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            for (unsigned int i_20 = 3; i_20 < 12; i_20 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_21 = 3; i_21 < 13; i_21 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned char) ((8752973217604796151LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21619)))))), (arr_3 [i_21])))), ((~(var_14)))));
                        /* LoopSeq 1 */
                        for (long long int i_22 = 1; i_22 < 13; i_22 += 1) 
                        {
                            arr_80 [i_2] [i_2] [(unsigned char)0] [i_2 - 2] [i_2 - 2] [i_2 - 1] |= ((/* implicit */long long int) (~((+(((((arr_46 [i_2] [i_19] [6LL] [(unsigned short)2]) + (2147483647))) << (((6003492786687967380ULL) - (6003492786687967380ULL)))))))));
                            var_41 -= ((/* implicit */unsigned short) min((arr_78 [i_2] [i_2] [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1))))))))));
                            var_42 ^= ((/* implicit */unsigned char) (+((~((~(72057594037927935LL)))))));
                        }
                        arr_81 [(short)0] [i_21] = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) var_4)), (max((var_0), (((/* implicit */short) var_7)))))), (((/* implicit */short) arr_3 [i_21]))));
                        var_43 = ((/* implicit */_Bool) var_0);
                    }
                    /* vectorizable */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 4) /* same iter space */
                    {
                        var_44 ^= ((/* implicit */short) (((~(((/* implicit */int) var_1)))) * (((/* implicit */int) var_9))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243))))) : (((((/* implicit */int) arr_8 [i_19])) % (-57708985)))));
                        arr_85 [i_2] [i_2] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)55)))) / ((~(((/* implicit */int) (short)32740))))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_11))));
                        var_47 = ((/* implicit */long long int) max((var_47), (5801635597621435223LL)));
                    }
                    for (signed char i_24 = 0; i_24 < 14; i_24 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) ((short) 8839404120752147057LL));
                        arr_88 [i_24] [i_20] [i_19] [i_2] = ((/* implicit */short) ((long long int) var_8));
                    }
                    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) arr_27 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2])))) : (((((/* implicit */int) var_9)) & (131071))))) + (((/* implicit */int) ((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [2LL])))) <= ((~(((/* implicit */int) (_Bool)1))))))))))));
                    var_50 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [i_2 - 2] [i_19] [i_20 + 2])) || (((/* implicit */_Bool) arr_1 [18ULL])))) ? (((/* implicit */int) min((((((/* implicit */int) var_4)) < (((/* implicit */int) arr_53 [i_2] [i_2])))), (((var_5) <= (var_12)))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) 0LL)))), (((var_5) != (arr_58 [i_20] [(signed char)2] [(signed char)6]))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_25 = 0; i_25 < 14; i_25 += 4) 
        {
            var_51 -= ((/* implicit */long long int) var_4);
            arr_91 [i_2 + 1] = arr_30 [i_2 - 2];
            var_52 |= ((/* implicit */signed char) 6557800953143356957LL);
            arr_92 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) >= ((~((~(((/* implicit */int) (short)-26719))))))));
        }
    }
}
