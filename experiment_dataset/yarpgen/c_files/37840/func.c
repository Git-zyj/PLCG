/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37840
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
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((max((var_12), ((unsigned short)65507))), (((/* implicit */unsigned short) ((var_8) >= (((/* implicit */int) var_12))))))))) | (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 2103192336)) ? (4880496562351432415LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (short)14468)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */int) arr_5 [(unsigned short)4] [i_1] [(unsigned short)4])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-14455)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_6))))))));
                    var_19 = ((/* implicit */short) min((-4), ((-(((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 3]))))));
                }
            } 
        } 
    } 
}
