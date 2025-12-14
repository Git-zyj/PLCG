/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219356
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 11745046407337646747ULL)) ? (((/* implicit */int) var_0)) : (-1483235924)))), (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) < ((~(4294967295U))))))) : (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_14) : (-369982352))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) max((4294967287U), (4294967270U))))))), (((((/* implicit */_Bool) ((4294967283U) - (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26836))))))))));
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) (+(((4294967270U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)0] [1ULL] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_15 [i_4] [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 19U)) || (((/* implicit */_Bool) 4294967270U))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1606175001))))), (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))), (1733489443595931484LL))))))));
            }
        } 
    } 
}
