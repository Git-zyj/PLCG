/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199124
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
    var_16 += ((/* implicit */unsigned short) 258481322323516750ULL);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 18188262751386034865ULL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) 258481322323516751ULL);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) 258481322323516762ULL);
                        var_20 = ((/* implicit */signed char) 258481322323516750ULL);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */int) 3445621528676096716ULL);
                            var_22 = ((/* implicit */unsigned int) 18188262751386034864ULL);
                            var_23 = ((/* implicit */unsigned long long int) 4036451150U);
                        }
                        arr_15 [i_3] = ((/* implicit */unsigned int) (-2147483647 - 1));
                    }
                } 
            } 
        } 
    }
}
