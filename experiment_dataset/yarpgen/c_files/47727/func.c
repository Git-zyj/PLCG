/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47727
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
    var_15 -= ((/* implicit */unsigned int) var_2);
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((max((((/* implicit */long long int) max((var_13), (arr_0 [i_0])))), (((((/* implicit */_Bool) (unsigned char)254)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) / (((/* implicit */long long int) max((max((var_10), (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_7)))))))));
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) 1536);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (arr_0 [9U]))))))));
            var_21 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) 4294967295U)), (((long long int) var_2)))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -947418629)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4344)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0])))))));
        }
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_22 = ((((arr_5 [i_2] [i_2] [i_2]) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (!(((/* implicit */_Bool) 947418630))))))) + (48))) - (47))));
        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) 0U)) < (5752710323533065860LL)))), (2147483647)))) || (((/* implicit */_Bool) var_1))));
        var_25 = ((/* implicit */unsigned char) (~(min((max((arr_7 [i_2]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((0U) != (26U))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_26 &= ((/* implicit */long long int) ((int) ((unsigned short) arr_11 [i_3] [i_3])));
        var_27 = ((/* implicit */unsigned int) ((947418630) != (((/* implicit */int) (unsigned short)31467))));
        arr_13 [i_3] = ((/* implicit */unsigned char) var_3);
        arr_14 [i_3] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) min(((unsigned short)20607), (((/* implicit */unsigned short) (short)-946))))), (4294967295U)))));
    }
}
