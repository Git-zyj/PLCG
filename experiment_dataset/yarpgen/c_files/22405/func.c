/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22405
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_4] [i_2] [i_3] [i_4] [i_3] [5LL] = ((/* implicit */unsigned short) -1955074746);
                                arr_15 [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_2] [16ULL] = ((/* implicit */_Bool) (unsigned char)101);
                                arr_16 [i_1] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                arr_17 [17LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_1]))) < (3LL)))))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (306932186))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_5);
}
