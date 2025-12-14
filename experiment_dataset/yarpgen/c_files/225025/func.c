/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225025
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
    var_16 ^= ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))), (((signed char) (+(((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+(arr_6 [i_2 - 1] [i_2] [i_2 - 1] [i_2])));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (-330895411) : (((/* implicit */int) var_1))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))) : (arr_6 [i_2] [(_Bool)1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_20 ^= ((/* implicit */short) (~(var_8)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_21 *= ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) var_4))));
                        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_1] [i_0]))));
                        var_23 += ((unsigned char) arr_4 [i_0] [i_2 - 1] [i_0]);
                        arr_11 [i_0] [i_1] |= ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)208))))));
                        arr_16 [i_1] = ((/* implicit */int) var_3);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((int) arr_15 [14U] [i_4] [i_0] [i_0] [i_1 + 1] [i_0 + 3])))));
                    }
                }
            } 
        } 
        arr_17 [i_0 + 1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0 - 4] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_26 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))));
        var_27 = ((arr_2 [i_5]) && (((/* implicit */_Bool) var_7)));
    }
    var_28 = ((/* implicit */short) var_1);
}
