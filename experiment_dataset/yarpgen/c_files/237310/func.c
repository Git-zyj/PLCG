/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237310
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
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)40)) == (((/* implicit */int) (unsigned char)40))))), (arr_2 [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] = (_Bool)0;
                            arr_12 [(unsigned short)14] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~((+(((/* implicit */int) var_3))))))) ^ (0LL)));
                            arr_13 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (unsigned char)255);
                            var_16 = (i_1 % 2 == 0) ? (((arr_5 [i_2] [i_1] [i_2] [i_1]) >> (((((/* implicit */int) (unsigned short)23736)) - (23712))))) : (((((arr_5 [i_2] [i_1] [i_2] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)23736)) - (23712)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_14);
    var_18 = (-(((/* implicit */int) var_2)));
    var_19 = ((/* implicit */short) var_8);
}
