/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34541
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
    var_15 = ((/* implicit */_Bool) 1846096772);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned int) var_6)), (3432772238U)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_6)))));
                        var_18 = ((((((/* implicit */unsigned long long int) 955670435U)) | (var_12))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 0)) : (var_12))));
                        arr_8 [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    }
                    var_20 = ((/* implicit */long long int) (_Bool)1);
                    var_21 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-30337)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((3339296861U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) var_3);
    }
    var_22 -= var_2;
    var_23 = ((/* implicit */unsigned short) var_13);
}
