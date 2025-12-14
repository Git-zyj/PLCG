/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27885
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
    var_19 |= ((/* implicit */unsigned long long int) (+((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) / (var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_8))))), ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
                    arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13299)) || (((/* implicit */_Bool) 699128552))))), (max((((/* implicit */unsigned long long int) (short)21120)), (var_18)))))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_5 [i_0] [i_0]))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_15)) + (((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_0]), (var_15))))))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (6U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 - 4] [i_0 - 1] [i_0 + 1])) - (((/* implicit */int) arr_3 [i_1 - 3] [i_0 - 1] [i_0 + 4])))))));
                }
            } 
        } 
    } 
}
