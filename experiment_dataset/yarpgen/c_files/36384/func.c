/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36384
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) : (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_7))));
        arr_3 [i_0] [i_0] = (_Bool)0;
        var_19 *= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (_Bool)0))), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))));
        var_20 = (_Bool)1;
        var_21 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))) * (((/* implicit */int) var_6))));
        arr_7 [i_1] [i_1] = ((((/* implicit */int) var_18)) != (((/* implicit */int) var_8)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 *= ((_Bool) (-(((/* implicit */int) (_Bool)0))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))));
        var_24 *= (_Bool)1;
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] [i_3] = ((/* implicit */_Bool) ((var_3) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((arr_4 [i_2] [i_3]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_3] [i_2]))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((var_18) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
            arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))) - (1))))) : (((/* implicit */int) min((((_Bool) var_11)), (((_Bool) (_Bool)1)))))));
            arr_15 [i_3] [i_3] [i_3] = (_Bool)0;
        }
        arr_16 [i_2] = ((arr_10 [i_2]) || ((((((_Bool)1) && (var_10))) && ((_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_17 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))));
        var_27 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        var_28 *= (_Bool)1;
        var_29 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_9)))))));
}
