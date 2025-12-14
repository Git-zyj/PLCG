/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230060
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [5ULL] [5ULL] [i_2] [i_2 + 1])))))) + (((/* implicit */int) max((((/* implicit */short) (signed char)-48)), (arr_5 [(unsigned char)19] [i_2 + 1] [i_2] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (-1027357320)));
                                arr_13 [i_0] [i_4] [i_3] [i_3] [i_4] = ((/* implicit */short) (+(max((var_8), (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (unsigned short)59539))))))));
                                arr_14 [i_4 - 1] [i_3] [i_1] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_3] [i_3 - 1] [i_4] [i_3]);
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1522))))) ? (((/* implicit */int) var_0)) : (((2049228943) + (((/* implicit */int) (signed char)41))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_3 - 1] [i_4 - 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_8 [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    arr_16 [14] [i_0] [i_2 + 2] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [18]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) || (((((/* implicit */int) (unsigned short)24219)) >= (((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) + (min((13383888735296180664ULL), (((/* implicit */unsigned long long int) 596068550U))))))));
    var_21 = ((/* implicit */int) min((min((((/* implicit */long long int) ((unsigned int) var_2))), (var_10))), (((/* implicit */long long int) var_13))));
    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((var_9) << (((15144198523590315522ULL) - (15144198523590315521ULL)))))) : (var_6))) % (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)59539)))), (((/* implicit */int) ((signed char) (unsigned short)34970))))))));
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) != ((-(var_3))))))) / (var_6)));
}
