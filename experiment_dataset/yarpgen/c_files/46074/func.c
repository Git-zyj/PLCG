/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46074
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) var_15)))));
                                var_19 = (signed char)-28;
                                var_20 += ((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [(unsigned short)10] [i_3] [(unsigned short)10]);
                                arr_14 [i_1] [i_1] [i_2] [(short)3] [i_4] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)71)) == (((/* implicit */int) (short)-19964)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_0 [i_1] [i_2])))), ((~(((/* implicit */int) min((var_17), (((/* implicit */unsigned short) (short)27777)))))))));
                    var_22 = ((/* implicit */signed char) arr_8 [i_1] [(short)11] [i_1]);
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_0] [i_0] [i_1])))) - (((/* implicit */int) min((min(((signed char)-1), ((signed char)-28))), (max((var_13), (arr_12 [i_1] [i_1] [i_2]))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)-19964)) <= (((/* implicit */int) (signed char)-1))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_7))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (signed char)-114)) / (((/* implicit */int) (short)-16635)))))), ((((-(((/* implicit */int) (signed char)11)))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-1))))))));
    var_26 = ((/* implicit */unsigned short) var_15);
    var_27 = ((/* implicit */signed char) (short)30320);
}
