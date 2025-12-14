/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214012
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)55)), ((-(((/* implicit */int) (signed char)55))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))) : (min((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)-65)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-106)))))));
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                                var_21 = ((/* implicit */unsigned long long int) var_9);
                                arr_16 [(signed char)10] [(signed char)10] = ((((/* implicit */_Bool) (signed char)-84)) ? (min((arr_6 [0U] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) (signed char)33)) & (((/* implicit */int) (signed char)93))))))));
                                var_22 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_18))));
                                var_24 = ((/* implicit */unsigned int) 7285812587271621751ULL);
                                arr_21 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_6 - 1])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)-65))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)105))))) : (max((var_17), (((/* implicit */unsigned long long int) arr_18 [i_5 - 1] [i_6 + 1])))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_1 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (signed char)77)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95)))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) & (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)69)))))))));
    }
}
