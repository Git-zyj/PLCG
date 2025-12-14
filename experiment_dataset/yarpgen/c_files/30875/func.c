/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30875
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
    var_11 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (unsigned char)182)), (2419968926U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 3]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [(short)13] [i_2] = ((/* implicit */short) ((arr_1 [i_0]) & (((/* implicit */unsigned int) ((((arr_11 [i_0] [i_2] [(_Bool)1] [i_1] [i_4]) >= (((/* implicit */unsigned long long int) arr_4 [i_4] [i_2] [(signed char)6])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_4 [(unsigned short)14] [i_2] [i_4])) ? (((/* implicit */int) (signed char)-107)) : (1351610288))))))));
                                var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (7570761210039367200ULL) : (((/* implicit */unsigned long long int) 2419968926U))))) || (((/* implicit */_Bool) (unsigned char)74))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3719540059U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (2419968932U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) < (((/* implicit */int) arr_0 [i_0]))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_9 [16ULL] [4ULL] [i_0] [i_1] [4U])))))), (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 3])))))));
                }
                arr_14 [2LL] = ((/* implicit */unsigned long long int) (unsigned char)0);
            }
        } 
    } 
}
