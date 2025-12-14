/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20029
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-1)), (arr_1 [i_0 - 1] [i_0 - 1])))) && ((!(((((/* implicit */_Bool) (unsigned short)20154)) || ((_Bool)1)))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (signed char)-28);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_14))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_4] [i_4 - 2] [i_0 - 1])) & (max((arr_13 [i_3]), (((/* implicit */int) (short)-497)))))) < (((/* implicit */int) ((((/* implicit */_Bool) (short)-500)) || ((!(((/* implicit */_Bool) arr_4 [3] [1] [i_2] [3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_6)));
}
