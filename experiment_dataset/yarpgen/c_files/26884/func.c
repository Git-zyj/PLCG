/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26884
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_0] [i_1]))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_1)) >> (((var_0) - (502493821))))) : (((/* implicit */int) var_3))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [3ULL])) ? (min((var_5), (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)214))))))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : ((+(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(16383U)))) ? (1797000806U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) > ((-(((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [8] [i_1]) : (var_2)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) var_12);
                var_14 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_2 - 2])))) ^ ((((~(arr_9 [i_2]))) & ((~(var_0)))))));
                arr_14 [i_2] [i_2] = ((/* implicit */signed char) (~(max((((/* implicit */int) ((_Bool) var_1))), (((arr_13 [i_3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((int) ((var_0) << (((((/* implicit */int) var_7)) - (194))))))) : ((+(max((((/* implicit */unsigned int) (unsigned short)65535)), (var_2)))))));
}
