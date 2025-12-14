/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214186
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
    for (int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45370)))))));
                var_17 -= ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)48152)) << (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)1348))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -3829136740663181211LL)) - (18446744073709551597ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) (unsigned short)13919)) : (((/* implicit */int) (_Bool)1))));
                            arr_12 [i_0] [i_2] &= ((/* implicit */signed char) max(((unsigned short)45347), ((unsigned short)65527)));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = (-((+(((((/* implicit */_Bool) 12016143119943108039ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))))), (min((((/* implicit */unsigned short) var_5)), (var_3)))))))));
}
