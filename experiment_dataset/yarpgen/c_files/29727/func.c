/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29727
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
    var_12 = var_7;
    var_13 ^= ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5))))));
                    arr_6 [11LL] [(_Bool)1] [12LL] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_0 [i_0])));
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((4077417440558050507LL) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))));
        arr_9 [i_0] = (((_Bool)0) ? (var_6) : (5986551781830369032LL));
        var_15 = (_Bool)0;
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = (~(((((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) 5986551781830369020LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_2))) : (2784635275641467778LL))));
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) >= (arr_3 [i_3] [i_3]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) ((_Bool) var_3))) : (((arr_0 [i_4]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_0 [i_4])))))))))));
        arr_14 [(_Bool)1] [i_4] = arr_3 [i_4] [i_4];
    }
    var_19 = ((/* implicit */_Bool) (~((-(var_2)))));
}
