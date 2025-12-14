/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34891
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(-920451256)))))) ? (((((/* implicit */_Bool) -2147483638)) ? (((var_10) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))))) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (unsigned char)128))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = arr_12 [i_1] [i_1] [i_2 - 1] [i_3 + 2] [i_3 - 2] [i_3];
                                arr_15 [i_3] [i_3] [i_2 + 2] [i_1] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))))));
                            }
                        } 
                    } 
                    var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)116)) * (((/* implicit */int) (_Bool)1))))) ? (min((arr_7 [i_0] [i_1] [i_2 + 1]), (((/* implicit */long long int) (unsigned char)234)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) 18U)) : (arr_12 [(unsigned char)3] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    var_21 = ((/* implicit */unsigned int) (((~(arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 1]))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 3]) < (((/* implicit */long long int) var_8))))))));
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (+(4294967293U)));
                }
            } 
        } 
    } 
}
