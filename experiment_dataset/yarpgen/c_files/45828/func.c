/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45828
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = arr_5 [i_0 + 1] [i_0 - 2];
                            var_10 = ((/* implicit */unsigned char) var_4);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)58852)) ? (arr_4 [i_0 - 3] [i_0 - 1]) : (((/* implicit */unsigned long long int) var_7)))) / (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0] [(unsigned char)8] [(unsigned char)8] [i_0 - 3])))));
                                var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
                                var_13 = ((/* implicit */_Bool) 3187047348U);
                                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_2 [i_3] [i_1] [i_0 + 1]) + (arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_2] [i_2]))))) : ((+(var_7))))), (((/* implicit */long long int) var_0))));
                            }
                            arr_15 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_0] = ((/* implicit */_Bool) (-(arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 3])));
                            /* LoopSeq 2 */
                            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) (-((+(2103827792)))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1107919954U)) ? ((~(((/* implicit */int) arr_6 [i_0 - 3] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_18 [i_0 - 1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_1])))))));
                                var_17 = ((/* implicit */unsigned long long int) arr_7 [i_5]);
                            }
                            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((min((var_1), (((/* implicit */long long int) 1235970691)))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_6] [i_0] [i_2] [i_0] [i_0]))))))))));
                                var_19 = ((/* implicit */_Bool) ((2103827797) << (((((((/* implicit */int) var_9)) + (53))) - (29)))));
                                arr_23 [(_Bool)1] [i_0] [(unsigned char)0] [i_0] [i_0] = (-(min((min((((/* implicit */int) arr_8 [i_0] [i_1] [(short)6] [i_0])), (-311404193))), (((/* implicit */int) (!(((/* implicit */_Bool) -311404179))))))));
                                var_20 = ((/* implicit */unsigned long long int) (((+(-4573375718391703022LL))) + (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3]))) / (var_5)))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
