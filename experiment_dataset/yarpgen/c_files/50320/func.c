/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50320
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) var_3))))) && (((arr_0 [i_0 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)4414)))), ((-(((/* implicit */int) (_Bool)1))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (2843968263U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [6U] [i_0 - 1])) ? (((/* implicit */int) (short)4414)) : (((/* implicit */int) var_1))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 ^= min((((/* implicit */int) var_10)), (arr_9 [2LL] [2LL] [2LL]));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_1)), (var_12))), (arr_5 [i_1] [7LL])))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((unsigned long long int) (short)4414))))));
                    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_0]))))), (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) != (max((((/* implicit */int) (short)4393)), (1405474221))))))));
                    arr_10 [i_0] [7] [i_1] [i_1] = ((/* implicit */signed char) min(((~((~(((/* implicit */int) arr_2 [(unsigned char)16] [(unsigned char)16])))))), (((/* implicit */int) var_0))));
                }
            } 
        } 
    }
    var_17 += ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */int) ((signed char) max((var_6), (var_6))));
    var_19 = ((/* implicit */unsigned long long int) var_10);
}
