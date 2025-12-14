/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213264
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
    var_14 &= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0])))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [(short)17]))))) : (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0])))));
                var_16 = max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) -948987399)) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (1346041836))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_2] [0LL] [i_4] [i_2])), (max((min((var_12), (((/* implicit */unsigned int) -1639808231)))), (((/* implicit */unsigned int) -561318544))))));
                                arr_19 [i_2] [i_2] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_14 [i_2] [(short)13] [i_4]) - (13947366447389501281ULL)))));
                                var_18 = ((/* implicit */unsigned long long int) ((_Bool) arr_16 [(_Bool)1] [i_5] [i_3] [19LL]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_2);
                                var_20 = ((/* implicit */short) 3126213629U);
                                arr_26 [i_2] [i_9] [i_7] [i_9] [i_7] = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_1);
}
