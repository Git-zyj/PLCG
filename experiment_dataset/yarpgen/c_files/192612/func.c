/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192612
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(var_1)))) + ((+((-(var_8))))))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(min((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))))), (((/* implicit */unsigned long long int) var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) max((2219804609963708880ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [12ULL]))) / (arr_1 [i_0])))))))));
                var_15 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3] = ((max((((((/* implicit */int) (unsigned char)253)) << (((((/* implicit */int) var_6)) + (20843))))), (arr_9 [i_3] [i_2] [i_1] [(_Bool)1]))) < (((arr_5 [(_Bool)1] [(_Bool)1] [i_2]) + (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)11)))))));
                            arr_12 [i_0] [(short)0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_3])))))), (arr_2 [i_0] [i_2])));
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_3) - (953165331U)))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
}
