/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210480
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
    var_20 = ((/* implicit */unsigned long long int) ((var_19) - (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (short)1)), (-1LL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */short) var_1);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (short)-2);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) (short)-1)), (min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0])))))) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-12))))));
        arr_5 [i_0] = ((/* implicit */signed char) (((~(max((777686234), (((/* implicit */int) var_6)))))) > (((/* implicit */int) max((max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0])))))));
        arr_6 [i_0] |= ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    var_21 = ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 16417432171065012564ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-38)), (var_1)))))) : (max((max((var_18), (((/* implicit */int) var_1)))), (((var_18) | (var_19))))));
    var_22 = ((/* implicit */long long int) var_4);
}
