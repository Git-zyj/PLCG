/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/496
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_6))))))));
        var_10 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_0))))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)163))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (arr_0 [i_0] [i_0]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56030)) ? (3) : (((/* implicit */int) var_6))))), (min((((/* implicit */long long int) (unsigned char)129)), (arr_0 [i_0] [i_0])))))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9509)) ? (1) : (((/* implicit */int) (unsigned char)126)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_12 = ((/* implicit */int) (unsigned char)156);
        var_13 -= ((int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 + 1]))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) min((5743325267986443293LL), (-5691132139270373013LL)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (6153464185652623954ULL)))));
                    var_14 = ((((/* implicit */_Bool) min((arr_11 [i_4 + 4] [i_3] [i_4 - 2]), (arr_11 [i_4 + 3] [i_3] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (var_3) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned short)65521)) + (((/* implicit */int) (signed char)-125))))))) : (((min((arr_13 [i_3] [i_3]), (((/* implicit */unsigned int) var_6)))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max((((var_3) << (((arr_10 [i_2]) - (507389730504289797LL))))), (var_3)));
        var_16 = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
    }
}
