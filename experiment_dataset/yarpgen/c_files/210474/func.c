/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210474
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_0])), ((short)-21840))))) : ((~(var_16)))))));
                    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_2])), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-3534)), (8513827772652576025LL)))), (min((((/* implicit */unsigned long long int) var_7)), (arr_6 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21831)) && (var_7))))))) ? (min(((~(-1292564099113124627LL))), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35))))) | (((/* implicit */int) max((((/* implicit */short) (unsigned char)110)), ((short)-21840))))))))))));
    var_22 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_14))))));
}
