/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32408
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
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (var_3))))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_14))))))))));
    var_17 = ((min((var_1), (((/* implicit */unsigned int) var_10)))) << ((((+(((unsigned int) var_8)))) - (3993783832U))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((var_9) ? (var_14) : (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) var_12))))) && (((/* implicit */_Bool) var_1))));
    var_19 = max((((var_13) ? (((/* implicit */int) var_10)) : (((int) var_2)))), (min((var_15), (max((var_11), (-1548630200))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 ^= max((min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2147483630) : (arr_0 [i_0] [2])))))), (((/* implicit */unsigned int) (+(arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = (-(1548630203));
                    var_22 &= ((/* implicit */unsigned long long int) min((2145808464U), (38025400U)));
                    var_23 |= min((min((var_0), (((/* implicit */unsigned int) ((var_2) - (((/* implicit */int) arr_6 [(_Bool)1] [8U]))))))), (((/* implicit */unsigned int) min((((arr_4 [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_5 [2U])) : (-1548630204))), ((~(6)))))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(arr_5 [i_0])))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) - (1717882660U)))));
    }
}
