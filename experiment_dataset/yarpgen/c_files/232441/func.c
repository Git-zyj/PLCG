/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232441
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned short)46464)))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_9)))) - (((unsigned long long int) var_12))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_0] [14ULL] [i_0 + 1] = ((/* implicit */long long int) (~(((unsigned int) arr_1 [i_0 + 1]))));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)18)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (((unsigned long long int) arr_9 [i_0] [13U] [i_2 - 1] [i_3] [i_4])))) >> (((min((((((/* implicit */_Bool) 1486419824)) ? (-12060286) : (-350057295))), (((/* implicit */int) (!(((/* implicit */_Bool) -12060286))))))) + (12060300)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */int) var_10)) * (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1])))), (((/* implicit */int) ((short) arr_6 [(unsigned char)13] [i_2 + 1] [i_2 + 1] [i_2]))));
                }
            } 
        } 
    } 
}
