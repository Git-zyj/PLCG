/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201888
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (-(3499629994U)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) (short)-17917);
                    var_17 = ((/* implicit */long long int) (-(-1997790948)));
                }
                for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65514)))))));
                    arr_10 [i_0] [i_1] [i_0] = (-(((/* implicit */int) (_Bool)0)));
                    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) 2780752888139901633LL))));
                    var_20 = ((/* implicit */int) (unsigned short)24);
                    arr_11 [i_0] [i_1] = (+(((/* implicit */int) (_Bool)0)));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                var_21 = ((/* implicit */unsigned long long int) (+(651348648)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) 3539944481U);
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_10))));
}
