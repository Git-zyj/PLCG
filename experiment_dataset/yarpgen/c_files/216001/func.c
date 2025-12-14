/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216001
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
    var_11 ^= ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_5)), (var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_9), (min((arr_3 [i_1]), (arr_5 [i_0]))))))));
                var_13 = ((/* implicit */unsigned int) ((short) (-(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) << (((arr_2 [i_1 + 1] [i_0 + 3]) - (253342947)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_0)) : (arr_3 [i_0])))))))));
                var_15 = ((/* implicit */short) arr_2 [i_0 + 1] [i_1 + 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~(var_8)));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (short)-11515)))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_2] [i_2]) | (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2])) << (((arr_7 [i_2] [i_2]) - (14384639080818129147ULL))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [0U])) : (((/* implicit */int) arr_8 [i_2])))) - (10457)))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [(short)6] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [3ULL])) != (((/* implicit */int) arr_8 [6U])))))) : (max((0U), (((/* implicit */unsigned int) var_5)))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3]);
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((min((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3]))) <= ((~(((/* implicit */int) var_6))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
    }
    var_22 = ((/* implicit */short) ((unsigned int) (unsigned short)9));
}
