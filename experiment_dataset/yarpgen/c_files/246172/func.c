/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246172
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
    var_13 = ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) ((_Bool) (signed char)120))) | (((/* implicit */int) ((_Bool) var_12))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [4] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_1 - 1] [i_0 + 1]), (arr_5 [i_1 - 1] [i_0 + 1])))) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 1])) : (((/* implicit */int) max((arr_5 [i_1 - 1] [i_0 + 1]), (arr_5 [i_1 - 1] [i_0 + 1]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    arr_12 [i_2] [i_2] [i_2] [i_1 - 1] = -1192898707;
                    arr_13 [i_0] [i_0] [i_0 + 1] [i_2] = ((/* implicit */signed char) ((long long int) arr_4 [i_0 + 1] [i_1 - 1]));
                    arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (57669349) : (((/* implicit */int) (unsigned short)21429))));
                    arr_15 [i_0] [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    var_14 = ((/* implicit */int) var_11);
                    var_15 = ((/* implicit */unsigned short) -57669374);
                    var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 1])) ? (18021393574365626171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)4655)) ? (var_10) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned short) var_8)))));
}
