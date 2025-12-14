/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50355
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13643851061206249855ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */int) var_5);
        var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))));
                    var_15 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_3 - 1]))));
                    arr_11 [i_2] [i_2 + 1] [(unsigned char)10] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)-5232))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
        var_17 = var_5;
    }
    var_18 *= ((/* implicit */_Bool) (short)-1);
}
