/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52721
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
    var_11 ^= var_9;
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2 + 1] [i_1] [i_2 - 2]))) : (arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1]))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_2 - 1] [i_2 - 4] [i_2 - 3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 4] [i_2 - 2] [i_2 - 3])))))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_4 [i_3]), (((/* implicit */long long int) (unsigned char)255))))))) & (max((max((((/* implicit */long long int) (_Bool)1)), (140737488322560LL))), (((/* implicit */long long int) var_8))))));
                            var_15 = ((/* implicit */long long int) max((((short) arr_4 [i_2 - 4])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((long long int) arr_4 [i_6 + 1]))))));
                                var_17 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */unsigned long long int) (unsigned short)17760);
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) var_3);
}
