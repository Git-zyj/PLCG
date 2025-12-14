/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234908
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
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 &= ((/* implicit */unsigned int) var_12);
    var_20 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (short)-6448))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(var_4))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) >= (10301021309721114242ULL))))) % ((+(var_14)))));
                arr_4 [i_1] [(_Bool)1] = ((/* implicit */int) var_14);
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 2])))) > (var_5)));
            }
        } 
    } 
}
