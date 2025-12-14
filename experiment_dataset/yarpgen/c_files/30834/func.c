/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30834
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (unsigned char)255);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [1LL] [11ULL] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [2LL] [i_2]))))) : (((int) (signed char)-83)))))));
                    arr_8 [i_1] = ((/* implicit */long long int) 0U);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */signed char) (+(16055407890281389115ULL)));
                                var_15 |= ((/* implicit */unsigned int) ((arr_12 [17U] [i_1 + 1] [i_1 + 2] [8ULL] [i_1 + 2] [i_1 - 1]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (6383540819165028978LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((int) arr_6 [i_0] [i_1] [i_3] [i_3]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)6);
                                var_16 = ((/* implicit */unsigned long long int) (signed char)6);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) / (((/* implicit */int) (signed char)38))));
}
