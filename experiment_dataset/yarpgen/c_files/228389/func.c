/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228389
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16)))))))) && ((!(((/* implicit */_Bool) var_7))))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) var_8);
                            arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) << (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) var_12);
                        }
                        for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_3] [i_3 - 1] [i_3] [i_0] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_3] [i_3 - 1] [i_3] [i_0] [i_1]))))));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_5 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 2] [i_5 - 1] [i_1] [i_5 + 2])) % (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 2] [i_3 - 1] [i_3] [i_5])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_1] [i_5]))))));
                        }
                        var_21 *= ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
                        arr_21 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) var_8);
                    }
                    arr_22 [i_0] [i_1] [i_0] = ((int) var_16);
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)14)))))));
                    arr_23 [i_0] [i_0] [i_2] = ((((/* implicit */int) max((arr_12 [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_0] [(unsigned short)7] [(unsigned short)7] [i_2])))) + (((((/* implicit */_Bool) 2997323452U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_12);
    var_24 = ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
}
