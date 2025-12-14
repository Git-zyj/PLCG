/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198768
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
    var_12 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) (unsigned char)7);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
                            arr_11 [i_0] [i_2] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((min((((/* implicit */unsigned char) var_8)), (arr_1 [i_2]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))))) % (((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))));
                            var_15 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) -681624694)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                            var_16 = ((/* implicit */unsigned char) arr_6 [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_9)))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 2])) ? (6057286354493418384ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2]))))));
                    var_18 |= ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                }
            }
        } 
    } 
}
