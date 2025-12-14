/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236289
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
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_15)) : (var_6)))))))));
    var_21 = (+(((/* implicit */int) var_12)));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    var_22 = (~(((unsigned int) arr_1 [i_2 + 2])));
                    var_23 = ((/* implicit */_Bool) -993778593650586492LL);
                    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) 993778593650586509LL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4188556688837373408LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((arr_5 [3] [i_1] [(_Bool)1] [i_3]) ? (var_19) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])))))))))));
                                arr_15 [i_0 + 2] [i_0] [i_2] [i_0 + 2] [(_Bool)1] = ((/* implicit */unsigned char) ((-4188556688837373432LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_26 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_4])))));
                                var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_16 [i_0] [i_3] [i_0] [0ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -993778593650586531LL);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned long long int) arr_0 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((var_18) ? (((((/* implicit */_Bool) var_19)) ? (var_13) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    var_30 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) var_15)));
}
