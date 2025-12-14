/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19791
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
    var_14 += ((/* implicit */short) (+((-((-(var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) arr_8 [(signed char)3] [i_1] [(signed char)3] [(signed char)3] [i_3] [17LL]))))))));
                                var_15 = ((/* implicit */_Bool) (-((+((-(var_0)))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-((-((-(arr_0 [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] [i_2] [i_0 + 1] &= ((/* implicit */unsigned int) (~((+((+(arr_6 [i_0 + 1] [i_1] [i_2] [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))))))));
                        var_18 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_5])))))))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 4; i_7 < 20; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))))))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)90)))))))));
                            arr_24 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))))));
                        }
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_13)))))))));
                    }
                }
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1])))))))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))))))));
                                arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                var_23 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127)))))))));
                                var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(0ULL)))))))));
                                arr_35 [i_0 - 1] [i_0] [i_8] [i_9] [i_10 - 1] = ((/* implicit */signed char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68)))))))));
                            }
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+((+((-(-8928867799228852523LL))))))))));
                        }
                    } 
                } 
                arr_36 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))));
            }
        } 
    } 
}
