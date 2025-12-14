/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226792
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 70368744177663LL))))) * (((var_8) ? (((/* implicit */int) (signed char)71)) : (-392900690)))))) ? (((arr_8 [i_2 - 3] [i_0 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */unsigned long long int) ((long long int) 738742800U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 = var_7;
                                arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9904793199428767900ULL)) ? (485720884U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)18] = ((/* implicit */short) min((var_10), (((/* implicit */long long int) ((unsigned short) 2075422037U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [22U] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))))));
                                var_14 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 376375803U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5991))) : (var_9))));
                                arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) arr_11 [i_6] [i_5] [i_5] [i_2] [i_0] [i_0]);
                                arr_23 [i_0 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-99)) < (((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */_Bool) -8933810228361856009LL);
    var_16 = ((/* implicit */unsigned char) (short)17971);
}
