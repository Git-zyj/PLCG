/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236475
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((((/* implicit */unsigned long long int) var_2)) % (min((16ULL), (3ULL)))))));
    var_16 = ((/* implicit */signed char) ((long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) != (33ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? (((/* implicit */int) ((short) (signed char)-5))) : (((/* implicit */int) ((short) 18446744073709551585ULL)))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)24576)))) % (((arr_0 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (18446744073709551601ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */long long int) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [(short)6])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) 18446744073709551576ULL);
                                arr_17 [i_0 - 1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_1] [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_3 + 1] [6LL] [0LL])) : (18446744073709551600ULL))) * (((/* implicit */unsigned long long int) ((arr_11 [i_2] [i_3 - 1] [i_4] [i_2]) / (arr_11 [i_0 - 1] [i_3 - 1] [i_3] [i_3]))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */short) (unsigned char)0)), (arr_2 [i_3]))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) arr_5 [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-1)))) : (((unsigned int) var_12))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]))) : (((3ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152)))))));
                }
            } 
        } 
    } 
    var_21 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) != (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0ULL)))) : (((((/* implicit */unsigned long long int) var_7)) + (8921359423002508588ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24589))));
}
