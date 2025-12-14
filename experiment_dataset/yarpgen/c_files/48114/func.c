/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48114
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [0] [0] [0]), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (max((((/* implicit */unsigned long long int) -1853682775)), (var_0)))))) ? (((/* implicit */int) ((short) 1853682761))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) 1853682761)))))) < (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))))))));
                arr_5 [9ULL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((arr_0 [i_0]) + (2147483647))) >> ((((~(((/* implicit */int) arr_1 [i_1])))) + (143)))));
                var_11 = max((((/* implicit */int) ((short) ((arr_0 [i_1]) % (((/* implicit */int) arr_1 [13U])))))), (((((/* implicit */_Bool) ((short) var_4))) ? ((~(arr_0 [(unsigned short)2]))) : (((((/* implicit */_Bool) arr_3 [14U] [14U])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [9] [i_0] [i_0])))))));
                var_12 = ((/* implicit */long long int) arr_0 [8]);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))));
}
