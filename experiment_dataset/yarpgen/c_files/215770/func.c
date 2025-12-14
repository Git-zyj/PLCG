/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215770
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
    var_17 &= ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((unsigned char) var_14)), (((unsigned char) var_11))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)122)))) / ((-(var_10)))))));
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_7);
        var_20 = ((/* implicit */unsigned int) (signed char)70);
        arr_5 [i_0] = ((int) 1152921504606846975LL);
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (unsigned char)214))))) ? (min((((/* implicit */unsigned int) var_11)), (var_10))) : (((((/* implicit */_Bool) 1152921504606846978LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (var_8)))))));
            arr_11 [i_1 + 1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_7 [i_2]))), (var_15)))) : (((long long int) ((((/* implicit */_Bool) 1152921504606846978LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14))))));
            arr_12 [i_1 + 3] [i_2] [i_2] = ((/* implicit */long long int) max((min(((!(((/* implicit */_Bool) (unsigned char)125)))), (var_1))), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (arr_10 [i_1 - 1] [i_2] [i_1]))))))));
            arr_13 [i_1] [i_1] [i_1 + 2] = ((unsigned char) ((arr_8 [i_1 - 1]) ? (((/* implicit */long long int) var_15)) : (1152921504606846978LL)));
        }
        arr_14 [i_1 - 2] = arr_10 [i_1] [i_1 + 2] [i_1];
        arr_15 [i_1] [i_1 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_1] [i_1 - 2]), (((/* implicit */int) var_2)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_19 [i_3] = ((/* implicit */unsigned char) arr_16 [i_3] [i_3]);
        arr_20 [2U] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)166)) << (((1313169311) - (1313169309)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1152921504606846976LL)))))) > (min((arr_10 [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_7))))))) : ((+(arr_18 [i_3])))));
    }
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
    {
        arr_23 [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_8 [i_4 - 3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) var_2)) : (-1662591299)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -241510891355279967LL)) || (((/* implicit */_Bool) -1122591104))))) : (((/* implicit */int) ((unsigned char) arr_16 [i_4] [i_4])))))));
        var_22 = ((/* implicit */_Bool) -5292921468754920787LL);
        var_23 = ((/* implicit */int) min((var_23), (arr_9 [i_4] [i_4 - 2])));
    }
    var_24 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) var_11)))));
}
