/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3898
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((unsigned long long int) ((594446974U) >> (((((/* implicit */int) (unsigned short)48319)) - (48290)))));
                var_16 = ((/* implicit */unsigned int) (((!((_Bool)1))) && (((/* implicit */_Bool) (((_Bool)1) ? (594446974U) : (3700520330U))))));
                var_17 = var_9;
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_3))) && (((/* implicit */_Bool) 1677189618441428537ULL))))) != (((/* implicit */int) var_10))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */short) var_15);
    var_21 = ((/* implicit */int) (((~(((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) << (((((/* implicit */int) var_12)) - (19903)))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */long long int) ((/* implicit */int) var_15))) == (((arr_0 [i_2 - 2]) | (((/* implicit */long long int) ((/* implicit */int) (short)20933)))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_8 [i_2 + 2] [i_3])) * (((/* implicit */int) var_13)))) == (arr_10 [(unsigned short)4]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2]))) & ((+(var_1))))))))));
            }
        } 
    } 
}
