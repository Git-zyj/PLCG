/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243903
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)21466)), (4397912293376LL)));
                                var_20 = ((/* implicit */short) 0LL);
                            }
                        } 
                    } 
                } 
                arr_13 [(unsigned char)16] [i_1] [i_1] = arr_2 [19LL] [i_1];
                var_21 -= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                var_22 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [15LL] [i_1]);
            }
        } 
    } 
    var_23 ^= (~(((/* implicit */int) var_18)));
}
