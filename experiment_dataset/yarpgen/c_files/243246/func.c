/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243246
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((min((((var_16) / (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(short)9]))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [(_Bool)0]))))))))));
        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))) % (max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((min((max((((/* implicit */int) var_15)), (var_5))), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_1 [i_0]))))))), (min((((((/* implicit */_Bool) 1122799460)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [(short)9])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [(short)1])) : (((/* implicit */int) (short)-8810)))))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((((((/* implicit */int) arr_4 [(_Bool)1])) % (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) != (var_14)))))) : (max((((/* implicit */int) arr_4 [i_1])), (var_9)))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_12)), (var_7)))) / (((/* implicit */int) min(((short)-8810), ((short)-8785))))))) ? (max((var_14), (((/* implicit */unsigned int) arr_4 [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_4 [(_Bool)1]))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)49366)), (arr_7 [i_2] [12LL])));
        var_25 += ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [(short)16] [(short)16])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)2] [16ULL]))) > (2470931374444023099LL))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((signed char) (-(arr_7 [i_2] [(short)16])))))));
    }
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) var_10)))))));
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((var_0) ? (min((((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_18))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (-1122799467)))))))));
    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
}
