/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207038
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -5LL)) ? (-5LL) : (((/* implicit */long long int) 3238065285U))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2] [i_3])) & (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4 + 3]))))) : (-8LL)))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)25801)) ? (arr_6 [i_0] [i_1] [i_3] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [12U] [i_2] [i_3] [i_4]))))))))));
                                arr_14 [i_3] [(_Bool)1] [i_2] [i_1] [i_3] = min((((((/* implicit */_Bool) ((-14LL) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (-8LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_2]))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_2] [12ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))), (((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((/* implicit */int) (short)-25802)) : (((/* implicit */int) (_Bool)0)))))))));
                                arr_15 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)14159)) - (((/* implicit */int) (short)-25814))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47835))) : (((4LL) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */long long int) min((((/* implicit */short) arr_1 [i_4 + 1])), ((short)25801))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) == (((((/* implicit */_Bool) min((((/* implicit */short) var_10)), ((short)-25801)))) ? (min((((/* implicit */int) var_6)), (var_4))) : (((/* implicit */int) min((var_7), (var_8))))))));
}
