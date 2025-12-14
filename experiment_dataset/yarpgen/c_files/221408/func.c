/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221408
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 -= min((((/* implicit */unsigned int) (unsigned short)26217)), (234881024U));
                                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_10 [i_1] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2]))))) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_3] [i_3])) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((arr_10 [i_1] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_15 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                var_16 |= ((unsigned long long int) ((short) arr_15 [i_6] [(short)10] [8]));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) (_Bool)1);
                            var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_6] [i_8 - 1]))) == (((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_7] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))))))) == (max((((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6] [i_5])) ? (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4227858432U)), (arr_16 [i_5] [i_5] [i_7]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
