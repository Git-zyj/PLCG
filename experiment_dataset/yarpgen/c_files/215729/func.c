/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215729
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)16)))))));
                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)16)))), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [(unsigned char)10] [(unsigned char)10])) > (6941622665485817684ULL))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 4] [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1 - 4] [i_1] [i_1 + 3])) : (((/* implicit */int) (signed char)0))))), (arr_5 [i_0])));
                var_18 = ((/* implicit */int) 7663986703899515475ULL);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -25LL))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)20)), ((unsigned short)0))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6] [i_3] [i_5 - 1] [(unsigned short)4] [i_6] = ((/* implicit */int) (unsigned short)42447);
                                arr_23 [(signed char)17] [(unsigned char)5] [i_4] [i_4] [i_4] = ((/* implicit */int) (-((+(arr_20 [i_5 + 1] [i_4])))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned short) ((int) -25LL));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)124))))) : (0LL)));
                }
            } 
        } 
        var_22 = ((((/* implicit */_Bool) (unsigned short)12130)) ? (min((((/* implicit */int) ((unsigned short) var_3))), (var_13))) : (((/* implicit */int) var_9)));
        arr_24 [(signed char)3] = ((/* implicit */int) ((var_0) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2])) & (((/* implicit */int) arr_11 [i_2])))))));
    }
}
