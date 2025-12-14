/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51975
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((signed char) arr_5 [i_0] [i_1] [i_0])))));
                    arr_8 [(signed char)8] [(signed char)8] [(signed char)8] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0])) : (((/* implicit */int) var_0)))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (short)-11685)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-2)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_6] [i_5] [i_6] &= ((/* implicit */unsigned int) arr_13 [i_3 + 1] [i_3]);
                                arr_18 [i_3] [i_6] [i_0] [i_0] [i_3] [(short)1] = ((/* implicit */unsigned short) ((short) ((short) (short)29752)));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */long long int) ((_Bool) arr_11 [i_0] [i_3 - 2] [i_4] [i_0]));
                }
            } 
        } 
    }
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) & (((/* implicit */int) (unsigned short)511))))) : (max((1240110874U), (((/* implicit */unsigned int) (_Bool)0))))));
}
