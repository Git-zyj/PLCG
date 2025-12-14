/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23969
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
    var_14 = ((/* implicit */short) max((max(((unsigned short)59669), ((unsigned short)5877))), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_2))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned short) (short)-972)), ((unsigned short)18)));
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5866)) ? (((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 + 3])) ? (arr_0 [i_1 + 3]) : (((/* implicit */int) (short)-32758)))) : ((-(arr_3 [i_1])))));
                var_18 = ((short) (unsigned short)5867);
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) min(((+((-(var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max(((short)4227), ((short)4231)))), ((unsigned short)5867))))));
}
