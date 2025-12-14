/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229077
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((unsigned int) (signed char)-23));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)5113)) ? ((+(549755813376ULL))) : (((/* implicit */unsigned long long int) (+(var_12)))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)23))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_3 + 3] [i_3 + 1] = ((/* implicit */unsigned short) (_Bool)1);
                var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_3 - 1])), ((signed char)-23)))) : (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                arr_14 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_2] [i_2] [i_2]), (arr_9 [i_3 + 2] [i_3 + 2]))))) : (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))))));
                var_21 = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_3);
}
