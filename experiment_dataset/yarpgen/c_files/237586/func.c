/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237586
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
    var_18 = var_14;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) arr_0 [i_0]);
                arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) (unsigned char)171)) : (var_15))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] &= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
        arr_11 [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) + (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_7)) != (arr_9 [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)84))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_14)))) : (((/* implicit */int) (short)3667))))));
    }
    var_20 = ((/* implicit */long long int) 3221225471U);
}
