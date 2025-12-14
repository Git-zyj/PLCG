/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52303
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (((5223114932935301270ULL) * (((/* implicit */unsigned long long int) -1690168197))))))) ? (var_0) : ((~(var_13)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */int) var_4);
                                var_17 -= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14750))) >= (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_3] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) : ((-(((var_4) ? (2950615083221080463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned char) ((((((long long int) var_13)) ^ (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)42224)), (var_0)))))) / (min((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4]))))), ((-(arr_8 [18ULL] [3LL] [i_2] [19LL] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)-18))))));
                                arr_18 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-125))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)23306)) ? (((arr_8 [i_0] [(signed char)10] [i_2] [i_1] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42233))))) : (((/* implicit */long long int) 907739162U)))), (((/* implicit */long long int) var_13)))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_2] = ((/* implicit */short) (+(var_9)));
                    var_20 = ((/* implicit */short) (unsigned short)42224);
                }
            } 
        } 
    } 
}
