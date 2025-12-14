/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207155
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
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (((+(arr_1 [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)253)))))));
                                var_17 -= ((/* implicit */long long int) (((((~(var_10))) + (2147483647))) << (((long long int) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) == (((/* implicit */int) (unsigned char)98)))))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) - (9223372036854775807LL))), (arr_5 [i_4] [i_4])))), ((-(max((10593134846937689057ULL), (arr_7 [i_2] [i_3] [i_4])))))));
                                var_18 = ((/* implicit */long long int) var_9);
                                var_19 = ((/* implicit */int) (signed char)11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
