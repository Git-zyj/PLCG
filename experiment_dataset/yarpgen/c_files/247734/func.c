/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247734
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
    var_19 = ((/* implicit */long long int) (unsigned char)34);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_20 = arr_9 [(unsigned char)14] [i_0] [i_2] [i_2];
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 2] [i_0]) ? ((+(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)213))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [(unsigned char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)9])) << (((/* implicit */int) (signed char)21))))))))));
                            var_22 -= ((/* implicit */long long int) var_14);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) (!(arr_6 [(_Bool)1] [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) arr_0 [i_4]);
                            var_25 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)5))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)228)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)0]))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)9] [i_0] [i_0])), (var_2))))))));
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)62);
            }
        } 
    } 
    var_26 &= ((/* implicit */_Bool) ((long long int) ((var_12) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_7)))));
}
