/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39778
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 ^= (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_6 [i_0] [i_0] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64774))))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [8U] [10] [i_1 + 1])) ? (arr_10 [i_0] [i_1] [i_2] [i_1 + 1] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 + 1])))));
                                arr_13 [i_0] [i_1] [i_0] [(unsigned short)1] [(unsigned char)0] [(unsigned char)0] [i_0] = ((/* implicit */long long int) ((int) ((arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]) & (((/* implicit */unsigned long long int) 33554431)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_19 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30231)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((var_6) % (arr_0 [i_5]))) : (((/* implicit */int) ((((/* implicit */unsigned int) 1456987877)) > (var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) (_Bool)1)), (arr_3 [4LL] [4LL]))) : ((-(((/* implicit */int) (short)-5003))))))) : (max((var_0), (((/* implicit */long long int) 33554431)))));
                                var_15 = ((/* implicit */unsigned int) arr_8 [i_1 + 1] [(signed char)2] [i_1 + 1] [i_6 + 1]);
                                arr_20 [i_0] [i_6] [i_2] [i_0] [i_6] [i_6] [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_5])))))), (((/* implicit */int) (unsigned short)770))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((min((var_7), (4269401413U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) << (((min((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51215))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned short)27332))))))) - (197U)))));
}
