/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36478
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 |= ((/* implicit */signed char) arr_0 [i_0]);
        var_19 = max((max((var_3), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-93)))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((max((8253611053484394893ULL), (((/* implicit */unsigned long long int) 4294967281U)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8253611053484394893ULL), (((/* implicit */unsigned long long int) var_1))))) || (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_7)) : (arr_1 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) ((arr_1 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1])) ? (arr_6 [i_1] [i_1 - 1]) : (((/* implicit */int) var_15))));
    }
    var_20 = ((/* implicit */int) (unsigned char)238);
}
