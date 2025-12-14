/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41919
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
    var_20 = ((/* implicit */signed char) 1489387764);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [(signed char)1] [(signed char)1] [i_1] [(signed char)1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1 + 1] [(signed char)11]) : (((/* implicit */int) var_14))))));
                            arr_12 [i_0] [i_2] [4] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((4194303ULL), (((/* implicit */unsigned long long int) (unsigned char)123)))), (((/* implicit */unsigned long long int) (-(arr_7 [(unsigned short)9] [9] [i_2] [i_2] [i_2]))))))) ? (var_13) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 - 1] [8] [i_2 - 1] [i_2])) < (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_1 - 1])))))));
                            arr_13 [(unsigned char)5] [i_1 + 2] [i_2] [i_2] [4U] [i_3 - 3] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)228)), ((short)-4400)));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_1)))))) : (((130048U) >> (((var_5) - (44543078))))))), ((-(min((((/* implicit */unsigned int) arr_10 [i_0])), (arr_7 [i_0] [i_3 + 2] [i_2] [i_3] [i_0])))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) | (((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_3])) ? (130074U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 1] [i_2 + 1])))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */signed char) (-((~(((((/* implicit */int) (signed char)31)) << (((((/* implicit */int) (short)11760)) - (11759)))))))));
            }
        } 
    } 
}
