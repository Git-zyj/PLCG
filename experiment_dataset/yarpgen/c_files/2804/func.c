/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2804
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
    var_17 = var_9;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) 7910410990984595491LL)))));
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 145175523U))))) ? (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)244)))) : (2147418112)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) 2898408431U);
                            var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_0))))) || (((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (2009933632667185705LL))))))));
                            var_22 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max(((short)-26398), ((short)-1)))), (arr_1 [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1])) & (((/* implicit */int) var_3))))), (max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
