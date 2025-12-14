/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30682
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
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1908870865U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1908870865U)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 2])), (arr_13 [i_1 + 2] [i_1] [i_2] [i_2 - 1] [i_4])))) ? (((/* implicit */unsigned long long int) max((arr_13 [i_1 + 2] [i_1] [i_1 + 2] [i_2] [i_1 + 2]), (((/* implicit */long long int) (unsigned char)1))))) : (min((((/* implicit */unsigned long long int) (unsigned char)254)), (13445240641443899200ULL)))));
                                arr_15 [i_4] [i_0] [i_3] [i_3] [i_3] [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)248)))))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)250))));
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) - (var_17))))));
                                var_22 = ((/* implicit */short) arr_9 [i_3] [i_1] [(unsigned short)14] [(unsigned short)14]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (short i_6 = 4; i_6 < 9; i_6 += 4) 
        {
            {
                arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) > (var_4)));
                var_23 = ((/* implicit */short) -4917495509218537790LL);
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) (unsigned char)250))), (var_10))))));
            }
        } 
    } 
}
