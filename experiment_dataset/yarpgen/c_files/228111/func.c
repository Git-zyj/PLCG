/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228111
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((max((arr_0 [i_0] [i_0]), (15100455U))), (((/* implicit */unsigned int) arr_2 [i_0])))))));
        var_15 += ((/* implicit */_Bool) min((min((arr_0 [13U] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) - (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1))))) ? (max((var_12), (((/* implicit */unsigned int) (_Bool)0)))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))))), (((((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) ? (arr_0 [0U] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_5);
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) << (((1194887889U) - (1194887871U)))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) (((~(((unsigned int) arr_9 [i_1])))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2 - 2])))))));
                var_18 |= (-(((unsigned int) min(((signed char)124), (((/* implicit */signed char) arr_5 [i_1]))))));
                var_19 ^= ((/* implicit */_Bool) var_7);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((_Bool) var_8));
}
