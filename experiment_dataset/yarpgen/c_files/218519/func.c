/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218519
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
    var_14 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (4935585742907731084LL) : (8670176800455811902LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_1))))));
    var_15 -= ((/* implicit */short) var_10);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -8670176800455811899LL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (10991615818430418706ULL))), (((/* implicit */unsigned long long int) ((-904475997) & (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */long long int) ((unsigned int) (short)-128))) & (min((((/* implicit */long long int) (_Bool)1)), (var_1)))));
                                var_18 = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((+(((long long int) (-9223372036854775807LL - 1LL))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (short)-15517)) : (((/* implicit */int) (short)-11742))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30960)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37893)))))) : (-28LL))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 3])) ? (((((/* implicit */_Bool) var_3)) ? (arr_9 [i_1] [i_1 + 4] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32764))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22))) <= (23582832883164725LL)))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 + 4] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_1 + 2] [i_1 + 2])) >= (((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
