/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22968
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))))) != (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_8))))))));
    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)1)))))) * (((long long int) (unsigned char)29))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_10 [20LL] [20LL] [i_2] [i_3] |= ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((signed char) (unsigned short)1)))))));
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+((-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_7 [i_0] [(signed char)12])))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4088LL)) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) (signed char)-1))));
                                var_14 = ((/* implicit */int) ((unsigned short) (unsigned short)1));
                                var_15 = ((/* implicit */int) max((var_15), (-2077802194)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5] [i_4] = ((/* implicit */int) ((long long int) (((!(((/* implicit */_Bool) var_3)))) ? (-613601617296713682LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (8U)))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((4088LL), (((/* implicit */long long int) arr_2 [14U] [14U]))))) ? (max((((long long int) var_7)), (((/* implicit */long long int) arr_20 [18U])))) : (((/* implicit */long long int) 1U)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) 860676845);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            arr_32 [i_10] [i_10] = ((/* implicit */signed char) arr_1 [i_10]);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_10] [i_10] [i_0] [i_0 - 3])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_10] [i_0] [i_10]) + (((/* implicit */unsigned int) arr_23 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]))))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (3987167087U))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_4)) / (((((/* implicit */_Bool) ((-719975811) + (((/* implicit */int) (unsigned char)232))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3392411968U)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) * (arr_27 [i_0] [i_10] [i_0] [i_0] [i_12])))))));
                        var_20 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_0] [i_0 - 2] [i_0] [i_12]))));
                        arr_37 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 4090LL)) ? (arr_15 [i_12] [i_11] [i_11] [i_10] [i_0]) : (-719975831))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (11U))))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (5256567913606071375ULL)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 4])) ? (arr_30 [i_0] [i_0] [i_11]) : (((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [2U] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0 - 3] [i_0 - 1] [i_0] [i_0] [19ULL])) ? (4294967285U) : (((/* implicit */unsigned int) var_4)))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_13 = 3; i_13 < 6; i_13 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [(unsigned char)14] [i_13] [i_13])) ? (var_2) : (var_2)))))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 2; i_14 < 9; i_14 += 1) 
        {
            for (unsigned int i_15 = 1; i_15 < 9; i_15 += 1) 
            {
                {
                    arr_46 [i_13] [i_14] [8] = ((/* implicit */unsigned char) arr_18 [i_15] [i_13] [i_14] [i_14] [i_13] [i_13] [i_13]);
                    var_22 = ((/* implicit */unsigned char) ((long long int) (-(arr_14 [i_13] [i_14 + 1] [i_14]))));
                    arr_47 [i_13] [i_15] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)64)), (arr_23 [i_13 + 4] [i_13] [i_13 + 4] [i_15])))) ? (arr_22 [i_13 - 2] [7LL] [i_15 + 1] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)1019)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_16 = 1; i_16 < 8; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 9; i_17 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) ((unsigned int) ((int) ((unsigned short) (unsigned char)55))));
                    var_24 = ((/* implicit */signed char) ((unsigned long long int) ((int) arr_18 [3U] [5U] [i_16] [i_16] [i_13 - 1] [i_13] [i_13])));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_18 = 0; i_18 < 17; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            arr_57 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_19] [i_19] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_17 [i_18] [i_19] [i_19] [i_19] [i_19] [i_19])) : ((~(((/* implicit */int) ((unsigned char) arr_27 [i_19] [i_19] [i_18] [i_18] [i_18])))))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_22 = 3; i_22 < 16; i_22 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) arr_58 [i_18] [i_20] [i_21]))))))));
                            arr_65 [i_18] [i_18] [i_19] [i_20] [i_21] [i_18] [i_22] = ((/* implicit */unsigned char) arr_0 [i_21]);
                            arr_66 [i_18] [i_19] [4U] [i_18] [i_18] [i_20] [i_19] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_3 [i_19])) >= (((/* implicit */int) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_58 [i_18] [i_19] [i_20]))))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1004)) && (((/* implicit */_Bool) (signed char)-32))))) >= ((-2147483647 - 1))))));
                            arr_67 [i_18] [i_19] = 17U;
                        }
                        var_26 |= ((/* implicit */unsigned int) arr_53 [i_18] [i_19]);
                        var_27 = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 4294967295U))));
            var_29 ^= ((/* implicit */unsigned short) ((_Bool) min((var_1), (var_9))));
        }
        var_30 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_3)))) && (((/* implicit */_Bool) 1770151651))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1413610149U)) ? (((/* implicit */int) (unsigned short)7989)) : (932973926)));
        /* LoopNest 3 */
        for (unsigned int i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            for (int i_24 = 0; i_24 < 17; i_24 += 1) 
            {
                for (long long int i_25 = 0; i_25 < 17; i_25 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)224))));
                        arr_75 [14LL] [14LL] |= var_2;
                        arr_76 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_58 [i_18] [i_23] [1ULL])) != (((/* implicit */int) arr_72 [i_18] [i_18] [i_18])))))) / (min((min((((/* implicit */long long int) 1741652454)), (var_2))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)29)) & (((/* implicit */int) (signed char)-41)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_28 = 2; i_28 < 13; i_28 += 1) 
                    {
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            {
                                arr_86 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_77 [i_27])), (var_4)))) ^ ((+(13U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1230290763832256014LL)) ? (min((8U), (arr_63 [i_18] [i_18] [14] [14] [i_18] [i_29]))) : (arr_63 [i_18] [i_18] [i_18] [0U] [i_18] [i_18])))) : (((((/* implicit */_Bool) 2147483392U)) ? (((/* implicit */unsigned long long int) 3478993021U)) : (2147450880ULL)))));
                                var_33 = ((/* implicit */unsigned int) (-(min(((((-9223372036854775807LL - 1LL)) ^ (var_2))), (((/* implicit */long long int) ((int) var_3)))))));
                                var_34 *= ((/* implicit */unsigned int) (unsigned short)49824);
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((unsigned int) var_7)) / (min((((/* implicit */unsigned int) var_6)), (650453696U)))))) <= (((arr_30 [i_27] [i_28] [i_29]) % (((/* implicit */long long int) ((unsigned int) 363757977U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_30 = 1; i_30 < 15; i_30 += 1) 
                    {
                        for (unsigned int i_31 = 0; i_31 < 17; i_31 += 1) 
                        {
                            {
                                arr_92 [i_31] [i_18] [i_30] [i_27] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 650453704U)) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)125)))));
                                var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_30 [i_30 - 1] [i_26] [i_27]) == (arr_30 [i_30 + 2] [i_30] [i_31]))))));
                                arr_93 [i_31] [i_30] [i_18] [i_18] [i_26] [i_18] = (-(min((7U), (min((65203840U), (31U))))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((unsigned short) arr_11 [21])))));
                                var_38 = ((/* implicit */unsigned int) arr_59 [i_18]);
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) ((unsigned char) arr_62 [i_18] [i_18] [i_18] [i_18] [i_18]));
                    arr_94 [i_18] [i_26] [i_26] [i_18] = arr_26 [16U] [i_26] [i_27] [i_26] [i_18] [i_18] [i_18];
                    arr_95 [i_18] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1734164034U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (((((/* implicit */_Bool) 2346591779818756859LL)) ? (arr_11 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                }
            } 
        } 
    }
    for (unsigned int i_32 = 1; i_32 < 17; i_32 += 1) 
    {
        var_40 += ((((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_31 [i_32] [9U] [9U]) > (2147483392U))))) >= (((long long int) arr_19 [i_32] [i_32] [i_32] [i_32] [i_32])))))));
        arr_98 [17] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_14 [10U] [i_32] [10U])) > (((arr_30 [i_32] [i_32] [i_32 + 1]) % (((/* implicit */long long int) arr_31 [i_32 - 1] [i_32 - 1] [i_32 - 1]))))));
        var_41 = (-(((((/* implicit */_Bool) 1928627607U)) ? (arr_34 [i_32]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_20 [(signed char)18])))))));
    }
}
