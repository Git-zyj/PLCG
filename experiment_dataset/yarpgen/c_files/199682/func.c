/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199682
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((int) ((signed char) 1203213037U))) <= (((((/* implicit */int) ((short) var_2))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))))))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (unsigned short)2676))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_1] [i_2]);
                    var_13 = ((/* implicit */unsigned short) 4294967281U);
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)62881)))))) ? (1279915884U) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62881)) << (((((/* implicit */int) (unsigned char)96)) - (86)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (var_6)))));
}
