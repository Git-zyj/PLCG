/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237449
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((var_3) + (2147483647))) >> (((((/* implicit */int) var_13)) - (59)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_17))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : ((+(((((/* implicit */_Bool) (unsigned char)101)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))) | (arr_3 [i_1] [i_0] [i_0])))) || (((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)65535)), (var_3))) / ((+(var_15))))))));
                var_21 = ((/* implicit */long long int) min((((((/* implicit */int) var_14)) + (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 2])))), (((/* implicit */int) var_12))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_0] [i_0] [i_3 + 2] [(unsigned short)2] [i_1 - 2])))) | (((unsigned long long int) max((var_5), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 1] [i_2])))))))));
                            var_23 |= ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_13)) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) (unsigned char)154))))))) != (arr_3 [i_0] [i_0] [i_2]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_16))))))));
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))))))));
}
