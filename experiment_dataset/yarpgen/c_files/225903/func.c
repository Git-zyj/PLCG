/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225903
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (unsigned char)50)))))));
    var_17 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (unsigned short)36217)) : (max((((/* implicit */int) (short)32762)), ((~(((/* implicit */int) (short)32757))))))));
                var_18 = ((/* implicit */unsigned char) (short)-18665);
            }
        } 
    } 
}
