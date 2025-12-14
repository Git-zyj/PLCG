/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219117
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
    var_16 &= ((/* implicit */unsigned short) var_1);
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57389)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))), (min((70368744177663LL), (((/* implicit */long long int) (_Bool)0))))))) && (((/* implicit */_Bool) ((long long int) var_6)))));
    var_18 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (-(var_2)))) && (((/* implicit */_Bool) 4294967295U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_0]), (var_9)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_5))))))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 70368744177663LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))) : (((arr_2 [6U] [i_1 - 1]) ? (((/* implicit */int) arr_4 [9U] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
                            {
                                arr_13 [i_1] [i_3 - 1] [(unsigned short)11] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                                arr_14 [16] [16] [i_4] [i_2 - 1] [i_4] [i_0] [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) arr_9 [i_3] [i_0] [(unsigned short)8] [i_0]))));
                                arr_15 [i_1] [i_2] [i_2] [10ULL] [i_4] = ((/* implicit */short) -70368744177664LL);
                            }
                            for (signed char i_5 = 2; i_5 < 15; i_5 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned int) arr_3 [i_1]);
                                var_22 += ((unsigned long long int) (~(var_14)));
                            }
                            for (signed char i_6 = 2; i_6 < 15; i_6 += 4) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) (short)5714)) : (((/* implicit */int) var_15))))))));
                                arr_21 [i_1] [i_1 + 1] [(unsigned short)0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) && (((/* implicit */_Bool) ((unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((var_9), (((/* implicit */short) var_6))))))))));
                            }
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_1))));
                            var_25 = ((/* implicit */_Bool) (~((~(arr_10 [i_3 - 2] [i_3 + 1] [i_1] [i_3 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((_Bool) (-((+(((/* implicit */int) var_0)))))));
}
