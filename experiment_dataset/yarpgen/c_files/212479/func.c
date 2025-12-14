/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212479
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
    var_18 = min((((/* implicit */long long int) 0)), (1188943242047533285LL));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_4)))) : (((/* implicit */int) ((signed char) 667444226512256447LL))))) >> (((-667444226512256447LL) + (667444226512256456LL))))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0])))) != (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_0]))))));
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(18446236973785564050ULL))), (((/* implicit */unsigned long long int) var_8)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((long long int) ((unsigned short) arr_7 [i_0] [i_1] [3U] [i_0])));
                                var_23 = ((/* implicit */unsigned char) min(((~(var_3))), (((/* implicit */unsigned long long int) 667444226512256447LL))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 667444226512256444LL))));
            }
        } 
    } 
}
