/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238462
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3 + 2] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (var_13)));
                            var_14 *= var_13;
                            var_15 ^= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9896092928923651024ULL)) ? (var_1) : (8550651144785900580ULL)))) ? (min((3662495392901996118ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7222436866095748084ULL)) ? (14680064) : (((/* implicit */int) var_10))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2))))) * (min((((/* implicit */unsigned long long int) var_13)), (var_8))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (min((((/* implicit */unsigned long long int) var_9)), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_7)))) ? (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((var_9), (var_10))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_11)))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [(unsigned char)4] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_10))))) : (max((var_6), (((/* implicit */unsigned int) var_13))))))) ? (((((/* implicit */_Bool) (unsigned short)17874)) ? (8550651144785900592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_3))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_8))));
}
