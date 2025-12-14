/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202694
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))))), (var_16)))) ? (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) var_2))))) : (((8795019280384LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_19 = (!(((/* implicit */_Bool) min((3728895784U), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)123)))))))));
    var_20 = min((var_10), (var_10));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((393216LL) + (((((((/* implicit */_Bool) 68054809)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (var_14))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)192))))))))))));
        var_22 *= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (min((min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((arr_4 [i_0 - 1]) - (97818564520863691LL)))))), (arr_4 [i_1]))), (0LL)))));
            var_24 = (!((_Bool)1));
            var_25 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) -3511064782529460348LL)) && (((/* implicit */_Bool) 8855151838892977763LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3179691146643254694LL)))) : (((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))));
        }
        var_26 = ((/* implicit */long long int) -268435456);
    }
    for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        arr_8 [i_2] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (signed char)4)), (var_14)))))) ? (((/* implicit */long long int) ((unsigned int) ((arr_3 [i_2] [i_2]) - (arr_3 [i_2] [i_2 + 1]))))) : ((-(5920760262310491162LL)))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_12))));
    }
    var_28 = ((/* implicit */_Bool) ((unsigned char) ((4179178219756233614LL) >> (((8246738417209159257LL) - (8246738417209159202LL))))));
}
