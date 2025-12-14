/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241116
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
    var_13 += ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) (unsigned short)22193)) ? (((/* implicit */int) (unsigned short)6572)) : (((/* implicit */int) (unsigned short)55924))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) var_8)))));
                var_15 = (unsigned short)22193;
                var_16 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) (unsigned short)44980)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned short)43333)))) != (((/* implicit */int) (unsigned short)9611))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                var_17 &= ((/* implicit */signed char) ((unsigned short) ((unsigned short) max((((/* implicit */unsigned short) var_4)), ((unsigned short)0)))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35225)))))))))))));
                arr_10 [i_2] [(unsigned short)8] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */int) max((arr_7 [i_2] [i_3]), ((unsigned short)47467)))) % (((/* implicit */int) arr_1 [i_2]))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_2))));
    var_20 *= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)6572))) : (((/* implicit */int) ((unsigned short) (unsigned short)4860)))));
}
