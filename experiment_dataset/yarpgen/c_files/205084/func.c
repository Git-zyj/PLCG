/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205084
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
    var_16 = ((/* implicit */unsigned long long int) var_15);
    var_17 = ((/* implicit */int) max((var_17), (max((((var_8) + (((/* implicit */int) (!(((/* implicit */_Bool) -4890642097042827767LL))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((long long int) 1522667924))))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_10))))), (((((/* implicit */long long int) 0)) | (3679296672886093081LL)))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((long long int) var_14)))) : ((~(arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (12403333112787440728ULL)));
                }
            } 
        } 
    } 
}
