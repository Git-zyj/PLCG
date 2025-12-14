/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202356
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
    var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(138181568U)))) ? (max((((unsigned int) 138181578U)), (var_12))) : (138181591U)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) var_8);
        var_18 = ((/* implicit */unsigned char) 0);
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_5);
        var_19 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))), (292000255)))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_12 [i_2] = ((((/* implicit */int) arr_10 [i_2] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [15] [i_2]))))));
        var_20 ^= ((/* implicit */int) ((unsigned char) 4156785736U));
        var_21 = ((/* implicit */unsigned char) var_2);
        var_22 = max((max((min((((/* implicit */int) var_9)), (arr_5 [15] [i_2]))), (((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_9 [i_2]) : (((/* implicit */int) (unsigned char)32)))))), (max((((/* implicit */int) (unsigned char)4)), (min((54423287), (var_2))))));
        arr_13 [i_2] = min((((((/* implicit */_Bool) max((arr_10 [i_2] [i_2]), (var_15)))) ? (max((((/* implicit */unsigned int) var_10)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))))), (((/* implicit */unsigned int) max(((+(var_13))), (max((((/* implicit */int) var_0)), (arr_5 [6] [0U])))))));
    }
}
