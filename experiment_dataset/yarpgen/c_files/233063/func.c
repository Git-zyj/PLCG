/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233063
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
    var_17 = ((/* implicit */int) max((var_11), (((/* implicit */long long int) var_3))));
    var_18 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */signed char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)103))))), (var_16))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_16), ((signed char)94))))));
        var_20 *= ((/* implicit */signed char) ((long long int) ((int) (_Bool)1)));
        var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((unsigned short) (_Bool)1))))), ((-(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((+(18016561315629434893ULL))) == (((/* implicit */unsigned long long int) var_8))))), (var_8)));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_7)))))));
        arr_5 [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-115)))), (((/* implicit */int) (signed char)41))));
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
    }
}
