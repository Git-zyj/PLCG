/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49256
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_1 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_2 [(signed char)0]) : (arr_7 [i_2 + 2] [i_1])))))) ? (((/* implicit */long long int) arr_5 [i_2 + 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22336)) ? (var_6) : (((/* implicit */long long int) 4294967295U))))) ? (min((((/* implicit */long long int) var_5)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                    arr_9 [i_1] [i_1] [(unsigned short)9] [i_2] = ((/* implicit */long long int) (+((-(arr_8 [i_2 - 1] [i_1 - 1] [i_0 - 3])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(short)9] [i_2 + 2] [i_3] [i_4] = ((/* implicit */short) (-(((400390773889144688ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [4U] [i_3])) ? (856818985309841350LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                                var_19 = ((((/* implicit */_Bool) arr_10 [i_1 - 1] [11] [i_2 + 2] [i_4 - 1] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 1])) ? (((((/* implicit */_Bool) var_16)) ? (arr_1 [(short)9]) : (var_12))) : ((((_Bool)1) ? (arr_10 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_3] [7U]) : (((/* implicit */long long int) -1247063680)))))) : (((/* implicit */long long int) -1247063695)));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_4 - 1] [i_3] [i_1 - 1])) << (((min((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))) - (1229108964419268956LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_0))));
                arr_20 [(_Bool)1] [i_6] [i_5] = ((/* implicit */long long int) arr_16 [i_5]);
                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_5 + 2] [i_5 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)21])) ? (arr_17 [i_5 + 2]) : (arr_15 [(signed char)19])))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_18 [i_5 + 1] [i_6]))))));
            }
        } 
    } 
}
