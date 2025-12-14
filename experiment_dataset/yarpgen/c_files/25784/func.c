/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25784
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
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = var_2;
    var_16 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)199))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [14LL])) && (((/* implicit */_Bool) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_4 [14LL])))) ? (((/* implicit */int) arr_0 [6LL])) : (((/* implicit */int) min(((unsigned char)14), (var_1))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((/* implicit */long long int) var_1);
                        var_18 *= ((/* implicit */long long int) ((((min((-9063889983951400355LL), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) < (((/* implicit */int) arr_5 [i_0] [(_Bool)0] [i_2])))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(signed char)10] [(unsigned char)14] [i_1] [(signed char)10] [i_2] [i_3])) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_3)))))));
                        var_19 = ((/* implicit */long long int) max((((_Bool) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_1])) != (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_0] [i_0] [10LL]))))));
                    }
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */signed char) var_0);
                    arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) min((arr_11 [i_4 - 1] [i_4] [i_4 - 1]), (((/* implicit */short) var_2)))))));
                }
                var_21 = max((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) max((var_4), (arr_0 [i_0]))))))), (var_1));
                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
