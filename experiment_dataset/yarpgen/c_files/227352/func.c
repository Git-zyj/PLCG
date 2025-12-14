/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227352
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */short) var_9))))) > (var_13))))));
    var_18 &= ((/* implicit */int) var_5);
    var_19 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -481406331)) : (((unsigned int) 2141984419))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    var_21 = ((/* implicit */int) max((var_21), (max((((/* implicit */int) arr_1 [i_0] [i_0])), ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [(unsigned char)10] [i_2])) : (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1]))))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) max((arr_2 [i_2 - 1]), ((-(arr_2 [i_2 - 1])))));
                    var_22 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-29)))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_16)))) / (((/* implicit */int) arr_5 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
