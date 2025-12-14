/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40599
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 += var_11;
                                var_14 *= ((/* implicit */unsigned int) max(((-(max((149339885), (((/* implicit */int) (signed char)-37)))))), (((/* implicit */int) ((signed char) ((arr_5 [i_0] [i_0] [i_4]) - (((/* implicit */int) arr_4 [i_4]))))))));
                                arr_15 [i_0] [i_0 - 1] [8ULL] [i_0] |= ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27994))) : (1321827423474554610ULL))))) * (((/* implicit */unsigned long long int) var_3)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    arr_18 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_1])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_1] [5]))))) : (((/* implicit */int) arr_4 [i_0 - 1])))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((var_9) % (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_1]))))))))))));
                    arr_19 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) -4542504799142354256LL)))));
                    arr_20 [i_1] [i_1] [(signed char)7] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((unsigned int) arr_17 [i_0 + 2] [i_0 + 2] [i_1]))))), ((-(var_6)))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)49832))));
}
