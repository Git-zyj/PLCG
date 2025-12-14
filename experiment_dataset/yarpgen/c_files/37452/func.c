/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37452
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)73)))) == (((/* implicit */int) (short)24181))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)38)) && (((/* implicit */_Bool) (short)24172)))) || ((!(((/* implicit */_Bool) (short)-30194)))))))));
                    arr_8 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned char) (((+(((((/* implicit */int) (short)-24180)) * (((/* implicit */int) (unsigned char)38)))))) * (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)87)))) * (((/* implicit */int) ((_Bool) (unsigned char)195)))))));
                    var_17 = ((_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)32757))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)32753))) < (((((/* implicit */int) (short)32742)) - (((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */int) (unsigned char)188)) - (((/* implicit */int) (short)19)))) + (((/* implicit */int) var_14))))));
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)85)))))));
}
