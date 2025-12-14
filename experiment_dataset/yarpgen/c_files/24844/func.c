/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24844
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [11])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((8487736148849828340ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)5] [i_0] [(unsigned short)5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [11U] [i_0 - 1] [i_2])), (8026197425354082797LL)))) ? (max((((/* implicit */long long int) arr_1 [i_1])), (arr_4 [i_0] [i_1 - 1] [i_2 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1])))))));
                    var_15 += ((/* implicit */_Bool) max((max((((/* implicit */long long int) max(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1))))), (max((arr_0 [i_1 - 1]), (((/* implicit */long long int) arr_7 [i_2] [i_0])))))), (((/* implicit */long long int) (unsigned char)255))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            {
                arr_12 [i_4] [i_3] = ((/* implicit */unsigned int) ((((((arr_8 [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))) == (max((arr_8 [i_3 - 1]), (((/* implicit */unsigned long long int) arr_11 [(short)18] [i_4])))))) ? (max((((/* implicit */int) max((arr_10 [i_3] [i_3] [(unsigned char)3]), (((/* implicit */unsigned short) arr_11 [i_3 + 1] [i_3]))))), (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [7ULL] [i_4] [i_4])))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_3 + 1])) == (((/* implicit */int) max((((/* implicit */short) (unsigned char)239)), (arr_11 [i_3 - 1] [i_4])))))))));
                arr_13 [(unsigned char)18] [i_4] [i_3] = ((/* implicit */_Bool) arr_9 [i_3]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((max((var_13), (3265295284U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)32)))))) < (var_0))))));
}
