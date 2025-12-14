/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230329
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned char)6]))))) / (min((((/* implicit */unsigned long long int) var_5)), (var_13)))))) ? (((((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)8] [i_0 - 3])))));
                var_15 = ((/* implicit */unsigned long long int) max(((unsigned short)42689), (((/* implicit */unsigned short) ((_Bool) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((min((arr_4 [i_0 - 1]), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) ? (arr_3 [i_0 - 1] [i_0 - 3] [i_0 - 3]) : (arr_3 [i_0 - 1] [i_0] [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_3])), (arr_8 [i_2] [i_3]))))) : ((+(((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
                arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_1)))) ? ((-(arr_8 [i_2] [i_3 - 1]))) : (((arr_5 [i_3 + 2] [5ULL] [i_3 + 1]) << (((arr_8 [i_2] [i_3 - 1]) - (3528329906U)))))));
                var_17 = ((((/* implicit */int) var_11)) * (((/* implicit */int) ((unsigned char) var_3))));
            }
        } 
    } 
}
