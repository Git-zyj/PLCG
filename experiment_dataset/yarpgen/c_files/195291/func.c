/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195291
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (((~(((4094387659009437290ULL) - (14352356414700114326ULL))))) - (((((/* implicit */unsigned long long int) (~(3832877749U)))) & (((4094387659009437290ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24446)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [i_0] [(unsigned char)3] [(_Bool)1] [9U] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-24427)))))));
                            var_18 = ((/* implicit */unsigned short) (((~(4094387659009437292ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24427)))));
                            arr_16 [i_0] [(unsigned char)15] [i_0] [i_2] [i_3] [i_0] [(unsigned char)15] = ((/* implicit */signed char) (+((~(arr_5 [1] [3ULL] [i_1])))));
                            var_19 = 396551033U;
                        }
                        arr_17 [i_3] [i_2] [i_2] [i_0 - 1] |= ((/* implicit */int) arr_8 [i_2]);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 1406447706U))));
                    }
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(14352356414700114298ULL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_21 = (~(arr_14 [i_0]));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_24 [i_1] [i_0] [(_Bool)1] [i_6] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2]);
                            arr_25 [i_0] = (~(2888519602U));
                            var_22 = ((/* implicit */unsigned int) (~(((((arr_11 [i_0] [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) (signed char)126)) - (126)))))));
                        }
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_23 ^= (~(1927820020652502995LL));
                            arr_30 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (~(arr_0 [i_0 - 1]))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_25 &= ((/* implicit */signed char) (short)-24430);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_33 [i_0] [(signed char)4] [i_2] [(signed char)4]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [(unsigned char)15] = ((/* implicit */unsigned short) (+((+(1406447706U)))));
                        var_27 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)38411))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            var_28 ^= ((/* implicit */signed char) (short)24443);
                            var_29 = ((/* implicit */short) 4094387659009437292ULL);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_30 ^= ((/* implicit */unsigned char) arr_7 [i_11] [i_2] [i_1] [11U]);
                        arr_46 [15LL] [i_0] [i_2] [i_0] = ((/* implicit */int) (~(arr_29 [i_0] [i_1] [i_0] [i_11] [i_0] [i_0])));
                        arr_47 [i_0] [i_0] [i_2] [i_11] [i_0] = ((/* implicit */short) arr_3 [i_0 - 1]);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) || (((/* implicit */_Bool) arr_44 [i_0 + 1] [i_11] [i_11] [i_0])))))));
                            var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1])) != (((/* implicit */int) (unsigned short)53857))));
                        }
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) ((((var_8) + (9223372036854775807LL))) << (((((var_16) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_8)))))) - (1235119014)))));
    var_34 = ((/* implicit */long long int) var_1);
    var_35 = ((/* implicit */unsigned long long int) 2008844193U);
}
