/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193720
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((-1486782223) > (510104804)))) == (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */int) arr_3 [i_0]))))))), (max((((/* implicit */int) ((510104809) >= (((/* implicit */int) var_1))))), (-2147483647)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (arr_2 [i_0])))), (2147483647))), (((((/* implicit */_Bool) (-(0U)))) ? (((1904545989) / (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_10)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_11 [i_1] = ((/* implicit */signed char) ((arr_8 [i_1] [i_1]) + (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
        var_11 = ((/* implicit */int) min((var_11), (min((((/* implicit */int) arr_7 [i_1])), (((var_5) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)22)) || (((/* implicit */_Bool) var_8))))) : (2117377239)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_12 *= ((/* implicit */_Bool) 2147483629);
            arr_15 [i_1] [i_1] = ((((510104802) * (((/* implicit */int) arr_13 [i_2] [(_Bool)1])))) == (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (4095))));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_19 [i_3] = ((/* implicit */int) max(((~(1428792670U))), (((/* implicit */unsigned int) var_4))));
        arr_20 [i_3] = (-((~(arr_18 [i_3] [i_3]))));
        arr_21 [i_3] = ((arr_13 [6] [i_3 + 2]) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) 4106164271U))) > (((/* implicit */int) var_1))))) : ((+(((/* implicit */int) arr_7 [i_3 + 2])))));
    }
    var_13 = 510104802;
    var_14 = ((/* implicit */unsigned char) var_5);
}
