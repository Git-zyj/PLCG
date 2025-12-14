/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230284
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
    var_17 -= ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (signed char)114)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = (~(((((arr_0 [i_1 + 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33916))) : (var_14))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((3LL) < (-10LL))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) arr_12 [i_2] [i_4]);
                                var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_12)))), (((((/* implicit */_Bool) arr_9 [i_1] [i_3])) && (((/* implicit */_Bool) (unsigned char)0)))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) * (((unsigned int) var_5)))));
                                arr_17 [i_1] [i_1] [5U] = ((/* implicit */unsigned short) ((((var_1) ? (arr_9 [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2] [i_1 + 3] [i_3 - 1]))))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)50927), ((unsigned short)0)))))));
                                var_20 += ((/* implicit */unsigned int) ((max((arr_9 [i_4] [i_0]), (((/* implicit */long long int) arr_1 [i_0 - 4])))) << (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_16 [i_0] [0] [i_0 - 3] [(unsigned short)0] [i_1 + 4] [i_3 + 2])))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_13 [i_4]))), ((~(((/* implicit */int) (short)-8538)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
