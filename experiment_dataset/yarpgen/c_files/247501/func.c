/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247501
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -275102962935753976LL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (_Bool)0))))) : (var_2))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) / (-6070391968582457650LL))), (((/* implicit */long long int) var_9)))))));
                            arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3]) ? (var_1) : (min((-4632020634197437768LL), (arr_1 [i_0] [(_Bool)1]))))) ^ (((((((/* implicit */unsigned long long int) -1LL)) == (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((((/* implicit */_Bool) -1LL)) ? (arr_1 [i_0] [(unsigned short)10]) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_0);
}
