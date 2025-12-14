/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205138
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-13855)) && (((/* implicit */_Bool) 2882274545396731382ULL))));
            var_10 = ((/* implicit */int) max((((long long int) ((((/* implicit */_Bool) (unsigned short)8188)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-1LL)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 404460572)), (var_5)))) ? (var_5) : ((-(arr_1 [i_1])))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_11 = arr_7 [i_2] [i_2] [10ULL];
            var_12 = ((/* implicit */int) (short)13869);
        }
        arr_9 [i_0] = ((/* implicit */signed char) (((~(6436874831383319749LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9441)))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)-32764)) / (404460572))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))))))));
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!((_Bool)1))))));
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_16 = ((((/* implicit */_Bool) (~(var_5)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (81330201)))));
}
