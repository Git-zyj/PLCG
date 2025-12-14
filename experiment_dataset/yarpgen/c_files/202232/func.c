/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202232
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_8)))), (((unsigned short) ((int) (unsigned short)40230)))));
    var_15 = ((/* implicit */unsigned short) max((min((min((((/* implicit */long long int) (unsigned short)15097)), (-6329044768074028089LL))), (((/* implicit */long long int) var_1)))), (min((min((((/* implicit */long long int) var_1)), (-6329044768074028087LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25305)) * (((/* implicit */int) var_10)))))))));
    var_16 ^= ((/* implicit */unsigned short) (signed char)31);
    var_17 = max((((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_8)))) || ((!(((/* implicit */_Bool) var_11))))))), (var_10));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 -= ((5302638935811919797LL) / (((/* implicit */long long int) 1291276495)));
                            var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 1367245920932181749LL)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0] [i_3])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) -6329044768074028113LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_0])))))), (((/* implicit */int) ((unsigned short) var_13)))));
                            var_20 |= ((/* implicit */signed char) (~(-5302638935811919808LL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (max((((((/* implicit */_Bool) -6329044768074028113LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) -6329044768074028095LL)) || (((/* implicit */_Bool) arr_11 [i_4]))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0] [i_0])))), (min((((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_2 [i_4] [i_0]))))), (min((((/* implicit */int) var_3)), (var_4)))))))));
                    var_22 = ((/* implicit */signed char) ((-1291276482) <= (((/* implicit */int) ((unsigned short) ((arr_9 [i_4] [i_4] [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                }
                arr_12 [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1 + 1])))), (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (1291276495) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
            }
        } 
    } 
}
