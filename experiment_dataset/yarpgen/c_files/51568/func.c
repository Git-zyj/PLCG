/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51568
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
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) 8191ULL)));
                    arr_7 [i_1] [i_1 + 2] [i_0] [i_1] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_16 = var_10;
    var_17 = ((/* implicit */short) -215775940);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) 0U)), (-5975001135731175764LL))), (((/* implicit */long long int) ((short) (signed char)-1)))));
                            var_19 &= ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
                arr_16 [i_3] [i_4] = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])), (var_14))));
            }
        } 
    } 
}
