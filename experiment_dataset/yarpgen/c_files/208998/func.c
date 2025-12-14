/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208998
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) ((_Bool) var_15))))));
        var_19 += ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((((/* implicit */int) (unsigned short)809)) >= (((/* implicit */int) (unsigned short)6585))))), (arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (arr_1 [i_0] [i_1 + 1])))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_0 [i_0] [i_1])))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)62980))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_1] [i_1])), (var_4)))) ? (max((((/* implicit */int) arr_3 [i_1] [i_1])), (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_11))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0])))) ^ (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_6))))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_0]));
    }
    var_23 = ((/* implicit */_Bool) var_4);
    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_11)), (var_17)));
}
