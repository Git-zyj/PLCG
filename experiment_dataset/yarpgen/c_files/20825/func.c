/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20825
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
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)14)))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0])) - (14721))))))));
                var_15 = ((/* implicit */unsigned int) var_7);
                var_16 = ((/* implicit */signed char) (~(((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)31828), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])))))) : (arr_1 [i_0] [i_0])))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_13))), (var_8))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (((-2147483647 - 1)) - (((/* implicit */int) var_13)))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))))), (((/* implicit */int) (unsigned short)65535))));
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) max((var_10), (var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
