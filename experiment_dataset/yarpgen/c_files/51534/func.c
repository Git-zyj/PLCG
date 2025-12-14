/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51534
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10)))))), (var_10)));
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((max((arr_6 [i_0] [i_2 + 1] [i_0]), (((/* implicit */int) var_4)))) + (((/* implicit */int) ((9262248838215889191ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))))))));
                    arr_8 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5221145762610317518LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) (short)-1)) : (min((((/* implicit */int) arr_3 [(unsigned char)4] [i_0] [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
                    arr_9 [i_0] [i_1] [(unsigned char)11] [i_0] = 6255384234972187255ULL;
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_4 [i_1 + 2]))))) % (((/* implicit */int) arr_4 [i_1 + 1]))));
                }
            } 
        } 
    } 
}
