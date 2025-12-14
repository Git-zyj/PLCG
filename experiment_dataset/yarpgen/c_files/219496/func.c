/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219496
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
    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (~(var_1))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))));
                            var_13 = ((/* implicit */int) max((var_13), (min((var_2), (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                var_14 += ((/* implicit */signed char) ((var_10) ^ (var_10)));
                var_15 = arr_3 [i_0];
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -22295238))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_10))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) * (((/* implicit */int) var_4))))))) ? ((+((+(var_2))))) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_1])))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)17] [i_4] [(unsigned char)17] [i_5])) ? (((/* implicit */int) var_0)) : (arr_13 [i_0] [i_5])))) ? (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((arr_3 [18LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_10))))));
}
