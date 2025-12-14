/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54044
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
    var_14 |= ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) max(((unsigned short)14497), (((/* implicit */unsigned short) (_Bool)1))));
                var_16 *= ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-54)), (var_2)))) ? (((((/* implicit */_Bool) 1817662242U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (_Bool)1)))) == (var_0)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15248)) ? (arr_7 [i_3] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_0] [i_2] [i_3])))) : (var_2)));
                            var_17 = ((/* implicit */unsigned int) (+(((long long int) arr_2 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
