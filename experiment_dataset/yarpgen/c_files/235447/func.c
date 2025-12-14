/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235447
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = (-(((/* implicit */int) var_6)));
                var_16 = ((/* implicit */long long int) min(((+(var_7))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) != (arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 202657051773540303ULL)) ? ((-(((((/* implicit */_Bool) var_1)) ? (2220971444102538341ULL) : (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (202657051773540303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) : ((+(var_1))))))))));
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) var_2);
                var_19 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((int) arr_5 [i_2]))))), (min((((/* implicit */unsigned long long int) var_2)), (var_4)))));
                var_20 = ((/* implicit */unsigned long long int) arr_7 [i_3]);
                var_21 = ((/* implicit */int) ((var_7) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) * (var_7))) - (8909453730788413902ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(-2147483623))))) ? (202657051773540303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)103))))));
}
