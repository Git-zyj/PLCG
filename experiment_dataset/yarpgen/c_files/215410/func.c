/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215410
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] &= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) & (0U)))) ? (((/* implicit */long long int) var_2)) : (var_8)));
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((var_9), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])))))))));
                var_14 += ((unsigned int) max((var_3), (arr_3 [i_0] [i_0] [i_0])));
                arr_6 [i_0] = ((/* implicit */signed char) (~(1277334555U)));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_5))))))) % (var_2)));
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_3))))), (var_3)))));
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_9 [i_2] [i_2]));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_10)))) ? ((~(((/* implicit */int) (unsigned short)32748)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_10)))))) : (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) <= (4223601562325337207LL)))))))));
}
