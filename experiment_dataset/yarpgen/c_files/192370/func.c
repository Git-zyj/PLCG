/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192370
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
    var_16 |= ((/* implicit */short) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_2)))) != (((/* implicit */int) (unsigned char)233))))), (var_8)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)26))));
        arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)28038)) && (((/* implicit */_Bool) min((((/* implicit */long long int) 0U)), (4425618381595959093LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((5), (((/* implicit */int) var_1))))))) : (2630578386U)));
        arr_5 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_6 [13] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    var_17 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)229)), (var_7))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_11) : (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_5))))), (var_0)))));
    var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_7)))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
}
