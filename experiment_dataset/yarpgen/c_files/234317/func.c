/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234317
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
    var_11 = ((/* implicit */signed char) ((unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52831))) ^ (4038298493U)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) >= (arr_7 [i_1] [i_2])));
                    var_13 = arr_3 [i_0] [i_0] [i_2];
                    var_14 += ((((/* implicit */_Bool) max((((unsigned long long int) 4294967274U)), (((/* implicit */unsigned long long int) (!(arr_4 [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) min((4294967274U), (3221225472U)))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */short) (((!((!(((/* implicit */_Bool) 4294967282U)))))) || (var_7)));
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 798738408335215290ULL)) ? (((/* implicit */unsigned int) -1)) : (4294967274U))), (max((((3645351419U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))))), (min((((/* implicit */unsigned int) (_Bool)1)), (649615876U)))))));
}
