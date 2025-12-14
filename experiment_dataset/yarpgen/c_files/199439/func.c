/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199439
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned short) 13041854393531310351ULL);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 |= ((/* implicit */_Bool) arr_0 [i_3]);
                                var_13 = ((/* implicit */unsigned short) (+((+(((-1224047813223557487LL) - (((/* implicit */long long int) 1581983247))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) min(((unsigned char)240), (((/* implicit */unsigned char) var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_5))));
    var_15 *= ((((/* implicit */int) (unsigned char)227)) <= (((/* implicit */int) (unsigned char)61)));
}
