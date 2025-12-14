/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33275
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
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((-950141971) == (((/* implicit */int) var_18))))) < (((/* implicit */int) ((((2147483647) < (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) var_0)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_0) % (((/* implicit */int) (unsigned char)65)))) < ((~(((/* implicit */int) (unsigned short)30009))))))) << (((((min((((/* implicit */int) (unsigned char)73)), (1591542546))) + ((+(-2))))) - (57)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((int) (!(((/* implicit */_Bool) 950141973))));
                var_21 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_1 [i_1])))));
            }
        } 
    } 
}
