/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204094
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
    var_15 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (signed char)-44)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) var_13);
                            arr_10 [i_3] [i_3] [i_2] [i_3] [9LL] = ((/* implicit */unsigned long long int) ((min((4963210331375863952ULL), (13483533742333687661ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13483533742333687663ULL)) || ((_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) arr_0 [i_0 - 4]);
                                var_18 += ((/* implicit */_Bool) 10737297831328454691ULL);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((long long int) arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 4] [(signed char)7]));
                arr_19 [i_0] [i_1] [i_0 - 4] = ((/* implicit */int) min((13483533742333687664ULL), (4963210331375863944ULL)));
            }
        } 
    } 
    var_20 |= ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
}
