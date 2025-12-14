/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207452
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */short) 9922290702535140974ULL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_0 + 1] [i_0] [i_0] [1U] [i_0 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)111))));
                        var_13 = ((/* implicit */unsigned int) ((short) ((unsigned int) (signed char)-118)));
                    }
                    arr_11 [i_0] = ((/* implicit */signed char) 2621712980U);
                    /* LoopSeq 1 */
                    for (int i_4 = 4; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0 - 1] [i_4] [i_0] [i_4 - 2] = ((/* implicit */signed char) (short)-25788);
                        var_14 += ((/* implicit */signed char) ((unsigned long long int) (unsigned short)18548));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (short)-7780);
}
