/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210643
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min(((unsigned short)1), (((unsigned short) (-(((/* implicit */int) (unsigned short)65535)))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)32), (((/* implicit */unsigned char) (_Bool)0)))))) & ((((_Bool)1) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42147))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_18)))))))));
                    var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)6956)), (((((/* implicit */unsigned int) var_15)) * (var_1)))));
                    var_23 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3171819728U))) << (((/* implicit */int) arr_8 [i_0]))));
                    var_24 |= ((/* implicit */short) (!((!(((/* implicit */_Bool) 833876932U))))));
                }
            } 
        } 
    } 
    var_25 = ((short) var_3);
    var_26 = ((/* implicit */unsigned char) (signed char)-53);
}
