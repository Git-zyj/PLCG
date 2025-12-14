/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34029
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */_Bool) var_14);
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) ((_Bool) (~(((((/* implicit */_Bool) -1308021765)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1]))) : (0U))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -716922958)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_7)))))) > (max((((/* implicit */int) arr_9 [i_2])), (-524288)))));
        var_21 = (-(((/* implicit */int) (_Bool)1)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) -1666507254)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_2]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))));
        var_22 = ((/* implicit */_Bool) ((arr_7 [i_2] [i_2]) ? ((~(((/* implicit */int) arr_7 [i_2] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) != (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3854351002U)))))))));
        var_23 = ((/* implicit */int) max(((-(min((((/* implicit */unsigned int) (_Bool)0)), (1147538460U))))), (((/* implicit */unsigned int) min((arr_7 [i_2] [i_2 + 1]), (arr_7 [i_2] [i_2 + 1]))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_14 [i_3]))));
        arr_15 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) var_11);
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            {
                var_25 *= ((/* implicit */signed char) var_8);
                var_26 = (short)27245;
            }
        } 
    } 
}
