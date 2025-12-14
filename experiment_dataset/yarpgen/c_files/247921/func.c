/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247921
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-17478)) ? (762732487) : (((/* implicit */int) (short)-17478))))))) ? (-762732487) : (-762732473));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((arr_0 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (unsigned short)65535)))));
                                arr_14 [i_0] [i_1] [(short)0] &= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (3731879380U)));
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (1695211817)));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [i_5]))) : (var_17))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_12);
}
