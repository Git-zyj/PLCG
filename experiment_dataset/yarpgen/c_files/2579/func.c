/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2579
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
    var_11 = (unsigned char)0;
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */short) 7393879093901348664LL);
                    arr_12 [5] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) ((short) var_9)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] = (-(((/* implicit */int) var_4)));
                                arr_20 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) min((min((((unsigned char) (short)5317)), (((/* implicit */unsigned char) arr_3 [i_0 - 1])))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0 - 2] [i_4 + 1])) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_3])) : (((/* implicit */int) (short)-9020)))) % (var_6)));
                                var_12 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_0)), (var_1))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) max((var_5), ((unsigned char)255)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) (unsigned char)13))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))) : ((-(((/* implicit */int) arr_18 [i_0 - 2]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (var_1)));
    var_15 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) var_4)))));
}
