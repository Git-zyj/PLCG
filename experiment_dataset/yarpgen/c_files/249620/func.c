/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249620
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
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_3)), (var_2))) : (((/* implicit */long long int) min((((/* implicit */int) var_11)), (var_10)))))), ((+(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)17))));
                var_15 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (var_7)))));
                arr_4 [i_1] = max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) (~(var_1)))), (var_5))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) ? ((+(max((var_1), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)17)) : (1573018521))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) var_6)))))), (min((var_4), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_8)))))))));
    var_17 = ((/* implicit */_Bool) min((min((var_5), (((/* implicit */long long int) min((var_1), (var_0)))))), (((/* implicit */long long int) max((var_6), (((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_8)))) : (var_12)));
        arr_10 [i_2] = ((/* implicit */long long int) var_7);
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_13 [i_3] = ((((/* implicit */_Bool) min((var_6), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (var_10)))) ? (var_4) : (var_4)))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (var_2))) : (((/* implicit */long long int) var_4)))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_4)))) ? (max((var_9), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) var_6))))) ? (max((var_4), ((~(var_4))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_11)))))))));
    }
}
