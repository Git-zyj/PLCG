/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53804
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) 550170591U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26468))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_3 [i_2] [i_0]);
                        var_19 = ((/* implicit */long long int) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_2 [i_2 - 2]))))));
                        arr_10 [i_3] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) 550170591U));
                        var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1] [i_2 - 1])) ? (((((arr_0 [i_3]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (24661))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [12] [i_2 + 2] [i_2 - 1] [i_2 + 2])))));
                        var_21 = ((/* implicit */unsigned short) (~(var_3)));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [13U] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [i_2 - 3] [i_2 - 1]))));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-26452))))));
                    var_23 = ((/* implicit */unsigned char) ((signed char) (~(arr_0 [i_1]))));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)40)) ? (7192499222771568351LL) : (((/* implicit */long long int) 550170577U))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_4 + 2] [i_4 + 1] [i_4 - 1])))))));
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (arr_15 [i_5] [i_5] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_5]))))));
                    arr_17 [i_1] = ((/* implicit */unsigned short) var_14);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_15 [i_0] [4ULL] [i_1] [i_5])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)11210))))) : (var_3))))));
                }
                for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) (short)26468))))) ? (((((/* implicit */_Bool) var_6)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)23186), ((short)-22988)))))));
                    var_28 = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_6] [i_1]);
                    var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 4094739431U)), (4611677222334365696LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (arr_6 [i_0])))) : ((~(var_13)))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */short) (unsigned char)134)), ((short)32767))), (((/* implicit */short) (signed char)118))))) || (((/* implicit */_Bool) var_9))));
}
