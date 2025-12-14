/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220917
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
    var_16 = ((/* implicit */signed char) (((_Bool)0) || (((/* implicit */_Bool) 1111538986549637837LL))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0 - 4])), ((short)-25280)))) << (((((/* implicit */int) arr_2 [i_0])) + (12267)))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [2LL])))))) << (((((/* implicit */int) var_2)) - (33947))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_19 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) var_13)) : (-1353504951))) >= (arr_9 [i_3] [i_3]))) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (min((((arr_9 [i_3] [i_3]) ^ (var_14))), (((/* implicit */int) arr_10 [i_3]))))));
        var_20 = ((((/* implicit */_Bool) arr_9 [6U] [6U])) ? ((~(((/* implicit */int) (unsigned char)5)))) : (((min((var_8), (var_12))) + (arr_9 [i_3] [i_3]))));
        var_21 = ((/* implicit */int) var_5);
    }
}
