/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189869
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((var_12) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (5375860462904194859LL)))))) ? (((/* implicit */int) (short)14635)) : (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)55489)) + (((/* implicit */int) (unsigned short)10061))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] [i_3 + 1] = ((var_0) ? (((arr_11 [i_3 + 1] [i_3 + 1]) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3148205273U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55508))))))));
                var_19 = ((/* implicit */unsigned char) 3743508845U);
                var_20 |= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (unsigned char)201)), (1146762022U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) var_16);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-(((((/* implicit */_Bool) 1146762000U)) ? (((/* implicit */int) (unsigned short)10047)) : (((/* implicit */int) (unsigned short)55489)))))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_15))))));
}
