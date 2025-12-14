/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208701
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
    var_13 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), ((~(((unsigned long long int) var_12))))));
    var_14 = ((/* implicit */_Bool) ((short) var_2));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) max((max((var_3), (((/* implicit */unsigned short) (unsigned char)0)))), (((/* implicit */unsigned short) var_5))))), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_9)))))))));
                arr_6 [i_0] = var_10;
                arr_7 [i_0] = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) (unsigned char)0))))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-2222)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((short) var_6))))) : (((/* implicit */int) arr_2 [i_0] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_12);
}
