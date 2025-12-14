/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193102
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
    var_12 = ((/* implicit */unsigned short) (~(var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2 + 1] = ((/* implicit */short) (((-(2187955464863850215ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((arr_7 [i_0] [i_1] [i_1]) == (((/* implicit */int) arr_1 [(signed char)17]))))))))));
                            var_13 = ((/* implicit */unsigned short) 16258788608845701400ULL);
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
}
