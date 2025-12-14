/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217829
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_20 += ((long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_19)) : (var_7)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((int) 15097328334900720237ULL)))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_9)))))) : (((long long int) -2140873009))));
                                var_22 = max(((~(((/* implicit */int) var_0)))), (((int) ((unsigned short) 1628193248))));
                                var_23 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_14)), (var_17)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2)) ? (1125899906842623ULL) : (0ULL))))));
                                arr_17 [i_0] [(short)9] [i_2] [i_5] [i_6] [i_5] [0] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)31940)), ((-2147483647 - 1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_7 = 4; i_7 < 19; i_7 += 1) 
    {
        var_24 = min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))))), (((/* implicit */long long int) ((short) var_5))));
        arr_22 [i_7] [(signed char)19] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((int) var_18)))) ? (var_17) : (((/* implicit */unsigned long long int) var_10))));
        arr_23 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)35624))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_7);
}
