/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222635
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
    var_12 -= ((/* implicit */unsigned char) ((long long int) max((871359408U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (-2147483646)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) 1643472108U)) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0] [i_0 + 2])))))));
        arr_3 [i_0] = ((/* implicit */int) 8610897431405711150LL);
    }
    var_14 = var_5;
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            {
                arr_12 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) max((arr_7 [i_1] [i_2 - 3]), (arr_7 [i_2] [i_2 - 2])))), (((short) arr_7 [i_1] [i_2 + 1]))));
                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_3), (((/* implicit */unsigned long long int) (unsigned short)1507))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29447))) <= (var_7)))) : ((~(((((/* implicit */int) (short)768)) / (((/* implicit */int) (unsigned char)39))))))));
                var_17 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1] [18]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                var_18 = ((/* implicit */unsigned char) ((short) ((var_3) / (arr_2 [i_2 - 2]))));
            }
        } 
    } 
}
