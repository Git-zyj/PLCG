/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228988
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
    var_10 = ((/* implicit */short) ((max((542939163), (((/* implicit */int) (unsigned short)65535)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)65521)) > (((/* implicit */int) (unsigned short)44060)))))));
    var_11 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521)))));
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)65535)), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25080))) : (9223372036854775793LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (480635809) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */int) var_4);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) min(((+(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (unsigned short)1))))))), (((/* implicit */int) ((unsigned char) -27001546)))));
                            arr_11 [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_3 + 2] [i_1 - 2] [i_0]);
                            var_15 = arr_8 [i_0] [i_1] [i_1 - 2] [i_3 - 1];
                        }
                    } 
                } 
            }
        } 
    } 
}
