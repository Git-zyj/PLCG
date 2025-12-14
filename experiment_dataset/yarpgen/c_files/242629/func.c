/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242629
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */int) max((var_5), (((/* implicit */signed char) var_8))))) <= (((/* implicit */int) max((((/* implicit */short) var_4)), (var_9))))))), (((short) ((unsigned char) var_1))))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((((/* implicit */int) ((_Bool) var_4))) - (var_1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (((int) ((short) arr_2 [(short)3]))) : (min((arr_2 [i_1]), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [(short)10] [i_1])) : (((/* implicit */int) arr_1 [(unsigned char)3] [(short)10]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) max((min((((((/* implicit */int) arr_7 [i_0] [(unsigned char)3] [i_0] [i_3])) - (((/* implicit */int) arr_1 [(signed char)5] [(signed char)5])))), (min((((/* implicit */int) arr_7 [i_0] [(signed char)1] [i_2] [i_3])), (arr_8 [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_3]))))), (((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))));
                            var_13 = ((((((/* implicit */int) arr_0 [i_2 + 4] [i_2 + 2])) % (((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 4])))) + (((/* implicit */int) arr_0 [i_2 + 3] [i_2 + 3])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 7; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_13 [i_6 + 3] [i_1] [10] [i_4 + 1])) + (((/* implicit */int) arr_9 [i_6 + 2] [0] [i_4] [i_4 + 1])))) + (2147483647))) << (((((/* implicit */int) max((arr_9 [i_6 - 1] [i_1] [i_5] [i_4 + 2]), (((/* implicit */short) arr_13 [i_6 + 4] [(unsigned char)5] [i_4] [i_4 + 2]))))) - (251)))));
                                arr_16 [i_0] [(unsigned char)7] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */int) min((max((arr_11 [i_0] [i_1] [i_4 - 1] [i_5 - 2]), (((/* implicit */short) arr_7 [i_0] [i_4] [i_5 - 2] [i_6 + 3])))), (((short) ((arr_8 [i_0] [i_1] [i_4 - 1] [i_5] [i_6] [i_6 + 1]) >= (arr_2 [i_0]))))));
                                var_15 ^= ((/* implicit */signed char) ((int) (_Bool)0));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
