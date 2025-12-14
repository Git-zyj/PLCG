/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2199
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
    var_15 = ((/* implicit */unsigned int) (((+((-9223372036854775807LL - 1LL)))) < (max((6846631092353114536LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 3472854777938700773ULL)) ? (2996826548U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((6846631092353114536LL), (-6846631092353114537LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) <= (arr_4 [i_1 - 3] [i_1 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_3 - 1] [i_1 + 1]))) | (arr_4 [i_3 + 3] [i_1 - 3])))));
                                var_18 = ((/* implicit */signed char) (-(21ULL)));
                                var_19 = ((/* implicit */signed char) (short)-31045);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((unsigned int) min((((long long int) arr_3 [(_Bool)1] [i_1])), (((/* implicit */long long int) var_12)))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_7))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (~(min((max((((/* implicit */unsigned int) var_3)), (988569865U))), ((~(var_4)))))));
}
