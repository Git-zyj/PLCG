/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23856
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((2147483647U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)64364)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
                    var_19 += ((/* implicit */unsigned short) ((9174612007051107928ULL) == (((/* implicit */unsigned long long int) -918561648858133025LL))));
                    var_20 -= ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) var_3)), (-918561648858133025LL)))));
                    var_21 |= var_1;
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20))) : (9272132066658443666ULL)))) ? (9174612007051107928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)75), (((/* implicit */signed char) arr_2 [i_1] [i_1] [i_2]))))))))) ? (((/* implicit */long long int) max((var_6), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)9] [i_2]))))))) : (((((/* implicit */_Bool) min((9272132066658443688ULL), (((/* implicit */unsigned long long int) (signed char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) (short)-14969))))));
                }
            } 
        } 
    } 
}
