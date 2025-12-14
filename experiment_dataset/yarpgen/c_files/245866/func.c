/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245866
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
    var_20 = ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (unsigned short)47761);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_7 [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_0 - 1])) >> (((((/* implicit */int) arr_7 [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_0 - 1])) - (29))))));
                        arr_14 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))) / (((arr_8 [i_0] [i_3]) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 1643829180)))))) * (((/* implicit */unsigned long long int) 603515419U))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)102)), ((-(((/* implicit */int) arr_16 [i_4] [i_4] [i_4 + 3] [i_4 + 2] [i_2 + 2] [i_0 + 1]))))));
                        var_23 |= ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 6723190121352779180ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3691451876U)))))));
                    }
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */int) min((((/* implicit */unsigned short) min((min((var_18), (((/* implicit */short) var_2)))), (var_18)))), (var_3)));
}
