/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219466
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
    var_18 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) 14265038534726936730ULL))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_4))))) || (((/* implicit */_Bool) ((signed char) arr_5 [i_0] [6ULL] [i_1 + 1] [i_0])))))));
                    var_19 = ((/* implicit */unsigned int) (-(var_1)));
                    var_20 += ((/* implicit */signed char) arr_4 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (((int) 7038505570738466298ULL))))) ? (max((4181705538982614878ULL), (((/* implicit */unsigned long long int) ((int) -1106495646))))) : (((/* implicit */unsigned long long int) 1299459870)))))));
    var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((var_6) - (1097552735))));
}
