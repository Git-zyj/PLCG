/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220335
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
    var_15 = ((/* implicit */short) var_13);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (unsigned short)15)), (var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_14))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (var_6)));
        arr_5 [(short)10] = ((/* implicit */unsigned int) var_1);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_9 [(short)1] = ((/* implicit */int) arr_7 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) var_3);
    }
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) max((max((((/* implicit */unsigned int) var_6)), (arr_11 [i_2]))), (((/* implicit */unsigned int) var_14)))));
        var_16 += ((/* implicit */unsigned short) ((max((var_10), (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_8)))))))));
    }
    for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_21 [i_3 - 2] [i_3] [i_3] = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned long long int) (~(arr_17 [i_3 - 1] [(signed char)12]))))));
            arr_22 [(unsigned char)14] [i_4] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((var_7) || (((/* implicit */_Bool) -5557841755115862653LL))))))), (max((((((/* implicit */int) (short)-23324)) * (((/* implicit */int) var_11)))), (((/* implicit */int) var_12))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 4; i_5 < 16; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((max((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_18 [i_3] [i_3]))))), (max((((/* implicit */long long int) (short)-32763)), (5557841755115862653LL))))))));
                        var_18 &= var_4;
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */unsigned long long int) var_5);
        arr_27 [i_3] = ((/* implicit */short) arr_18 [i_3 - 2] [i_3]);
    }
    var_20 = ((/* implicit */long long int) ((var_14) >> (((((/* implicit */int) var_11)) - (56998)))));
}
