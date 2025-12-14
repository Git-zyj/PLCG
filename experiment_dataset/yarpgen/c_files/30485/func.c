/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30485
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_1] [15ULL] [i_1] [i_2] = ((/* implicit */long long int) var_12);
                                arr_14 [16LL] [i_0] [i_2] [i_1] [i_0] [i_3] [(unsigned char)18] = ((/* implicit */_Bool) ((unsigned short) 134217216U));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) (short)0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                arr_24 [i_6] = ((/* implicit */unsigned char) var_14);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) / (6183450767297736260ULL)));
            }
        } 
    } 
}
