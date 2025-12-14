/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50564
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)64018)) && (((/* implicit */_Bool) (unsigned short)14632))))))) : (((/* implicit */int) arr_6 [i_0] [i_1]))));
                arr_8 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) 2083011484U);
                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (min((((((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) >> (((var_15) - (9932751087654322248ULL))))), ((~(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1])))))) : (((/* implicit */int) ((short) var_16)))));
                var_18 = (~(((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-983))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))) : (max((((/* implicit */unsigned int) (signed char)-54)), (2083011484U)))))));
                var_20 = (((!(((/* implicit */_Bool) var_15)))) ? (((unsigned long long int) (short)-1)) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3]))) / (var_11))))));
            }
        } 
    } 
    var_21 = (~(((/* implicit */int) (short)-7798)));
}
