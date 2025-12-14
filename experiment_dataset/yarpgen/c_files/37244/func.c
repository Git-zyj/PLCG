/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37244
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1735956526U), (var_1)))) ? (((arr_3 [i_0]) / (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40160)))));
                var_14 &= ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned short)25375), ((unsigned short)40457)))), (arr_0 [i_0] [i_0])))), (max((((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned int) (short)22866))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_23 [i_6] [(short)12] [i_4 - 1] [i_5] [i_4] [i_5] [i_4] |= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11880))) : (arr_13 [i_2] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (arr_2 [i_2] [i_4]) : (((/* implicit */unsigned int) arr_0 [i_5] [i_6])))))))) ? (((/* implicit */int) max(((unsigned short)40140), (((/* implicit */unsigned short) max(((unsigned char)220), (((/* implicit */unsigned char) var_13)))))))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)36)))));
                                var_15 ^= ((/* implicit */unsigned int) min((max((arr_5 [i_2] [i_4 + 1] [i_4]), (arr_5 [i_2] [i_4 - 2] [i_6]))), (max((((/* implicit */unsigned short) (short)-11880)), (arr_5 [i_2] [i_4 - 2] [i_4 + 1])))));
                                var_16 |= ((/* implicit */unsigned long long int) var_4);
                                arr_24 [i_5] [i_5] |= ((/* implicit */unsigned long long int) (_Bool)0);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (unsigned char)35);
                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                arr_25 [i_2] = ((/* implicit */_Bool) ((2559010779U) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_7))) >= (((((/* implicit */_Bool) (unsigned short)40160)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_10 [i_2] [i_3]))))))))));
            }
        } 
    } 
}
