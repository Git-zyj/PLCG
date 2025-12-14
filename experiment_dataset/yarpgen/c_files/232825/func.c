/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232825
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_17) : (min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (_Bool)0);
                                var_21 = ((/* implicit */int) (+(var_17)));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */long long int) max((-309142016), (((((((/* implicit */int) var_3)) & (372133278))) ^ (((((/* implicit */int) (_Bool)1)) << (((arr_10 [i_2] [i_0 + 1] [i_1 + 2] [11ULL] [i_0 + 1] [i_0 + 1]) + (1188138605)))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) -5135717455877814769LL))));
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) -1003517462);
                    var_24 = ((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_5]);
                    var_25 = ((/* implicit */long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_26 = ((((int) max((((/* implicit */unsigned long long int) -3148966534606534488LL)), (0ULL)))) >= (-1041370653));
                    arr_17 [i_0 - 1] [i_0] = ((/* implicit */long long int) 18446744073709551588ULL);
                }
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_10))));
                arr_18 [i_0] = ((/* implicit */_Bool) ((var_14) >> (((((((/* implicit */_Bool) -6532884169461444350LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (4411928446413156918LL)))));
                var_28 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (-5135717455877814769LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            {
                var_29 = ((/* implicit */long long int) var_4);
                var_30 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) max((((var_4) ^ (-1158171303))), (-1140564948))))));
            }
        } 
    } 
    var_31 = -2293988826628545424LL;
    var_32 = ((/* implicit */unsigned long long int) var_15);
}
