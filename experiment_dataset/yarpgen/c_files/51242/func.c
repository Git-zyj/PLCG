/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51242
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) | ((~(-8305549886399446657LL)))))));
                                arr_13 [i_0] [(unsigned char)3] [i_1] [i_1] [7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(var_2)))) <= (8305549886399446640LL)));
                                arr_14 [i_4] [i_1] = ((/* implicit */unsigned short) min((var_3), (arr_9 [i_1] [1LL] [i_2] [7U])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min(((_Bool)1), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-7891489216246692261LL) : (arr_10 [(unsigned char)3] [i_0])))))))))));
                    var_21 = ((/* implicit */short) (~(((/* implicit */int) min(((unsigned short)35581), (((/* implicit */unsigned short) ((unsigned char) var_10))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_4);
    var_23 = ((/* implicit */int) var_17);
}
