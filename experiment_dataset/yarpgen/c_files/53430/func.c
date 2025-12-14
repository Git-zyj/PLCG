/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53430
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) (short)17057)), (2660143938U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))))));
    var_12 = ((/* implicit */unsigned long long int) max((((short) var_6)), (((/* implicit */short) ((signed char) var_2)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4235506367245127739LL)) ? (((/* implicit */int) (short)-26190)) : (((/* implicit */int) (signed char)-92))));
                arr_6 [i_0] = ((/* implicit */long long int) (short)-8782);
                arr_7 [i_0] [i_1] = arr_0 [i_0];
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (981197602U)))) ? (((min((var_5), (((/* implicit */unsigned long long int) -4876895217184417623LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (3313769701U))))))));
}
