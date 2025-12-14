/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233984
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)-14588)))))) / (var_1)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) min(((short)16352), (((/* implicit */short) arr_1 [i_1] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (337704079U))))))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)0)) | (-472224209))) <= (max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) var_9)) ? (-472224227) : (((/* implicit */int) (short)-14588)))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3 + 1] [i_3 - 1] [(unsigned char)1] [i_3] [i_3] = ((/* implicit */unsigned int) -472224209);
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_1 [i_0] [(signed char)1]))))) <= (min((8707399107785979083LL), (((/* implicit */long long int) var_5)))))) ? (((((/* implicit */_Bool) -472224209)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)7))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14572))) : (arr_6 [i_0] [(unsigned char)9] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 1])) / (((/* implicit */int) (short)-14573)))))));
                            arr_10 [i_2] [i_1] [4U] = ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 2228841420U)) : (5522514692728030509ULL)));
                        }
                    } 
                } 
                arr_11 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (1152921487426977792LL))))), ((((-(18446744073709551610ULL))) & (((/* implicit */unsigned long long int) min((var_3), (var_10))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29599)) ? (max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) var_5)) : (-1888035600))))) : (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    arr_18 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_16 [i_5] [i_4]) : (((/* implicit */unsigned int) var_1)))))), ((+(((unsigned long long int) -7306810213464764752LL))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_4] [i_5])), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14572)))))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))))));
                }
            } 
        } 
    } 
}
