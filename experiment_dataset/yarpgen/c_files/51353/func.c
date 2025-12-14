/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51353
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = var_4;
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_9)), (arr_4 [i_0] [i_2 + 1] [i_2 - 2])))) - (((/* implicit */int) (!(((/* implicit */_Bool) 431662041)))))));
                                var_20 = ((short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))))), (9223372036854775805LL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_11))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_15 [i_5] [i_5] [(_Bool)1] [8ULL] = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_3)) ^ (arr_1 [i_2] [i_5])))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)239)), (54863692834559151ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1]) == (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (short)24328))))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)29587), (var_15)))) ? (((((/* implicit */int) ((short) (_Bool)1))) >> (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)6] [i_5])) < (((/* implicit */int) var_12))))))) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_0]))));
                    }
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_11);
}
