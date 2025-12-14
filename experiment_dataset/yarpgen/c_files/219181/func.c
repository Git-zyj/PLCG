/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219181
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (+(arr_0 [i_1])));
                arr_4 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_1]) & (((/* implicit */long long int) ((unsigned int) (short)-19768)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_0] [i_1] [i_2 + 1] [i_3 - 2] [9LL])))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((arr_8 [16LL] [16LL] [i_4 - 1] [i_2 - 2] [i_3 - 2]), (max((arr_6 [(unsigned short)4] [(unsigned short)4] [i_4 - 1]), (arr_6 [i_0] [i_3] [i_4 + 2]))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((/* implicit */unsigned short) min(((short)9753), ((short)16384)))), (max((((/* implicit */unsigned short) (short)9753)), ((unsigned short)1134))))))));
            }
        } 
    } 
    var_15 = var_7;
}
