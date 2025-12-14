/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196556
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)60), (var_9))))) : (min((((/* implicit */unsigned long long int) 1720127385)), (10775590314708466262ULL))))), (((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) min((arr_2 [i_0] [i_1]), ((signed char)47)))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7671153759001085350ULL)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1] [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))) ^ (((/* implicit */long long int) min((1679841482), (((/* implicit */int) (signed char)127))))))))));
            }
        } 
    } 
    var_10 -= ((/* implicit */int) ((((/* implicit */_Bool) 277119972938250880LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) : (2861974272U)));
    var_11 = ((/* implicit */long long int) var_6);
}
