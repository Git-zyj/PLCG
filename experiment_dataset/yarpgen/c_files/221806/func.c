/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221806
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
    var_18 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 2147483647))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_10))))) : ((~(var_16)))))) & (((((/* implicit */_Bool) 2147483627)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(var_13)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) & (((/* implicit */int) ((15113641478856930879ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 3]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((min((((22ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))))), ((-(22ULL))))), (((/* implicit */unsigned long long int) max((arr_9 [i_4] [i_3] [i_2] [i_1 - 2]), (((/* implicit */int) ((short) -719432273))))))));
                                var_21 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) / (-1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_12))))))) ? ((+(((var_17) + (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 18446744073709551593ULL)) ? (-3769769423914248495LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : ((+(var_8))))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (var_17)))) ? (var_17) : ((-(min((((/* implicit */unsigned long long int) (short)-32465)), (18446744073709551615ULL)))))));
}
