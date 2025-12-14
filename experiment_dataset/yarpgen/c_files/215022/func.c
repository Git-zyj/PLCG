/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215022
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        arr_9 [i_3 - 1] [i_2 + 1] [i_2] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) max((var_16), (arr_2 [i_0 + 1] [i_0])))) % (((/* implicit */int) var_12))));
                        var_18 = ((/* implicit */_Bool) 18446744073709551595ULL);
                    }
                    for (int i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) (-2147483647 - 1)))))) ? (var_14) : (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_2 [i_0] [i_0])))))) + (((/* implicit */int) arr_7 [i_0 - 1] [i_2]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_2 - 2] [i_2] [i_5] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 + 3] [i_1 - 2])), (var_3))) << (((/* implicit */int) (signed char)11))));
                        var_21 = ((/* implicit */int) 6069252928110337181ULL);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_3))));
                    }
                    for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        arr_20 [i_0 + 1] [i_0] [i_2 + 1] [i_6 - 3] &= ((/* implicit */unsigned char) ((2147483647) == (((var_14) & (((/* implicit */int) (unsigned char)1))))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483639)) * (3482492654U)))) == (((long long int) arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                }
            } 
        } 
    } 
    var_25 = min((-2743074427226169945LL), (((/* implicit */long long int) (signed char)-67)));
}
