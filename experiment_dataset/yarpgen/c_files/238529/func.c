/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238529
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
    var_15 = ((/* implicit */unsigned long long int) (-(((min((var_5), (var_5))) << (((var_14) + (2022911802)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */int) ((signed char) (short)-1039));
                            var_17 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) var_10);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_19 = (-(((/* implicit */int) arr_5 [i_0])));
                    arr_15 [i_0] [(unsigned short)9] [(unsigned short)9] = ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) ((_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_4]))) : (((/* implicit */int) arr_7 [i_1 - 1])));
                }
            }
        } 
    } 
    var_20 |= ((/* implicit */short) (-(((((min((((/* implicit */long long int) var_11)), (-1LL))) + (9223372036854775807LL))) << (((((0LL) + (((/* implicit */long long int) ((/* implicit */int) (short)17512))))) - (17512LL)))))));
    var_21 = ((/* implicit */int) ((unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (11760738979870595221ULL))), (((/* implicit */unsigned long long int) (+(-1LL)))))));
}
