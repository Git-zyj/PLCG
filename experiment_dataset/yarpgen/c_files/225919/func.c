/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225919
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */short) ((((long long int) -16LL)) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12), (((/* implicit */unsigned short) (signed char)25))))))));
                            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (12306441674053475930ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_0])), ((short)31170))))))) : (((((/* implicit */unsigned long long int) 320967304)) / (max((((/* implicit */unsigned long long int) var_2)), (var_7)))))));
                            var_12 = ((/* implicit */int) min((((4294967281U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -320967293)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)13108))))))), (((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 2] [i_2] [i_3]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) (-((+(7253936109241960182LL)))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4 - 2] [i_5] [i_0] [i_4] = ((/* implicit */unsigned int) ((5937259638437853457ULL) < (18446744073709551600ULL)));
                            var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(320967280)))))))));
                            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((1899695287U) * (arr_9 [i_5])))) ? (arr_10 [i_1] [(unsigned short)10] [4ULL] [i_5]) : (((/* implicit */long long int) ((arr_12 [i_0] [i_1] [i_0] [i_0]) / (((/* implicit */int) (short)-8651)))))))));
                            arr_18 [i_0] [10] [i_4 - 3] [10] [10] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)8)), (35ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(var_7)));
}
