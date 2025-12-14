/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239939
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
    var_12 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32760))))) + (var_9)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) + (((8803309410077823942LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1905664866)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((int) arr_0 [i_0])) : (arr_2 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */unsigned int) (short)32767);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_4))));
            arr_12 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)31415))));
            var_16 = ((/* implicit */signed char) arr_4 [i_2]);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 9; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_6 - 1])) ? (arr_2 [i_1] [i_6 + 3]) : (arr_2 [i_6 - 2] [i_6 + 1])));
                            var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1905664867)) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) (short)32763))))) ? ((-(((/* implicit */int) arr_15 [i_1] [i_1])))) : (((/* implicit */int) var_1)));
                        }
                    } 
                } 
            } 
            arr_22 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_18 [i_1] [i_3]))));
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17765)) ? (arr_16 [i_9] [i_7] [i_8] [i_9 + 1]) : (((/* implicit */unsigned int) 1905664866))));
                        var_20 = (~(((unsigned int) var_6)));
                        arr_31 [i_9] [i_7] [i_8 + 1] = ((/* implicit */signed char) ((_Bool) var_6));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((long long int) arr_27 [i_1] [i_1] [i_1]));
            var_22 = ((/* implicit */long long int) max(((~(var_0))), (((/* implicit */unsigned long long int) arr_6 [i_7]))));
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1])) : (((unsigned long long int) ((var_9) <= (var_9))))));
        var_24 |= ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) ((arr_6 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1])))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_14 [i_1] [i_1]))));
        var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_7 [i_1])), (min((var_0), (((/* implicit */unsigned long long int) var_4))))));
    }
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (int i_12 = 1; i_12 < 8; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) var_3);
                                var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_12 + 4])) ? (arr_7 [i_12 + 2]) : (arr_7 [i_12 + 1])))) > (((var_11) << (((((((arr_2 [i_12] [i_13]) + (2147483647))) << (((((arr_7 [i_12 + 2]) + (1183029496))) - (10))))) - (506046240)))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14] [i_14] [i_13] [i_14] [i_13] [i_12 - 1] [i_10]))) | (min((arr_40 [i_10]), (((/* implicit */long long int) (short)-32758)))))) >= (((((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_10] [i_12]))))) * (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2188))) : (3624180338707906829LL))))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) ((arr_29 [i_11] [i_12] [i_11] [i_11] [i_10] [i_11]) << (((arr_29 [i_10] [i_10] [i_11] [i_11] [i_12] [i_11]) - (2096528646)))));
                    var_31 ^= ((/* implicit */short) arr_36 [i_12 + 2]);
                }
            } 
        } 
    } 
}
