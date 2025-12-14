/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31530
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5168418443120484144LL)) ? (13300665734970235690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) ((short) max((arr_6 [i_0] [i_1 + 1] [i_0 - 1] [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1]))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (((-(((var_5) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                        }
                    } 
                } 
                arr_12 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_1]))))))))) : (((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_1 - 3] [i_1 + 2] [i_1] [i_1 - 3])))));
                var_12 = ((/* implicit */short) (+(var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2281134598U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)10139)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (min((var_0), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) arr_17 [i_4])))))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_4] [i_4] [i_4]), (arr_16 [i_4] [i_5] [i_5])))) ? (((unsigned int) arr_1 [i_4] [i_5])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [(short)10] [i_5] [i_4])) % (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((var_3) ? (((/* implicit */unsigned long long int) var_6)) : (max((var_2), (((/* implicit */unsigned long long int) var_5))))));
}
