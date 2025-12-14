/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43397
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(var_16)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((var_0) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((int) var_1);
                    var_20 = (-(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_0])));
                    var_21 = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) max(((unsigned short)17855), (((/* implicit */unsigned short) var_8))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (arr_2 [i_0] [i_1])))));
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) / (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))));
                }
            } 
        } 
    } 
}
