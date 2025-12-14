/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211607
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (-(32767)));
                arr_4 [i_0] [i_1] = arr_2 [i_1] [i_1] [i_0];
                arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 ^= ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3 + 4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52206)) ? (arr_2 [(short)19] [i_4 + 2] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 2] [i_2])))))) ? ((+(((/* implicit */int) arr_13 [i_2] [i_3] [i_4 - 2])))) : ((-(((/* implicit */int) arr_8 [i_2]))))));
                    arr_15 [i_3] [i_2] = ((/* implicit */unsigned short) (~(max((-3499420558358374911LL), (((/* implicit */long long int) arr_11 [i_4 + 2] [i_3 + 1] [(short)16]))))));
                    var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) -382587614966601295LL)) ? (3822297773028725340LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)13352)) || (((/* implicit */_Bool) (unsigned short)13330))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_5] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (_Bool)1)), (1502303307)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24297))) : (2892935343U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_2] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_3 + 3] [i_2])) || (((/* implicit */_Bool) arr_1 [i_2])))))))) && (((/* implicit */_Bool) var_13))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [17LL] [i_3] [i_3 + 1])))))));
                        var_23 = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            } 
        } 
    } 
}
