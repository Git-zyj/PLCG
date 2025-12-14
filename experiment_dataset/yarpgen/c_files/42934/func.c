/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42934
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
    var_11 = ((/* implicit */unsigned short) ((((_Bool) ((3141323453U) * (((/* implicit */unsigned int) var_10))))) ? ((-(max((((/* implicit */unsigned int) var_1)), (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (1153643843U) : (var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3141323453U))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_1))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_7 [i_3 - 1] [7ULL]))) << (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_3 + 3] [1] [i_3 + 3] [i_3 + 3])))));
                                var_14 -= ((unsigned short) ((_Bool) 3141323450U));
                                var_15 = (~(((/* implicit */int) ((unsigned short) arr_8 [i_2] [i_2] [i_2] [i_3] [i_3 + 2] [i_3 + 1]))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_16 -= ((/* implicit */short) (+(((/* implicit */int) arr_16 [i_5] [i_1] [2ULL] [i_2] [i_2]))));
                                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_18 -= ((/* implicit */_Bool) min((((var_9) | (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_3 - 1] [i_6] [i_6])))), (((/* implicit */unsigned int) (~(arr_10 [i_0] [i_0] [i_3 + 2] [i_6] [14LL]))))));
                                arr_19 [(_Bool)1] [i_6] [i_6] [i_6] [6U] = min(((-(max((var_3), (((/* implicit */unsigned int) arr_18 [i_6] [i_3] [i_2] [5U] [i_0])))))), (max((((/* implicit */unsigned int) ((unsigned short) var_3))), (min((var_9), (((/* implicit */unsigned int) (unsigned short)28083)))))));
                            }
                            arr_20 [i_0] [(unsigned short)9] [6ULL] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_9 [i_3] [i_3 + 3] [(unsigned short)6] [i_3 + 1]), (arr_9 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(0U))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) var_8)), (var_5))) / ((-(3141323462U))))) != (((/* implicit */unsigned int) var_10))));
    var_21 &= ((/* implicit */unsigned short) (unsigned char)148);
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_3))));
}
