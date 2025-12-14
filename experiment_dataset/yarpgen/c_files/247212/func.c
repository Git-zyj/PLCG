/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247212
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
    var_20 = ((/* implicit */int) ((short) var_14));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */unsigned long long int) arr_3 [6U] [8LL] [i_1]);
                arr_4 [i_0] [i_0] [(unsigned char)5] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (max((((/* implicit */unsigned int) arr_2 [i_0])), (16777216U)))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)103)) | (((/* implicit */int) (short)-31648))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1102544727U)) ? (684217210543066075ULL) : (((/* implicit */unsigned long long int) 8699907872620828969LL))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)8] [i_1])))))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153)))))) ^ (var_13)));
}
