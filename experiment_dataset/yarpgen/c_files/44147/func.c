/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44147
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 4]))))))) <= (((((/* implicit */_Bool) (short)-28465)) ? (((/* implicit */int) (short)19860)) : (((/* implicit */int) (short)19860)))))))));
                var_14 |= ((/* implicit */short) ((unsigned char) ((unsigned char) (unsigned char)60)));
                var_15 = ((/* implicit */unsigned char) (-(((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
                var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-19860))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_2 [i_0 - 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)10365)) : (((/* implicit */int) (signed char)22)))), (((/* implicit */int) min((var_0), (var_3))))))), (((var_5) + ((+(var_5)))))));
    var_19 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25175)) ? (((/* implicit */int) (short)27723)) : (((/* implicit */int) (short)19860))))) ? (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)-22))));
                    arr_13 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1])))))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */short) arr_12 [i_2] [i_4]);
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4]))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8453)) * (((/* implicit */int) (short)19860))))) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_4])) : (min((((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_3 [i_3])))), (((/* implicit */int) min(((short)-19868), (((/* implicit */short) arr_4 [i_4] [i_3] [i_2]))))))))))));
                }
            } 
        } 
    } 
}
