/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208114
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */int) min((var_6), (((var_5) >= (((/* implicit */unsigned long long int) var_1))))))) > (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)0)), (-3395946008990331353LL))))));
                arr_5 [i_0] [0LL] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_3 [i_0])))), (var_9)))));
                var_16 = ((/* implicit */long long int) ((((int) (!(arr_0 [i_0 + 2])))) | (((/* implicit */int) ((unsigned short) ((_Bool) (short)32758))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
        arr_8 [11U] [i_2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((500873044) >= (((/* implicit */int) var_8)))))) - (arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) == (0U))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_3 [i_2])))))))));
    }
}
