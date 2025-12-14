/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236711
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(unsigned char)17] [i_1] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) -757126427)), (((((/* implicit */_Bool) arr_1 [i_1])) ? ((+(-3413484756222465842LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4515505910520247090ULL))))))))));
                    var_13 = ((/* implicit */signed char) min((var_12), (arr_1 [i_0 + 1])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+(var_9)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -757126427)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (short)-23710)))))) : (max((11810425077178252940ULL), (((/* implicit */unsigned long long int) var_11)))))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & ((~(var_7)))))) ? (((var_7) >> (((min((((/* implicit */long long int) var_10)), (var_11))) + (9055488526429481779LL))))) : (((/* implicit */unsigned long long int) 0U))));
}
