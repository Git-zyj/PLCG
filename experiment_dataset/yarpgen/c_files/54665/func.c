/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54665
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
    var_20 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 2147483647)) : (6967844906729369449ULL))))) << (((var_4) + (3922865622245554356LL)))));
    var_21 = ((/* implicit */unsigned char) (signed char)-57);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) arr_2 [i_0 - 1] [i_1 - 1])) : (5830561675654362190LL))), (((/* implicit */long long int) ((2147483621) / (-2147483647)))))))));
                var_23 &= ((/* implicit */unsigned short) (unsigned char)7);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)208)))) >> (((arr_3 [i_2 + 1] [i_1 + 2]) - (7250628655050852407LL)))));
                        var_25 = ((/* implicit */long long int) (-(var_5)));
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)28558)) + (((/* implicit */int) var_9))))) ? (arr_2 [i_2 + 1] [i_2 + 1]) : (((2147483647) & (((/* implicit */int) var_11))))));
                    }
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_4])) % (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_5]))));
                            arr_20 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                            var_27 &= ((/* implicit */short) var_13);
                        }
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((long long int) ((var_5) >> (((((/* implicit */int) (unsigned short)19446)) - (19418))))));
                            var_28 = ((/* implicit */short) var_0);
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_10)));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(arr_17 [i_2 + 1] [i_4 - 1]))))));
                            arr_27 [i_0] [i_0] [i_7] [i_4] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7)))) <= (((/* implicit */int) (unsigned char)144))));
                            arr_28 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                            arr_29 [i_0] [i_0] [i_2] [i_4] [i_7] = 515081014U;
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            var_30 &= ((/* implicit */signed char) arr_17 [i_1] [i_1]);
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 3] [i_8 + 2] [i_8]))));
                            var_31 = ((/* implicit */unsigned char) (~(1434437564U)));
                        }
                        var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (arr_9 [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_9 [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                    arr_33 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
                arr_34 [i_0] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)62137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (short)7663)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)992))));
            }
        } 
    } 
}
