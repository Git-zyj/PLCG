/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203850
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
    var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_8), (var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] = ((unsigned short) max(((-(arr_0 [i_3]))), (((/* implicit */unsigned long long int) max(((unsigned short)60121), (((/* implicit */unsigned short) (signed char)104)))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) ((short) (unsigned short)5104))))), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1] [i_1]))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))) : (arr_0 [(_Bool)1])))) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) ((short) var_9)))))));
}
