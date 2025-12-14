/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249760
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
    var_13 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned char) max((max((((arr_6 [i_0] [i_1] [i_2]) ^ (arr_6 [i_0] [i_0] [i_0]))), ((~(arr_6 [i_0] [i_1] [i_2]))))), (((/* implicit */int) (short)10))));
                    var_15 |= (-(((/* implicit */int) ((arr_0 [i_1] [i_2]) != (var_10)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_4])) ? (arr_6 [i_4] [7U] [i_2]) : (((/* implicit */int) (short)-9))))) ? (((1020061261U) << (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)6])))) ? (((/* implicit */int) (short)10)) : (max((var_8), (((/* implicit */int) var_1)))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_4])) ? (arr_6 [i_4] [7U] [i_2]) : (((/* implicit */int) (short)-9))))) ? (((1020061261U) << (((((/* implicit */int) arr_1 [i_0])) - (102))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)6])))) ? (((/* implicit */int) (short)10)) : (max((var_8), (((/* implicit */int) var_1))))))))));
                                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (547070382) : (((/* implicit */int) var_4)))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) var_10)) : (3274906038U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((unsigned char) max((var_1), (var_1))));
}
