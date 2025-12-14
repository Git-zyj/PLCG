/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24685
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
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >= ((~(((/* implicit */int) min((var_16), (var_16))))))));
    var_19 = var_14;
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)0))));
    var_21 |= ((/* implicit */unsigned long long int) ((_Bool) 18419441866339176699ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [22ULL] [22ULL] [i_0] [i_0] |= var_4;
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_5 [20ULL]))));
                        arr_11 [i_3 - 1] [i_2] [i_0] [7ULL] [7ULL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_1 + 2] [i_2]) ? ((~(((unsigned long long int) arr_2 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), ((~(15564017148329135002ULL)))));
        arr_12 [22ULL] [i_0] |= ((/* implicit */_Bool) ((unsigned long long int) ((((_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (18419441866339176700ULL))));
    }
}
