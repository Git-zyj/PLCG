/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209225
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_10))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [8] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((((-(var_10))) ^ (((/* implicit */long long int) ((/* implicit */int) var_17))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-13))))) <= (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (short)13))))))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)14)) ? ((-(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_7)) - (127)))))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)14733)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) var_2)) >= (((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)19] [(unsigned char)18] [i_2])) ? (-6223160964903246021LL) : (arr_7 [7LL])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */short) var_4);
                                arr_16 [i_4] [i_2] [i_3] [i_3] [i_2] [i_2] [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_10 [i_2] [i_2] [i_2] [i_3])))))), (var_10));
                                arr_17 [i_2] [19LL] [i_2] = ((var_10) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6223160964903246035LL)) ? (arr_9 [i_2] [i_4] [i_2] [i_0]) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) == (var_16)))) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
