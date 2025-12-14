/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53490
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-7446)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) var_3))))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)87)), (var_12))), (var_2)))) : ((+(((((/* implicit */unsigned long long int) var_12)) - (var_1)))))));
        arr_3 [(signed char)8] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [(_Bool)1] [(_Bool)1]))))))) > (((/* implicit */int) arr_1 [(signed char)8] [i_0]))));
        arr_4 [i_0] = ((signed char) (unsigned char)65);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_6))));
                        arr_13 [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((_Bool) var_3));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_18 [19LL] = ((/* implicit */short) ((arr_16 [i_5] [i_5]) ? (((/* implicit */int) (_Bool)0)) : (((int) (-9223372036854775807LL - 1LL)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4974))) - (max((var_1), (((/* implicit */unsigned long long int) -408246866)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)3895)), (4294967295U)))))))));
        arr_19 [(unsigned char)10] &= ((((/* implicit */_Bool) ((unsigned int) (unsigned short)60548))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [i_5])) + (((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5]))))), (((((/* implicit */_Bool) (signed char)47)) ? (57430890U) : (var_12))))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((long long int) var_4));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5] [i_5]))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_3))))) / (max((((/* implicit */long long int) (short)-22230)), ((-9223372036854775807LL - 1LL)))))) : (var_9)));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 14; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((long long int) var_11)))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_12))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_9] [i_9] [i_9] [15ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) var_6))), (arr_14 [i_7 - 3] [i_7 - 3])));
                        arr_32 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) min(((unsigned char)80), (((/* implicit */unsigned char) (signed char)28))));
                        arr_33 [i_9] [i_7] [15LL] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) / (min((((/* implicit */unsigned int) -408246847)), (473982530U))));
                        arr_34 [i_9] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max(((signed char)119), ((signed char)30)))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)119)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (min((((((/* implicit */_Bool) ((1667998379U) - (2626968945U)))) ? (max((((/* implicit */long long int) arr_25 [i_6] [i_7 - 3] [i_6])), (var_13))) : (min((var_9), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) ((_Bool) var_2))))))))));
                        arr_38 [i_6] [i_7] [i_8] [i_10] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1703873936)) ? (8360347U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48531))))));
                    }
                    arr_39 [i_6] [i_7 - 2] [i_6] = ((/* implicit */int) max(((+((-(18446744073709551612ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2907213451884557486LL)) ? (3812809663165548151LL) : (((/* implicit */long long int) 8360347U)))), (((/* implicit */long long int) -2147483628)))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7 + 1] [i_7] [i_7]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_45 [i_11] &= ((/* implicit */unsigned char) (-(var_13)));
                    arr_46 [i_6] [i_11] [i_12] = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_13)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-119))))), (var_11)))) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned int) 1511724331)), (3508967806U))) >> ((((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) - (112)))))) : (((((_Bool) var_6)) ? (max((((/* implicit */long long int) (short)-16167)), (3812809663165548149LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [14U] [i_15]))))))))));
                            arr_57 [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (12871209957311815053ULL)));
                            arr_58 [i_6] [i_13] [i_13] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) var_2);
                            var_26 -= ((/* implicit */unsigned short) var_10);
                        }
                        for (int i_17 = 1; i_17 < 13; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 4903106131766404046LL)) ? (1583917936) : (-2100196004)))))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_17 - 1] [i_13] [i_13]))) / (-9223372036854775806LL)));
                            arr_63 [i_17] [i_13] [i_14] [i_14] [i_13] [i_13] [i_6] = ((/* implicit */_Bool) var_9);
                            arr_64 [i_13] [i_13] [i_14] [6ULL] [i_17 + 1] = ((/* implicit */long long int) ((signed char) var_10));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)3093), (((/* implicit */unsigned short) (signed char)-81))))) ? (((/* implicit */int) var_0)) : (min((((/* implicit */int) arr_10 [i_6] [i_15] [i_18])), (((int) (_Bool)1)))))))));
                            arr_69 [i_6] [i_15] [i_13] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10476)) ? (((/* implicit */int) var_7)) : (2147483626)))) : (((((/* implicit */_Bool) 2147483626)) ? (((/* implicit */unsigned long long int) 2147483647)) : (16413085283586065771ULL)))))));
                            var_30 = max((((/* implicit */long long int) min((((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)))), ((signed char)-35)))), (((long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_12))))));
                        }
                        arr_70 [i_6] [i_6] [i_6] [i_13] = ((/* implicit */unsigned short) ((((arr_11 [i_6] [i_6] [i_13] [i_14] [i_15]) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) arr_44 [i_6] [i_6] [i_13] [i_15]))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (int i_19 = 0; i_19 < 21; i_19 += 4) 
    {
        arr_73 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (10ULL)));
        arr_74 [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
    }
    for (int i_20 = 1; i_20 < 17; i_20 += 4) 
    {
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_14))));
        var_33 = ((/* implicit */unsigned short) ((signed char) ((unsigned int) 3812809663165548135LL)));
        arr_77 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 2511601334U)) : (-3812809663165548133LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10476))) != (1805156034U))))) + (485597929U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-34))))));
        arr_78 [i_20 + 1] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)108))) ? (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 4891087988782370429LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((short) arr_15 [i_20 + 1])))));
    }
}
