/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47580
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
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (13353223006360634997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max(((unsigned short)0), (((/* implicit */unsigned short) var_2))))), (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3 - 2])), (arr_11 [i_0 - 1] [i_1] [i_2] [i_3 - 2] [i_4]))))) | (13353223006360634997ULL)));
                                arr_13 [8] [8] [8] [i_1] = ((/* implicit */_Bool) (unsigned short)16384);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)0])))))) ? (arr_1 [i_0]) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (5093521067348916647ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(var_1)))), ((-(var_9)))));
}
