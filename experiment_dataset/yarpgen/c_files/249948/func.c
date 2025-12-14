/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249948
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) arr_2 [i_0])))) / (((((((/* implicit */_Bool) 4419570328440561818ULL)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_13)))) | (((((/* implicit */int) (unsigned char)58)) | (((/* implicit */int) arr_1 [i_0]))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)53))) ? (8658654068736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
                arr_6 [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
                var_17 = ((/* implicit */signed char) max((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0)))) & (((/* implicit */int) ((arr_2 [i_1]) == (((/* implicit */int) (_Bool)0))))))), (((/* implicit */int) ((signed char) max((var_15), (((/* implicit */int) (unsigned short)62421))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_9);
    var_19 = ((/* implicit */unsigned char) max((var_2), (var_15)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_12)))))))) >> (((/* implicit */int) ((((/* implicit */int) max((var_7), (((/* implicit */signed char) var_14))))) < ((-(((/* implicit */int) var_5)))))))));
}
