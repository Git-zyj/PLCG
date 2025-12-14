/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219710
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
    var_17 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */signed char) 2147483634);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */long long int) 4142752712U);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max(((unsigned char)196), (((/* implicit */unsigned char) (signed char)-48)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (short)-9548)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48))))))))));
                    var_21 = ((/* implicit */long long int) ((signed char) max(((unsigned short)12909), (((/* implicit */unsigned short) arr_2 [i_1 - 1] [i_1])))));
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((short)31792), (((/* implicit */short) (signed char)47))))), (max((993760873U), (((/* implicit */unsigned int) (short)-11983))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned short)21412))))) ? (var_12) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_1] [i_1])), (arr_4 [10ULL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11983)) + (((/* implicit */int) (short)24542)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) 4142752723U);
                                var_24 &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)38840))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [7LL] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_15)) > (7019424526206580195ULL)));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21421)) * (((/* implicit */int) var_6))))), (max((((/* implicit */unsigned long long int) var_9)), (var_2)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 4) 
                    {
                        var_26 = var_2;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (short)16178))))))));
                            arr_28 [(unsigned char)10] [i_1] [i_1] [4U] [i_8] = ((/* implicit */unsigned char) arr_2 [i_7 + 4] [i_7 + 4]);
                            arr_29 [i_1] [i_1] [i_1] [i_6] [i_7] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7 + 3])) - (((/* implicit */int) ((unsigned short) var_15)))));
                        }
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3843316689U))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_23 [i_1 - 1] [i_1 + 1] [6LL] [i_1 - 1]) + (arr_23 [i_0] [i_1 + 2] [i_1] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) / (arr_23 [i_1] [i_1 + 2] [i_7 - 2] [i_7 - 1]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) / (142249991U))))));
                    }
                }
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1 + 1])) ^ (((((/* implicit */_Bool) 3301206421U)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_13)))))))));
            }
        } 
    } 
}
