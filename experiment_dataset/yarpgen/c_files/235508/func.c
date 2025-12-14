/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235508
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
    var_11 += min((var_3), (((/* implicit */unsigned long long int) var_2)));
    var_12 |= ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [(signed char)6] [i_1] [17] [i_2] [i_3 + 1] [(signed char)6] = ((/* implicit */long long int) min((((/* implicit */int) min(((unsigned char)255), ((unsigned char)234)))), ((+(((/* implicit */int) (unsigned char)3))))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)39))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_3] [i_4])))))));
                                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_1 [i_4 - 2])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)3))) && (((/* implicit */_Bool) arr_0 [i_1]))));
                arr_16 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned char)5)))));
                arr_17 [i_0 + 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1] [i_1] [i_1])) : (var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53812)) ? (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                var_16 = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)127)))) + (((/* implicit */int) var_7))))));
}
