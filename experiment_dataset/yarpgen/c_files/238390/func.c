/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238390
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((12030520619530013143ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((min(((+(var_17))), (((/* implicit */int) ((_Bool) arr_0 [i_0]))))) + (2147483647))) << (((((arr_1 [i_0 + 2]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 - 3])))) - (3770)))));
                    var_19 = ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) ^ (7041773095023471745ULL)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                    var_20 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) != (var_2))))) <= (max((arr_3 [(_Bool)1] [i_1] [i_0]), (((/* implicit */unsigned int) var_6))))))) < (((/* implicit */int) (short)-27131)));
                }
            } 
        } 
        arr_11 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_7 [i_0 + 1])))))))) ? (((unsigned long long int) arr_4 [i_0] [i_0 - 2] [i_0 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) var_15)) > (((/* implicit */int) var_13))))))))));
    }
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_11) ? (12323644901336188324ULL) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31580))) : ((~(var_4))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
    var_22 = ((var_16) + (((72053195991416832ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27131))))));
}
