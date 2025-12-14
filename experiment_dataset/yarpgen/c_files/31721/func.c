/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31721
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
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 3] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 2]))))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_1 [(unsigned short)2] [i_1])))), (((/* implicit */int) var_3))))), ((-((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (signed char)-10)), ((short)-24426))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_7))))));
    var_16 = ((/* implicit */signed char) 6020288318373200524LL);
}
