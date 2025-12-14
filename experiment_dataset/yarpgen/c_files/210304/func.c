/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210304
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (min((var_10), (((/* implicit */unsigned long long int) -9035855029664266320LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0])))))))));
                var_16 = ((/* implicit */int) max(((-(var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 + 2])) || (((/* implicit */_Bool) min((arr_4 [i_1 - 1] [i_0]), (((/* implicit */unsigned long long int) var_1))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 2]))));
                arr_8 [i_0] = ((unsigned char) (~(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((((long long int) 8925460349782708639LL)) | (((((/* implicit */_Bool) (unsigned char)93)) ? (7696581394432LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6746))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (short)-6752))))) ? (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)24522))))) : (var_1))))));
}
