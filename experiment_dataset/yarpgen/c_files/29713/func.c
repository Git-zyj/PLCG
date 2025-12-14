/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29713
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 80682179)) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) -80682167))))))), (max((min((((/* implicit */unsigned long long int) var_10)), (var_0))), (((/* implicit */unsigned long long int) 1706083390))))));
    var_16 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_13)) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_14), ((signed char)-35)))) : (var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = var_6;
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)25)) ? (arr_6 [i_2] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) 738691579))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [12U] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)58220))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_11 [(signed char)17]))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58220))))) ? (4503565267632128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 1])))));
            }
        }
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (3055899766U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)64)))))));
            arr_15 [i_4] [i_0] = ((/* implicit */signed char) arr_1 [(signed char)1] [0U]);
        }
    }
    var_22 &= ((/* implicit */unsigned short) max((var_2), (var_12)));
}
