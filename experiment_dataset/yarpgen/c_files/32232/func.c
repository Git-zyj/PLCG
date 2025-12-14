/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32232
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
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [(short)8] [(short)8] [i_3] = ((/* implicit */unsigned int) ((unsigned char) min(((~(2520245286237239610LL))), (((/* implicit */long long int) arr_1 [i_3])))));
                            var_14 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_2]);
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((2269679434U), (((/* implicit */unsigned int) ((_Bool) min((2520245286237239626LL), (((/* implicit */long long int) var_9)))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((((((-8988563326115873864LL) - (((/* implicit */long long int) var_9)))) - (min((-2520245286237239602LL), (-2520245286237239610LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [7] [i_1]))) / (min((-2520245286237239612LL), (((/* implicit */long long int) arr_5 [i_0] [(short)2]))))))));
                arr_11 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */short) 2655818118U);
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) arr_7 [i_0 - 2] [i_1] [i_1] [(short)8]))));
                arr_12 [(unsigned char)1] = ((/* implicit */signed char) ((((-2520245286237239623LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)24))))) - (((/* implicit */long long int) var_7))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (short)16384);
    var_19 += ((/* implicit */short) (-(((/* implicit */int) var_10))));
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1778272607)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((288229826395897856ULL), (((/* implicit */unsigned long long int) var_11))))))))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (4398046511103LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-7428)))))))));
    var_21 = ((/* implicit */short) var_11);
}
