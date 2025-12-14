/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246566
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65516))))) | ((-(4294967295U)))))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_6)))) : (var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_2] = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (165447732)))) ? (((/* implicit */unsigned int) 1513110505)) : (arr_7 [i_0 - 2])))) ? (1513110505) : ((-((-(((/* implicit */int) (unsigned short)65499)))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned char)5] [i_2] [i_1] [i_0])) ? (1968633830) : (var_10)))) ? (min((-1047587458), (((/* implicit */int) arr_13 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [4])))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))) : (var_12)));
                }
            } 
        } 
    } 
}
