/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234814
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
    var_15 |= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)24)), (max(((short)-25228), (((/* implicit */short) var_1)))))))) : (((unsigned int) var_1)));
    var_16 = ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)38689)))), (((/* implicit */int) ((unsigned char) var_9)))))) ? (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) -3221995627550239620LL)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */int) (short)-1))))), (((unsigned int) (unsigned char)26))));
                arr_5 [i_1] = ((/* implicit */unsigned short) min((((short) arr_0 [i_1 - 1] [i_1 - 1])), (((/* implicit */short) ((_Bool) var_2)))));
                arr_6 [i_1] [i_1] = ((short) max((var_8), (((/* implicit */long long int) arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_13);
                arr_14 [i_2] = ((/* implicit */unsigned short) arr_8 [i_2] [(unsigned char)19]);
            }
        } 
    } 
}
