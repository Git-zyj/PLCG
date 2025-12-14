/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19720
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
    var_17 = ((/* implicit */signed char) ((short) var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) max((((/* implicit */int) (unsigned char)83)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))))));
                                arr_14 [i_0 + 2] [i_1] [i_0] = ((/* implicit */long long int) ((((var_8) ? (((int) var_16)) : (((((/* implicit */int) arr_12 [i_0] [(short)9] [i_2] [i_3] [i_0])) + (((/* implicit */int) (short)(-32767 - 1))))))) ^ ((-(((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] [i_3]))))));
                                var_19 -= ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [(short)3] [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0])) != (18446744073709551598ULL))))) : (arr_7 [i_2])));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_8)), (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (unsigned char)172))))))));
    var_22 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551598ULL)))) && (var_8))))));
}
