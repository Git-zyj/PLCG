/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218960
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
    var_10 = ((/* implicit */unsigned int) 144115050636902400LL);
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) -899238691);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_4 [i_0]), (((/* implicit */int) (unsigned short)0))))), (max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) ((unsigned short) arr_3 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_20 [i_4] [i_1] [i_2] [i_1] [18] &= ((/* implicit */short) 1238745042);
                                var_13 = ((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2]);
                                arr_21 [i_0] [i_1] [(short)18] [i_3] [i_2] [(short)18] [i_3 + 3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) -1238745043)) + (arr_10 [i_3] [i_3] [i_3 + 1] [i_3 + 2]))) % (((/* implicit */long long int) (~(1336004645))))));
                                var_14 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_2)))), ((~(1254276897)))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) 1336004645)) : (arr_19 [i_0] [i_2] [i_2] [i_1] [i_1] [i_0] [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_0);
}
