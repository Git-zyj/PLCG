/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221312
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) (signed char)23))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = (~(((/* implicit */int) max((max((((/* implicit */unsigned short) (short)-11331)), (arr_4 [i_0] [i_1]))), (arr_4 [i_1] [i_0])))));
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((143552238122434560LL), (arr_7 [i_3] [(_Bool)1] [i_2] [i_3])));
                            arr_11 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(0ULL))), (arr_6 [i_1] [i_0] [i_1 + 1] [i_1 - 4])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1232661717)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (var_8))) ^ ((+(((/* implicit */int) var_11))))))) : ((-(883789634757635383ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((((((/* implicit */int) var_13)) > (((/* implicit */int) var_5)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (var_6)))))) ? (((/* implicit */unsigned long long int) var_8)) : (min((var_9), (((/* implicit */unsigned long long int) ((1232661716) & (((/* implicit */int) (unsigned short)21388)))))))))));
}
