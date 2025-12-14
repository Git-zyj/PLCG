/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217263
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((signed char)-1), ((signed char)-14)));
    }
    var_19 = ((/* implicit */unsigned int) var_17);
    var_20 = ((/* implicit */unsigned int) 17303850298409744753ULL);
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)46)) : (var_13))) : (((/* implicit */int) var_17))));
                var_22 = arr_7 [i_1];
                var_23 *= ((/* implicit */unsigned int) var_18);
                arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2] [i_1]);
            }
        } 
    } 
}
