/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249743
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (min((-1825875878), (((/* implicit */int) arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((((/* implicit */long long int) (-(((/* implicit */int) ((4294967293U) >= (((/* implicit */unsigned int) -1825875885)))))))) - ((((!(((/* implicit */_Bool) arr_0 [i_4 + 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7719374761359734698ULL)))))) : (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
                                arr_14 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                                var_22 ^= ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (var_18) : (((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1] [(unsigned short)11] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_10 [i_1] [10U] [10U])) ? (var_18) : (var_17))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_12);
}
