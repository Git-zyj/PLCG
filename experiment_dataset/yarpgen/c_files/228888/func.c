/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228888
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
    var_20 = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) var_4)), ((-(var_10)))))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_17)), (var_11))) != (((/* implicit */unsigned long long int) var_10))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_13)))), ((~(var_19)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((min((min((12582912U), (arr_4 [i_0]))), (((/* implicit */unsigned int) (+(var_6)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_1)))) <= (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))));
                    var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)8192))));
                }
            } 
        } 
    } 
}
