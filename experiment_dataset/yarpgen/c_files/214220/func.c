/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214220
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
    var_20 = var_19;
    var_21 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((var_18) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13873))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = (-(((int) (_Bool)1)));
                                arr_18 [i_0] [(_Bool)0] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */short) ((((/* implicit */int) (short)-28203)) >= (((/* implicit */int) min((var_1), (arr_14 [i_0] [i_1] [i_0] [8] [i_3] [i_4] [i_1])))))))));
                                arr_19 [(short)5] [(short)5] [i_1] [(short)5] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [3] = ((/* implicit */_Bool) ((int) (_Bool)1));
                    arr_21 [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((16764364416712813515ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((((/* implicit */int) arr_17 [i_1 + 2] [i_1] [i_1] [i_1] [i_1])) - (17096))))))))) : (((/* implicit */short) ((16764364416712813515ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((((((/* implicit */int) arr_17 [i_1 + 2] [i_1] [i_1] [i_1] [i_1])) - (17096))) - (10448)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) >= (min((var_16), (((/* implicit */unsigned long long int) var_4))))));
}
