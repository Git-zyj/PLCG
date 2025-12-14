/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36617
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
    var_20 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max(((short)17232), (((/* implicit */short) (!(((/* implicit */_Bool) 3887873867851506980LL)))))));
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 3]))) : (((((/* implicit */_Bool) (unsigned short)54970)) ? (1010040398461659410LL) : (((/* implicit */long long int) arr_0 [i_0])))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1])) << (((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])) - (235))))))));
                    arr_9 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) (((-(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (arr_5 [i_0] [i_1]))))) % (max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
}
