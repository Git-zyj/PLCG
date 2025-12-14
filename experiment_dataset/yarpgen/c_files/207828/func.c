/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207828
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 -= (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_3 [i_0] [i_0] [(short)10]) >> (((((/* implicit */int) var_6)) - (83))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)26241)) == (((/* implicit */int) (signed char)114)))))))));
                arr_6 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [16LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (var_11)))) && (((/* implicit */_Bool) arr_5 [i_1 + 1])))) ? (min((((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)14])) ? (arr_0 [(short)13]) : (arr_0 [(unsigned char)2]))), (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) >= (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (unsigned char)195))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) : (arr_0 [i_2]))))))))));
                arr_14 [i_2] [(signed char)1] [(_Bool)1] = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(2658465055U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (((/* implicit */int) var_3))));
}
