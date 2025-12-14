/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201498
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
    var_16 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) (~(arr_4 [i_0]))));
                var_17 = ((/* implicit */short) ((((var_1) ? (arr_4 [i_0]) : (arr_4 [i_0]))) == ((-(arr_4 [i_1])))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(-871020769))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8882)) ? (((/* implicit */int) (unsigned short)54860)) : (-871020769)));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((var_4), (((/* implicit */int) var_2))))))) ? (((((/* implicit */int) (unsigned short)2032)) | (((((/* implicit */_Bool) 2123366612)) ? (-871020769) : (-871020769))))) : (((/* implicit */int) var_14))));
}
