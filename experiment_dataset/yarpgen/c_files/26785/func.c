/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26785
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
    var_10 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551615ULL)))) ? ((((((~(var_9))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_3) : (((/* implicit */int) var_5)))) + (720997319))) - (39))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) 33554368)) | (18446744073709551601ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_17 [0ULL] [i_2] &= ((/* implicit */_Bool) min((18446744073709551615ULL), (((((/* implicit */_Bool) ((var_3) & (((/* implicit */int) (unsigned char)63))))) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3])))))));
                                arr_18 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                } 
                var_11 ^= ((/* implicit */long long int) arr_14 [i_1] [(short)6] [(short)6] [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_0]))));
                    arr_23 [i_0] = ((/* implicit */_Bool) (-(arr_3 [i_5])));
                    var_12 += ((/* implicit */signed char) ((var_0) == (((/* implicit */long long int) arr_19 [(_Bool)1] [i_1]))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
}
