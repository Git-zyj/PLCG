/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199220
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((0) * (0)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) arr_10 [i_0] [(unsigned short)3] [(signed char)6]);
                            arr_14 [i_1] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2]);
                            arr_15 [i_0] [i_1] [i_0] [0ULL] = ((signed char) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 2])) < (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? ((-(0))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_12))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (0) : (((/* implicit */int) (unsigned char)82))))) ? (((-1) - (((/* implicit */int) var_2)))) : (((/* implicit */int) max((var_4), (var_5))))))) ? ((+((+(((/* implicit */int) (unsigned short)255)))))) : (((((/* implicit */int) max((var_5), (((/* implicit */short) var_0))))) - ((+(((/* implicit */int) (unsigned short)24119))))))));
}
