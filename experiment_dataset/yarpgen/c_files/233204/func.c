/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233204
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
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((911018889U), (((/* implicit */unsigned int) (short)-23596)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max((((unsigned int) arr_5 [i_0 - 1])), (((/* implicit */unsigned int) ((((unsigned int) var_0)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_4)))))))))));
                var_13 = ((/* implicit */int) min((var_13), ((~(((/* implicit */int) (short)-23596))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7)))))));
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) (short)-23596);
                            arr_18 [2] [i_3] [2] [i_3] [22LL] [i_4 - 1] |= ((/* implicit */unsigned short) (-(arr_14 [i_2 + 2] [i_3 - 1] [i_4 - 4] [(short)20])));
                            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned short)724)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10)))) ? (((long long int) 2151481944U)) : (((/* implicit */long long int) ((int) (short)7)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_12 [i_2]))) : (((/* implicit */unsigned long long int) 1337201842))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) >= (((/* implicit */int) var_2))))), ((unsigned short)724)));
}
