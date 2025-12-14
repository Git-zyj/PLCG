/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218625
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [2] [i_2] = ((/* implicit */unsigned int) arr_4 [4U] [i_1 + 1] [i_2]);
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_0])), (((int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)5)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_0] [(unsigned char)9] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)65))));
                                arr_19 [i_0] = ((/* implicit */int) ((unsigned char) var_5));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((unsigned long long int) (-(min((var_12), (((/* implicit */long long int) 30720U))))));
    var_20 = ((/* implicit */unsigned char) var_7);
    var_21 = ((/* implicit */int) -2313569602657085481LL);
    var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)243)) ? (var_8) : (((/* implicit */int) var_17)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)242))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (4294936575U))))))));
}
