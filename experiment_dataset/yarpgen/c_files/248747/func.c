/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248747
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
    var_11 &= ((/* implicit */long long int) ((int) var_10));
    var_12 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) 134217727)) : (min((((/* implicit */unsigned int) arr_3 [i_0 - 2])), (arr_4 [i_2] [i_1] [i_1] [i_0]))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) (signed char)-96)) : (-134217709))))), (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0 + 2] [(signed char)8])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)10] [i_4] [i_4 - 3] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((2757312929U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))))))))));
                                arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_14 [i_4 - 1] [i_2] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
