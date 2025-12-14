/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34610
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)19094)) : (((/* implicit */int) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)102))))) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */int) var_1)), (((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1))))))))));
    var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (-1489477959)))) ? (min((var_3), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */short) (~(((/* implicit */int) min((arr_3 [i_1 + 2] [i_0 + 1]), (arr_3 [i_1 - 2] [i_0 + 1]))))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), (-2147483646))))));
        }
        for (signed char i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0 + 1] [i_2] [i_3] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-102))));
                            arr_17 [i_0] [(unsigned char)2] [i_0] [i_5] [i_5] [i_2] = ((/* implicit */short) arr_9 [i_0]);
                        }
                    } 
                } 
                arr_18 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_2 - 2] [i_2]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51))))))));
                arr_19 [i_3] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-19100))));
            }
            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -3663402963296444237LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-101))))));
        }
        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) arr_8 [18ULL])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_10))))));
    }
}
