/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235289
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
    var_11 = min((((((((/* implicit */int) var_10)) > (2025839834))) ? (((var_6) % (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4624459340908078336ULL) >= (((/* implicit */unsigned long long int) -1363069001)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_2)) : (0LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_2 + 3] [i_4] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2 + 2]))) >= (18446744073709551601ULL)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1] [(short)0] [i_0 - 1])) && (((/* implicit */_Bool) arr_10 [i_2 - 2] [4LL] [8ULL] [i_0 + 1]))))));
                                arr_12 [3] [i_1] [i_2] [i_1] [i_4] [i_2] [i_2] = ((((((/* implicit */_Bool) 1677067579)) ? (18446744073709551601ULL) : (15ULL))) << (((-2) ^ (((/* implicit */int) arr_3 [i_0 - 1])))));
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (min((((/* implicit */long long int) (short)32640)), (var_5))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) ^ (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)11] [i_3] [i_4])) ? (1677067579) : (((/* implicit */int) (signed char)5)))) : (((4177920) | (((/* implicit */int) (short)18487)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] &= ((/* implicit */long long int) ((max((3141414052057056775ULL), (((/* implicit */unsigned long long int) 688009502)))) / (((/* implicit */unsigned long long int) ((arr_4 [i_0] [(unsigned char)0] [i_1] [i_2]) + (((/* implicit */int) (unsigned char)127)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((max((918671250442247507ULL), (((/* implicit */unsigned long long int) -1190893898)))) >> (((((/* implicit */int) (unsigned char)121)) - (109))))) >> (((/* implicit */int) ((((((/* implicit */int) var_7)) << (((((-1894209827) + (1894209845))) - (5))))) <= (((/* implicit */int) ((-2) <= (((/* implicit */int) var_7))))))))));
}
