/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43556
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
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [(short)4] [6LL] [i_0 + 3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_14)))) || (((/* implicit */_Bool) ((unsigned char) ((int) arr_0 [6LL]))))));
                arr_8 [4LL] [(unsigned short)2] [4LL] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (6571484360728322769LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(short)4])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 2] [i_4]))) % (6571484360728322779LL))))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned int) var_1));
                    var_17 = 6571484360728322756LL;
                    var_18 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))) : (((((/* implicit */int) (unsigned short)13114)) % ((-(((/* implicit */int) (signed char)-126))))))));
                }
            } 
        } 
    } 
}
