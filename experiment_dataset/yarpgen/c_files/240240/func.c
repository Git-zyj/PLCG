/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240240
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 &= min((arr_2 [i_0] [(unsigned short)10]), (var_1));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)47)) + (((/* implicit */int) (signed char)-64))))), (((((arr_2 [i_0] [6]) && (((/* implicit */_Bool) var_4)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12902))))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) (unsigned short)4095)) << (((-1) + (13))))) == (((/* implicit */int) (signed char)-47)))));
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_5 [i_2 + 1] [6U]), (arr_5 [i_2 - 2] [(signed char)14])))), (((((/* implicit */_Bool) min((arr_3 [(_Bool)1]), (((/* implicit */unsigned int) arr_2 [i_3] [10U]))))) ? (((var_1) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_3])) : (((/* implicit */int) arr_0 [(unsigned short)4] [i_3 + 2])))) : (((/* implicit */int) arr_5 [i_3 + 4] [(unsigned short)0]))))));
                var_20 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((arr_6 [i_2]), (arr_1 [(_Bool)0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 - 2] [(signed char)2])) && ((_Bool)1)))) : (((((/* implicit */_Bool) arr_8 [(signed char)0] [i_3] [(_Bool)1])) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((-570140605) * (((/* implicit */int) (_Bool)1)))))));
}
