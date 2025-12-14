/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222058
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)254)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((var_9), (((/* implicit */unsigned long long int) -5328560679666921062LL))))))) && (((/* implicit */_Bool) ((signed char) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1])), (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_0 + 1])) - (((((/* implicit */_Bool) (unsigned char)254)) ? (1693603963203800706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))))))));
                    arr_9 [i_0] [(unsigned char)0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_5 [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) (unsigned short)11))))) ? (min((((/* implicit */int) (unsigned short)63348)), (var_10))) : ((~(((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((arr_2 [i_0 - 1] [i_0 - 1]) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                    arr_10 [11] [(signed char)0] [5] [5] = ((/* implicit */unsigned int) (unsigned char)254);
                    arr_11 [(short)10] [(short)10] [(signed char)3] = ((/* implicit */unsigned short) arr_0 [i_2]);
                }
            } 
        } 
    } 
}
