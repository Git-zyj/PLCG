/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3176
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483644))) ? (var_9) : (var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2]);
                                var_15 = ((/* implicit */long long int) arr_3 [i_4]);
                            }
                        } 
                    } 
                    var_16 = -1LL;
                    var_17 = ((/* implicit */unsigned int) arr_4 [17U] [(signed char)4]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [13] [i_0] [13] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)0)), (arr_13 [i_0])))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((((/* implicit */long long int) 2147483645)), (((((/* implicit */_Bool) (unsigned short)1)) ? (arr_6 [i_0]) : (((/* implicit */long long int) arr_17 [i_0 - 3] [i_1] [7ULL] [i_5] [0U])))))))));
                                var_19 = arr_3 [i_0];
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */unsigned int) arr_0 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) arr_25 [8U]);
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) -2147483644);
                                var_24 = ((/* implicit */long long int) (-(arr_15 [(_Bool)1] [i_8 + 1] [(_Bool)1] [i_8 + 1])));
                                var_25 = ((/* implicit */short) var_0);
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                                var_27 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_8 - 1] [i_8 - 1])))) : ((-(var_5))))), (((/* implicit */long long int) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) <= (arr_8 [5LL]))) ? (1048064ULL) : (((/* implicit */unsigned long long int) 2147483644))))));
                                var_29 = ((/* implicit */long long int) min((var_29), (var_7)));
                                var_30 = ((/* implicit */unsigned int) arr_23 [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (int i_15 = 1; i_15 < 12; i_15 += 1) 
                        {
                            {
                                var_31 += min((((/* implicit */long long int) var_2)), (min((((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */long long int) var_6)) : (var_5))), (((/* implicit */long long int) var_11)))));
                                arr_44 [i_9] [i_8] [i_15 + 3] [i_9] [i_15 - 1] [i_9] [i_15 + 3] |= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 + 1] [i_15 + 2] [i_7 + 1]))) % (var_6))), (67108860U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        for (unsigned long long int i_17 = 1; i_17 < 18; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (long long int i_19 = 3; i_19 < 18; i_19 += 4) 
                    {
                        {
                            var_32 = (-(((((/* implicit */_Bool) min((arr_45 [i_16]), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                            var_33 = ((/* implicit */unsigned int) 4611686018427387904LL);
                            var_34 = ((/* implicit */long long int) 31457280U);
                            var_35 |= ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_17] [i_17]))) + ((+(((arr_54 [17U] [i_16] [i_16]) | (((/* implicit */unsigned long long int) -2147483628))))))));
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    for (unsigned char i_21 = 3; i_21 < 15; i_21 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) arr_47 [i_16] [i_20]);
                            var_38 = ((-7LL) - (((/* implicit */long long int) ((/* implicit */int) (short)6))));
                            var_39 |= ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (6LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
