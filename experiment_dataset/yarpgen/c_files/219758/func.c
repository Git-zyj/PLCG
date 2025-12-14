/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219758
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((-825795491) + (825795501)))));
    var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 825795490)) ? (((/* implicit */unsigned long long int) (~(3139366759U)))) : (7367996412194982586ULL))));
    var_20 = max((((/* implicit */unsigned int) var_14)), ((((~(904507302U))) | (max((((/* implicit */unsigned int) (signed char)53)), (2115232425U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned int) arr_5 [12] [(_Bool)1] [i_0]);
                            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6461))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))))) : (((arr_3 [i_3 + 2] [i_1 - 4] [i_1 - 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7367996412194982589ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)76)))) != (var_0)));
            }
        } 
    } 
}
