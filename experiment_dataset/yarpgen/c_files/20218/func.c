/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20218
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
    var_20 = (short)-32010;
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) var_13))) + (var_5)));
    var_22 = ((/* implicit */unsigned short) min((var_22), (var_15)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(short)16])), (arr_2 [(unsigned short)7] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -9223372036854775805LL))))))), (((((/* implicit */_Bool) (unsigned short)30462)) ? (((/* implicit */unsigned long long int) 9223372036854775804LL)) : (10978404256457032902ULL)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min(((short)-32755), ((short)12179)))), ((unsigned short)16678)))), ((((-(var_7))) * (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (var_11)))))));
                arr_6 [i_0] [13ULL] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
}
