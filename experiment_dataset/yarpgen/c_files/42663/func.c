/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42663
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
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    var_14 &= ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) var_8);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((1125899898454016ULL), (((/* implicit */unsigned long long int) 1492179445873328026LL)))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)42)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)-25))))))) ? ((~((~(25ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((signed char) ((signed char) arr_6 [i_1] [i_2 + 1]))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) 3688355123945699054LL)), (12212046208990942953ULL)))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [i_1]))))))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */short) (unsigned short)36064);
            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (1065151889408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_11)))))))));
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(-3688355123945699054LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned char)118))));
        }
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [(unsigned char)9])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1273128113032248973LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-43)), ((unsigned char)6))))) : (((arr_9 [(short)6]) ? (6263346233277827414ULL) : (((/* implicit */unsigned long long int) 3688355123945699054LL)))))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (signed char)-96))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((28U), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3224308999882278450ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_0))))))))));
        var_24 |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((unsigned char) arr_4 [(short)0] [i_1]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_25 ^= ((/* implicit */_Bool) (signed char)-57);
        arr_16 [(signed char)0] [(signed char)0] &= ((/* implicit */short) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-43))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (1545209855U))), (((/* implicit */unsigned int) ((int) arr_15 [(unsigned char)2] [(unsigned char)2])))))));
    }
    var_26 -= max((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-3688355123945699054LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55139)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)90))))));
}
