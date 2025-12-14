/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211185
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
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (var_10) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1470679910)) : (var_11))))))) * (((((/* implicit */_Bool) ((992806137812892793LL) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (max((var_3), (-1470679917))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((535822336U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))) ? (max((var_5), (((/* implicit */unsigned int) arr_3 [(unsigned short)15] [i_1] [(unsigned short)15])))) : (((arr_5 [i_2]) & (var_0))))), (((((/* implicit */_Bool) ((var_4) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (max((arr_0 [i_1] [16LL]), (var_12))) : (((/* implicit */unsigned int) ((1730814438) << (((((-5352279451852153722LL) + (5352279451852153732LL))) - (10LL))))))))));
                    var_15 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */signed char) var_13)), (var_7)))) ? (max((var_0), (((/* implicit */unsigned int) var_9)))) : (((arr_5 [i_0]) << (((var_12) - (1026216594U))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-1470679917)))))))));
                    arr_9 [i_2] [i_1] [i_2] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (-1470679911)))) ? (max((var_2), (-1470679917))) : (((/* implicit */int) ((((/* implicit */unsigned int) -1470679912)) > (arr_5 [i_1]))))))) - (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (530286742U))) >> (((((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1)))) + (25183))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((1470679906) == (((/* implicit */int) var_7))))), (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 1470679906)))))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_6), (((/* implicit */short) var_4))))), (((((-1470679910) + (2147483647))) << (((((/* implicit */int) var_1)) - (13))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_0), (var_12)))) && (((/* implicit */_Bool) ((702566566U) - (((/* implicit */unsigned int) var_3))))))) ? (((max((-7506489644455275321LL), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 1470679912)) ? (702566566U) : (((/* implicit */unsigned int) 1470679910))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((12LL) >= (((/* implicit */long long int) 1470679911)))) && (((/* implicit */_Bool) -14LL))))))));
}
