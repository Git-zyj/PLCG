/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201035
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
    var_16 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(var_9))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (~((~((+(var_6)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((+(-9))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_9 [2U] [(short)2] [i_1 - 2] [i_2 + 2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_0])))))))));
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)59400))))));
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -6662131801582199506LL)))))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (+((-((+(((/* implicit */int) var_12))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                            arr_16 [i_1] [(unsigned short)4] [i_2 + 1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6662131801582199535LL)))))));
                        }
                    }
                    var_24 = ((/* implicit */short) (~(-6662131801582199497LL)));
                }
                var_25 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(2976505871U))))))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+((+((-(((/* implicit */int) var_5)))))))))));
            }
        } 
    } 
    var_27 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(var_10))))))));
}
