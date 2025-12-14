/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51289
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) << (((var_15) - (8484289183279120242LL))))) | (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)177)) ^ (((/* implicit */int) (_Bool)1))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned char)103))))) : (max((840651502644244886LL), (((/* implicit */long long int) 1465794946U)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (-2756354682890270854LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) var_14)), (var_13))))) + ((((-(-2756354682890270849LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))) ? ((~(((((/* implicit */_Bool) -4021776371531358684LL)) ? (4021776371531358683LL) : (-3710131522424782369LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2584983666U)) ? (((/* implicit */int) (_Bool)0)) : (-2147483630)))) ? (((((/* implicit */_Bool) var_3)) ? (4021776371531358687LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((var_16) << (12LL))))))));
                            arr_12 [i_2 - 1] |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)153))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187))))) : (((/* implicit */int) var_14))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((2147483629) / (((/* implicit */int) (unsigned char)44))))) ? (((/* implicit */int) ((_Bool) 6624974890376697605LL))) : (((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((1779311687) - (1779311681)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -462308218603733461LL))))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_17))))))));
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
            }
        } 
    } 
}
