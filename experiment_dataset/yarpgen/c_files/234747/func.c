/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234747
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) max((min((arr_5 [i_1 - 3]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 2] [i_1 - 2])))), (((/* implicit */unsigned long long int) max((min((var_6), (((/* implicit */int) var_4)))), (((/* implicit */int) var_5)))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (+(arr_4 [i_2])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        var_12 = ((int) arr_6 [i_3 - 1] [i_2] [i_1 - 2] [i_0]);
                        var_13 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((arr_7 [5ULL] [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_8))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        arr_15 [1ULL] [i_1] [5ULL] [i_4 - 2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) min((arr_14 [i_4 - 1] [i_4] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_5))))) + (arr_4 [(unsigned char)10])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [2] = ((/* implicit */long long int) arr_3 [i_2] [5ULL] [11LL]);
                            arr_21 [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((int) var_9)));
                        }
                        arr_22 [i_4 + 2] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1138893931))));
                        arr_23 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(var_2)));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_0] [i_0] [i_0] [i_1 - 3] [i_1] [i_0] [i_1 - 3]))), (arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_18 [i_6 - 1] [i_6] [i_2] [i_1 - 3] [9]));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_3))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_8);
    var_19 |= ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((int) var_1)))));
}
