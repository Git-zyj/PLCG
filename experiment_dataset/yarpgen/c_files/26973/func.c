/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26973
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106)))))))))));
    var_12 = ((/* implicit */_Bool) (unsigned short)38984);
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967295U)))))))) : ((~((((_Bool)1) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_8)))))))));
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? ((+(8453362212487119739LL))) : ((+(var_5))))) % (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (min((((/* implicit */long long int) (signed char)63)), (8453362212487119739LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((short) ((unsigned short) ((((/* implicit */_Bool) (signed char)46)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) 8453362212487119729LL)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 9223372036854775797LL)) ? (14160698191194827179ULL) : (18446744073709551601ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21517))) / (18446744073709551585ULL))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_9)))))));
                                var_17 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) min((var_9), (((/* implicit */unsigned long long int) var_6))))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) var_7)))));
                                arr_14 [i_1] [i_0] [i_1] [i_3] [i_4 - 2] &= ((/* implicit */_Bool) ((((long long int) (!(((/* implicit */_Bool) -8453362212487119755LL))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)27)) : (-1887782977)))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) ((4294967291U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
