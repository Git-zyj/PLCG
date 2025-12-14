/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34525
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
    var_19 = ((((/* implicit */_Bool) 1390233180U)) ? (var_5) : (((unsigned long long int) min((0ULL), (((/* implicit */unsigned long long int) 2904734116U))))));
    var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) var_5))), (1ULL))))));
    var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_18)))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned long long int) -1LL))))) && (((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL))))))));
    var_22 = var_10;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1385))) & (((min((1073741816U), (4294967295U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1])))))));
                            var_24 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_7))))));
                            var_25 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) 2559170572U)) + (((var_12) + (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_16))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_14))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_1]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4405)) | (((/* implicit */int) var_18)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((int) (unsigned short)64150)) : (2147483647))))));
                var_27 = ((/* implicit */short) ((1073741816U) >> (((((/* implicit */unsigned long long int) ((1073741816U) - (var_4)))) / (((((/* implicit */unsigned long long int) var_14)) / (1ULL)))))));
                var_28 = ((/* implicit */short) arr_0 [i_0] [(unsigned char)0]);
            }
        } 
    } 
}
