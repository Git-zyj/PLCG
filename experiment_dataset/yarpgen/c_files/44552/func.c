/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44552
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
    var_12 = ((/* implicit */unsigned int) var_9);
    var_13 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) ((unsigned char) var_7)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (1859683470U)))));
    var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) var_5)), (var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [7U])) || (((/* implicit */_Bool) arr_2 [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]);
                                var_17 = ((/* implicit */unsigned int) (((-(((((/* implicit */int) (short)1)) * (((/* implicit */int) var_5)))))) | (((min((arr_5 [i_0]), (arr_5 [i_1]))) >> ((~(18446744073709551609ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
