/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232598
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
    var_11 += ((/* implicit */unsigned int) 149530081202161571ULL);
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) 1842995504U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2451971815U)))))))) & (((/* implicit */unsigned int) 1325145829))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 - 2] [i_0 - 2] = ((((/* implicit */int) ((1842995474U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1] [8U] [i_1])) == (((/* implicit */int) (signed char)-1))))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_2 [8U] [i_1] [i_2]);
                    arr_10 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) 1842995474U);
                    var_14 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) max((((((2451971815U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((268435455U) & (2451971820U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)179))))))), (((/* implicit */unsigned int) var_1))));
                                var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)215)) << (((9668146356155661701ULL) - (9668146356155661687ULL)))))))) % ((~((~(arr_7 [i_5] [i_1] [9])))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [(short)2] [9U] = ((/* implicit */unsigned char) (((~(arr_19 [i_0 - 1] [i_1] [i_1] [i_0] [i_3] [i_3] [i_0 - 1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) 3759425261U);
                    var_16 ^= ((/* implicit */unsigned int) ((arr_19 [i_0] [2U] [i_1] [i_0] [i_0 + 1] [5ULL] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)120)) || (((/* implicit */_Bool) 4026531841U))))))));
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0 + 1] [i_1] [i_6]))));
                }
                var_18 ^= ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
