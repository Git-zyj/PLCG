/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230592
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
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) var_5);
                                arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) * (((/* implicit */int) arr_4 [i_3 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 + 1])) < (((/* implicit */int) arr_4 [i_3 - 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_19 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [(signed char)6] [i_7] [i_7] = ((/* implicit */unsigned char) ((268304384U) << (((2147483647) - (2147483616)))));
                                arr_20 [i_7] [(unsigned char)9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])))))) % (((((/* implicit */_Bool) arr_15 [i_7] [i_1] [i_5] [i_6])) ? (arr_15 [i_7] [i_6] [i_5] [i_0]) : (arr_15 [13LL] [i_1] [i_5] [i_6])))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) & (min((arr_16 [i_0] [i_1]), (((/* implicit */long long int) (unsigned char)144))))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_6)) + (arr_1 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) (_Bool)1)))))))))));
            }
        } 
    } 
}
