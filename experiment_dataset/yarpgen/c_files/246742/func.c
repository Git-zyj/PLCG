/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246742
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
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))))));
    var_21 = ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)215))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)95))));
    var_22 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24520)) >> (((((/* implicit */int) (unsigned char)250)) - (241)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36786))))) >> ((((+(-1508827470))) + (1508827494)))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_5 [i_2] [i_1])))), (((((/* implicit */_Bool) (unsigned short)39589)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_2])))) : ((-2147483647 - 1)))))))));
                    var_25 = ((/* implicit */long long int) (unsigned short)19844);
                }
            } 
        } 
    } 
    var_26 -= -5835770432310933292LL;
}
