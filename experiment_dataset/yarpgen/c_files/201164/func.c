/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201164
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0 - 3] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) var_12)) : (arr_0 [i_0 - 4]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))))));
        var_13 = ((/* implicit */signed char) (_Bool)1);
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned long long int) 229546161);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned int) min((arr_5 [i_3]), (arr_5 [i_4])))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] |= ((/* implicit */unsigned int) ((min((min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1])) >= (((/* implicit */int) (unsigned short)31744))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_16 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)573)) + (((/* implicit */int) (unsigned short)9))))) ? (arr_18 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)570))))))) - (((((/* implicit */_Bool) max((arr_18 [i_5 - 1]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) : (6026772358202321401ULL)))));
        var_17 ^= ((/* implicit */unsigned long long int) 1509059100);
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) var_6);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((_Bool) (short)12267)) ? (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */int) arr_19 [i_5] [i_5])) & (((/* implicit */int) (_Bool)1))))))) <= (((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_5] [i_7 + 1])), (arr_27 [23LL] [23LL] [23LL] [23LL])))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-19)) & (((/* implicit */int) var_5)))))))));
                    var_20 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) 8388607U)), (17179869183LL)))))) * (min((6188179908750801054ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_22 [i_5 - 1] [(unsigned char)2])), (var_6))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_1)))) * (arr_21 [i_9 - 1] [i_9 - 1]));
            /* LoopNest 3 */
            for (signed char i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 4; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) var_5);
                            arr_42 [i_8] [i_9] [i_10] [i_11] [i_12] [i_10 + 2] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_8] [i_9 + 4] [i_10 + 2] [i_11])) ? (((/* implicit */int) arr_22 [i_8] [i_8])) : (((/* implicit */int) arr_22 [i_9 - 1] [i_8]))));
                            var_23 *= ((((/* implicit */_Bool) (short)5565)) ? (arr_38 [i_8] [(_Bool)1] [i_10] [i_12 + 1] [i_12 - 4]) : (((/* implicit */unsigned long long int) ((int) arr_24 [i_8] [(signed char)8] [i_8]))));
                        }
                    } 
                } 
            } 
            arr_43 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 4294966784U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9 + 4])))))) : (var_1)));
            arr_44 [i_8] [i_8] = ((/* implicit */short) (+(arr_0 [i_9 - 1])));
            arr_45 [i_8] = ((/* implicit */int) 9223372036854775803LL);
        }
        arr_46 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_8] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8]))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (arr_0 [i_8])))) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) 5870390378257954723ULL)) ? (((/* implicit */int) arr_40 [i_8] [(_Bool)1] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_9))))));
        var_25 = ((/* implicit */unsigned short) arr_0 [i_8]);
    }
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_16 = 3; i_16 < 18; i_16 += 3) 
                    {
                        var_26 += ((/* implicit */signed char) ((arr_55 [i_16] [i_15] [i_15] [i_13]) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_15]))))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_18 [i_13 + 1])));
                        arr_58 [i_16 + 4] [i_15] [i_13] [i_15] [i_13] |= ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) % (((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            {
                                var_28 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))));
                                arr_65 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_21 [i_13] [i_15])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_13] [(_Bool)1] [i_13] [i_13]))))) : (((/* implicit */int) arr_57 [(unsigned short)21] [(unsigned short)21] [i_13 + 1] [i_17 - 1] [i_17 + 2]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (max((((/* implicit */int) arr_57 [i_14] [i_14] [i_15] [i_17 + 2] [i_18])), (arr_63 [i_15] [i_15] [i_18])))))) : ((~(var_6)))));
                                var_29 ^= ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    var_30 *= ((/* implicit */unsigned long long int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1390604420) >= (681388003)))))));
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        for (short i_20 = 2; i_20 < 20; i_20 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_48 [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_70 [i_13] [2] [i_15] [i_13 + 1] [i_20 + 2])))));
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (unsigned short)57897))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (2625066695096478425ULL)))))) ? ((~(((/* implicit */int) max((((/* implicit */short) (signed char)125)), ((short)20602)))))) : (((/* implicit */int) var_5))));
}
