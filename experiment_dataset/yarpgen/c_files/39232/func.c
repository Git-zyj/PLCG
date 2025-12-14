/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39232
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((max((((/* implicit */unsigned char) var_6)), (min((((/* implicit */unsigned char) var_3)), (var_1))))), (((/* implicit */unsigned char) max(((signed char)120), (max((var_6), (((/* implicit */signed char) var_10)))))))));
                    var_12 = ((/* implicit */unsigned char) ((signed char) min((min(((short)32756), (((/* implicit */short) var_3)))), (((/* implicit */short) var_1)))));
                    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (min((((/* implicit */unsigned long long int) (signed char)120)), (13094673173537915171ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_2)), (5352070900171636419ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */short) var_3)), ((short)-8))), (((/* implicit */short) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)77)));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (min((((((/* implicit */_Bool) 2633144020775726736ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (min((((/* implicit */int) var_9)), ((-2147483647 - 1)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((var_10) ? (max((((/* implicit */int) ((signed char) 18446744073709551613ULL))), (((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_9)))))));
}
