/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243726
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)28672)) || (((/* implicit */_Bool) (signed char)121)))))))))));
    var_16 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_14)) : (var_3))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_1)), (var_2))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */signed char) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) var_14);
                            arr_9 [i_0] [i_0] = ((/* implicit */int) var_6);
                            var_17 -= ((/* implicit */_Bool) arr_7 [i_2] [i_3 + 1] [i_3] [i_2]);
                            arr_10 [i_0] [i_1] [i_0] = (-(((/* implicit */int) ((signed char) ((arr_1 [i_2] [i_1]) / (((/* implicit */long long int) var_7)))))));
                            arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned short) min((arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 2]), (((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0 - 2])) ? (arr_5 [i_0] [i_0 - 1] [i_0 - 3]) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 3]))) : (max((arr_5 [i_0] [i_0 + 1] [i_0 - 1]), (((/* implicit */int) var_0)))))))));
                            arr_20 [i_0] [i_5] = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (+(arr_13 [12U] [i_0] [i_4] [i_5]))))));
                            arr_21 [i_0] [i_1] = ((/* implicit */long long int) var_3);
                            arr_22 [i_0] [i_0] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), ((+(var_8)))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) > (((((/* implicit */int) min((var_11), (var_1)))) >> (((((/* implicit */int) var_0)) + (1453)))))));
}
