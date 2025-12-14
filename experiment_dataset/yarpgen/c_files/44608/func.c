/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44608
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
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-6525))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (unsigned char)0))));
    var_18 ^= ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_2 [i_4]);
                                arr_14 [i_0] [i_1] [(short)8] [i_0] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2])) != (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2] [i_1 - 2])))) ? (((((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3] [i_1 - 2])) - (((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) ((arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 2]) && (arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                                var_20 += 15ULL;
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-6525)) == (arr_10 [i_1 + 3] [i_1 + 2] [i_1] [i_1] [i_1] [i_1])))) << (((((((/* implicit */_Bool) 821215495)) ? (((/* implicit */unsigned long long int) 1310235178U)) : (arr_3 [i_0] [i_1 - 1]))) - (1310235156ULL)))));
                }
            } 
        } 
    } 
}
