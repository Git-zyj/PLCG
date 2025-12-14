/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46929
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (0)))) ? (min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [(unsigned short)1] [(unsigned short)1] [i_0] [i_0] [i_0])), (arr_3 [i_3] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) var_13))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned long long int) -1));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_3] [(unsigned short)2] [i_4] = ((/* implicit */int) (~(((unsigned int) arr_6 [12U] [i_1] [i_2] [i_3]))));
                                arr_17 [(short)2] [(short)2] [i_2] [i_2] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) % (18446744073709551606ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1155887464U)))) ? (arr_9 [(signed char)9] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_3] [i_2])) * (((/* implicit */int) (short)0)))))))) : ((~((-(var_13)))))));
                            }
                        } 
                    } 
                } 
                var_15 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0])), (((9682233819884364266ULL) - (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])), (arr_5 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_9);
}
