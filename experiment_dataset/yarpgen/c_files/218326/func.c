/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218326
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((var_8) || (arr_2 [i_1]))))));
                    var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */_Bool) (unsigned char)53)) || ((_Bool)1))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((/* implicit */int) var_2)))) : (max((((/* implicit */int) arr_6 [i_0] [i_1])), (-1820192953)))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(1820192952)))))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */int) var_11)), (((arr_5 [i_2]) ? (1820192953) : (((/* implicit */int) arr_5 [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
}
