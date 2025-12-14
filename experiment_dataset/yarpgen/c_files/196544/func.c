/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196544
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0 + 1]))))))), (549755289600LL)));
                    var_11 = ((/* implicit */unsigned int) var_4);
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */unsigned long long int) max(((-(var_1))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)0)))))) ^ (arr_1 [i_0]))))))));
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [i_2])), (var_5))))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned int) var_0);
}
