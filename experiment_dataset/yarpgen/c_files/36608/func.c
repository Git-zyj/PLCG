/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36608
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
    var_12 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7))))))))));
                    var_14 = ((/* implicit */short) (-2147483647 - 1));
                    arr_10 [i_2] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) 3756151176U))), (1936613603U)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) var_3);
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_4 + 3] [i_3])), (4294967290U))), (((/* implicit */unsigned int) (short)-26933))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (-9191412811867400307LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [0LL] [i_3] [i_3]))))))) : ((-(((((/* implicit */_Bool) (short)-26910)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
