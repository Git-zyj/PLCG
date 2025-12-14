/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227623
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_11 = var_6;
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */signed char) ((arr_11 [i_2] [i_2 + 1] [i_2]) ? (arr_4 [i_1] [i_2 + 1] [i_2]) : (arr_4 [i_0] [i_2 + 1] [i_0])));
                                var_13 = ((/* implicit */unsigned short) (+(arr_9 [i_2 - 2] [(signed char)9] [i_4])));
                                var_14 = ((/* implicit */unsigned int) ((arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]))));
                                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2686918685518774418ULL)) ? (arr_5 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */signed char) ((unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (1397316129))));
                                var_17 -= ((/* implicit */unsigned short) ((arr_11 [i_2 - 1] [i_5] [i_5]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1))));
                            }
                            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                            {
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)244)) + (((/* implicit */int) (unsigned char)246))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)19964))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1] [i_2 - 1]), (((/* implicit */short) (signed char)3)))))) : (((var_0) << (((((/* implicit */int) var_4)) / (((/* implicit */int) var_6))))))));
                            }
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1])) >= (((/* implicit */int) arr_13 [4U] [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                            var_21 -= ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) arr_14 [(short)5] [(short)5] [(short)5] [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_2);
}
