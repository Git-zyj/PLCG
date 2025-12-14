/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40102
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
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */short) ((max((((var_7) + (var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) ^ (((((/* implicit */_Bool) -268561879)) ? (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) != (((/* implicit */int) (unsigned char)220)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */_Bool) arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_0 + 3] [15ULL] [i_1])) < (((/* implicit */int) arr_1 [i_1 - 1])))))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1]))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (short)32736)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1] [i_1 - 1]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) var_15))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) -1193833891)) / (5701060620620472767ULL))))));
                        }
                        for (short i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_4] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_4]))));
                            var_28 *= ((/* implicit */_Bool) (+(((((((/* implicit */int) (signed char)-83)) + (2147483647))) << (0U)))));
                            var_29 = ((/* implicit */signed char) arr_16 [i_4] [i_5] [i_6] [4U]);
                        }
                        for (short i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_9] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]);
                            arr_28 [i_3] [i_4] [i_4] [(signed char)17] [i_9] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1610612736U))) >> (((arr_18 [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_5]) - (613495745)))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4] [7U] [i_4] [i_4] [i_4])) && (arr_17 [i_3] [i_4] [i_5] [i_6])));
                    }
                } 
            } 
        } 
        var_31 = ((((/* implicit */int) var_13)) < (((/* implicit */int) (_Bool)1)));
        var_32 = ((/* implicit */int) ((arr_14 [i_3] [i_3] [i_3] [i_3]) < (arr_14 [i_3] [i_3] [11] [i_3])));
        var_33 = ((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_34 = ((/* implicit */short) arr_31 [i_10]);
        var_35 -= ((/* implicit */signed char) var_13);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            var_36 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10])) ? (var_5) : (1513505293U))));
            var_37 = ((/* implicit */int) ((signed char) ((min((1984033181U), (((/* implicit */unsigned int) var_2)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_10] [i_11]))))));
            arr_35 [i_10] [i_10] [i_11] = ((((arr_21 [i_10] [i_11] [i_11] [i_10] [i_11] [i_11] [i_10]) + (2147483647))) >> (((max((((/* implicit */long long int) max((var_2), (((/* implicit */int) var_11))))), (((9223372036854775791LL) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_11]))))))) - (9223372036854775773LL))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_38 = 12168769298311716336ULL;
            var_39 *= ((((unsigned long long int) arr_12 [i_10] [i_10])) != (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10])));
            var_40 -= ((/* implicit */signed char) var_5);
        }
    }
    var_41 = ((/* implicit */int) var_5);
}
