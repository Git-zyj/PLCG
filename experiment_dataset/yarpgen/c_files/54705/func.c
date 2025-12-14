/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54705
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
    var_16 = ((/* implicit */unsigned long long int) ((min((((var_6) % (var_12))), (((/* implicit */unsigned long long int) (unsigned char)122)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_17 |= ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 2] [i_0] [6] |= var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [8LL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-18790)))) < (((/* implicit */int) arr_6 [i_0 - 3] [i_3] [i_3 + 1] [i_3 + 1])))))) : ((-(arr_7 [i_1] [i_1])))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)191))));
                                var_18 = ((/* implicit */int) (short)7239);
                            }
                            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 1) 
                            {
                                var_19 += ((/* implicit */short) arr_13 [(_Bool)1] [i_3 + 1] [i_0] [i_0]);
                                var_20 = ((/* implicit */int) ((((arr_8 [i_5 - 2] [i_3 + 1] [i_1] [i_0 + 2]) < (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */unsigned int) (~(var_13)))) : ((-(arr_0 [i_0 - 3])))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_12))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_3 + 1]);
                            }
                            var_23 = var_9;
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1];
            }
        } 
    } 
}
