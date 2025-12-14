/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34212
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) / ((+(((1341828703) / (1341828703)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(((/* implicit */int) (unsigned char)238)))) : (((/* implicit */int) (short)-1220))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) (unsigned char)35);
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (short)-16);
                                var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (short)-26138)) : (((/* implicit */int) (unsigned short)51264))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
