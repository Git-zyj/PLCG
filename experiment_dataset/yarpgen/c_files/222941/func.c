/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222941
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
    var_13 ^= ((/* implicit */short) var_6);
    var_14 = ((/* implicit */signed char) (-(var_12)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 511U)) + (8580172574720361821LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_11)))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((((unsigned long long int) var_9)) % (((/* implicit */unsigned long long int) var_11)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_4)))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))) : (((/* implicit */long long int) var_12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (min((((unsigned char) ((var_2) << (((var_5) - (6059871571174494779LL)))))), (((unsigned char) ((unsigned long long int) var_4)))))));
                var_17 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_5)), (var_3)))))));
                var_18 = ((/* implicit */unsigned short) ((_Bool) ((long long int) var_5)));
                var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned long long int) 511U))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */unsigned long long int) var_9)) * (var_3)))))));
            }
        } 
    } 
}
