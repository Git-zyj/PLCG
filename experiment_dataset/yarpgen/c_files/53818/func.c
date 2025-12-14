/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53818
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (var_13)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_15 = ((/* implicit */signed char) min((min((max((var_1), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_13)))), (var_1)));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) var_6)), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = var_6;
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) var_8)), (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (var_7)))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (216172782113783808ULL))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */short) var_11)), (var_8)));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_11))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) var_11);
                    var_20 = ((/* implicit */int) min((max((min((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_4)))))))));
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (var_9)));
                    arr_14 [i_0] [i_0] [i_3] [i_3] &= ((/* implicit */int) min((((((/* implicit */_Bool) min((3121142079U), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (max((var_9), (((/* implicit */unsigned long long int) var_11)))))), (var_9)));
                    arr_15 [i_3] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_4)), (var_6)))), (var_3)))), (min((((/* implicit */long long int) max((((/* implicit */short) var_6)), (var_2)))), (min((((/* implicit */long long int) (unsigned short)27233)), (9223372036854775807LL)))))));
                }
                arr_16 [i_1] [i_0] [i_0] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
