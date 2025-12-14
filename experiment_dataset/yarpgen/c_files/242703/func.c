/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242703
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)-10956), (((/* implicit */short) arr_3 [i_2]))))) & (((((/* implicit */int) (unsigned char)17)) >> (((1727719270) - (1727719244)))))))) : (((max((((/* implicit */unsigned long long int) var_3)), (10274432801481659067ULL))) & (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1 + 3] [i_1 + 3]) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) var_7)))))))));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((var_10) ? (((/* implicit */int) var_3)) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1])))) & (var_5))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 &= ((/* implicit */unsigned char) var_8);
                                var_14 = ((/* implicit */unsigned short) ((var_8) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) ^ (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) var_9)))) : (((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 12082650133537502494ULL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_5]))))) ? (((arr_14 [i_6 - 2] [i_5]) / (arr_14 [i_6 + 2] [i_6]))) : (((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_18 [i_5] [i_6]))))))));
                arr_22 [i_5] [i_5] = ((/* implicit */long long int) max((max((var_7), (var_7))), (((/* implicit */short) arr_19 [i_6 - 1]))));
            }
        } 
    } 
}
