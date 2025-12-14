/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212201
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)15714))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_1] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                            arr_10 [i_3] = ((/* implicit */unsigned long long int) var_0);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) (~((~(2670255667U)))));
                                arr_13 [10ULL] |= ((/* implicit */unsigned char) var_11);
                            }
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = (+(((((int) 2139372300)) % ((~(4194303))))));
                var_21 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                var_22 = ((/* implicit */long long int) var_17);
            }
        } 
    } 
    var_23 = ((/* implicit */int) 2670255669U);
}
