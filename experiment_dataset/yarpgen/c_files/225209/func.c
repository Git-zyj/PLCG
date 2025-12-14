/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225209
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) && (((/* implicit */_Bool) -528661244))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */unsigned int) var_4);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)124))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((short) arr_9 [i_3] [i_2] [i_1] [i_0])))))) || (((/* implicit */_Bool) ((int) arr_2 [i_3] [i_0 - 1]))));
                            arr_14 [i_0] [i_2] [i_3] = max(((+(((/* implicit */int) arr_8 [i_0 + 2] [i_2] [i_0 + 2])))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_12 [i_0 + 2])))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = min(((+(-3896231230360975690LL))), (((/* implicit */long long int) (+(max((((/* implicit */int) (unsigned short)65417)), (var_3)))))));
                            arr_16 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)145)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0 - 1]))) ^ (max((((/* implicit */unsigned long long int) var_1)), (var_7)))))));
                            arr_17 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_5)))) / ((((_Bool)1) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_2))) % (((/* implicit */int) ((signed char) var_4)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) - (((unsigned long long int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_5)))) ? (max((var_7), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (signed char)16))));
}
