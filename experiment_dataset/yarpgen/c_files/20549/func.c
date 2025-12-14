/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20549
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((35888059530608640ULL) - (35888059530608633ULL))))))));
        var_17 = 137696097;
        var_18 += ((arr_2 [i_0]) != (((/* implicit */int) var_14)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_19 -= ((/* implicit */int) (_Bool)1);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_7)));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (268435200) : (arr_4 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned char) ((long long int) arr_10 [i_2]));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) -1914158422)) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_9)))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)39068)) + (((/* implicit */int) arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4 - 2]))));
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)255))))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_1] [i_6] = arr_5 [i_1];
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1516669084)) ? (((/* implicit */int) (short)-26747)) : (arr_4 [i_6])))) : (((((/* implicit */_Bool) 3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20749))) : (-9223372036854775796LL)))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((arr_28 [0] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6806)) / (((/* implicit */int) arr_1 [i_7]))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_7) << (((3877163066U) - (3877163066U))))) : (((((/* implicit */_Bool) 2069183687739951170LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1559657560U)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)63))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) -5523723538407702413LL);
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_10 + 1])) && (((/* implicit */_Bool) 6968511171769340689LL)))) && ((!(((/* implicit */_Bool) 7LL))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)3))));
        var_30 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15)) ? (4771479290865116443LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (1274597469U) : (((((/* implicit */_Bool) (unsigned short)31027)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_10 + 1] [i_10 - 1] [i_10 + 1]))) : (arr_7 [i_10]))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_14 [i_10] [i_10])))), (min((((/* implicit */int) (_Bool)1)), (var_5)))))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        arr_45 [i_11] = ((/* implicit */int) min((var_0), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)13619)) && ((_Bool)1))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_11 - 1]))))) ^ (max((9223372036854775807LL), (((/* implicit */long long int) var_10))))));
    }
    var_32 = ((/* implicit */int) (((+(((var_5) * (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) ((_Bool) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
}
