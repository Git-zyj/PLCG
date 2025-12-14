/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199774
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
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (signed char)122)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)42720)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (var_7))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((-5665290784638569597LL), (((/* implicit */long long int) (signed char)15)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (arr_2 [i_0] [i_0]))))))) <= (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (2934680856494208332ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_4]))));
                        var_19 = ((/* implicit */unsigned char) arr_4 [i_1]);
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned long long int) 3204726268621623298LL);
        arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1])))) && (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_3))))));
    }
    var_20 = ((/* implicit */_Bool) var_1);
}
