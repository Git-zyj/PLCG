/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36510
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_21 -= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)65515)) << (((((/* implicit */int) max((arr_1 [i_0] [i_0]), ((signed char)26)))) - (20)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 9; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1 - 3]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_7 [i_1 + 1] [i_2])) / (((/* implicit */int) (unsigned short)20)))), ((-(((/* implicit */int) arr_7 [i_1 + 2] [i_2]))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 3]))));
        }
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            arr_13 [i_1] = ((/* implicit */_Bool) (((((-(((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_17)))))) + (2147483647))) >> (((((((/* implicit */_Bool) 0U)) ? (min((((/* implicit */unsigned int) arr_11 [i_1] [i_3 - 1] [i_3])), (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))) - (4294945387U)))));
            var_23 -= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_7 [i_1 - 4] [i_3])) : (((/* implicit */int) var_19))))));
        }
        var_24 = ((/* implicit */long long int) var_7);
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (unsigned short)20);
                    var_26 = ((/* implicit */unsigned int) var_15);
                    var_27 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_16 [i_4]))))), (1175268197U))), (((/* implicit */unsigned int) arr_14 [i_6 - 1] [i_4]))));
                }
            } 
        } 
        arr_23 [i_4] = (-(((/* implicit */int) var_3)));
        var_28 = ((/* implicit */unsigned short) (signed char)81);
    }
    var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
}
