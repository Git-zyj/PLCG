/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39848
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) min((((/* implicit */long long int) (short)21779)), (var_12)))));
                                var_15 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (unsigned char)242))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-8004)) : (((/* implicit */int) (_Bool)1))))))), (var_8)));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)0))))), (547654499231033268ULL)));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [(short)16] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)141))))) >> (((((((/* implicit */int) (signed char)119)) ^ (((/* implicit */int) (_Bool)1)))) - (99))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */long long int) ((short) 7974718699970668886ULL))), (var_8))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_4);
}
