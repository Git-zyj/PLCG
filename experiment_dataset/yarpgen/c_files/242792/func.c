/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242792
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (var_4)))) + (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] [12ULL] [i_0] = ((/* implicit */int) max((arr_5 [i_0] [7] [i_0] [i_3]), ((~((~(arr_5 [i_0] [i_1] [i_2] [i_0])))))));
                        arr_10 [i_2] [i_2] [i_2] [i_3] &= ((arr_6 [i_0] [i_0]) / (((/* implicit */int) min((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)79)))), (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)-118))))))));
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (signed char)115))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_18 [10ULL] [i_1] [i_1] [(unsigned char)13] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((-2147483647 - 1)), (-2147483643)));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                                arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) ((arr_13 [i_0] [i_2]) <= (12727517584069546249ULL))))))) <= (((((/* implicit */int) arr_16 [i_2 - 1] [i_2 + 2] [i_2 + 3])) - (((/* implicit */int) arr_16 [i_2 - 3] [i_2 + 2] [i_2 + 1]))))));
                                arr_21 [i_0] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(arr_15 [(unsigned char)6] [9LL] [i_1] [i_0] [i_2 + 1] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [12LL] [i_0] &= ((/* implicit */unsigned char) (short)-1);
    }
}
