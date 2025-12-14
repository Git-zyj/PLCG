/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246653
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
    var_20 |= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)136)) - (1073741824)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [(_Bool)1] [i_2] = ((/* implicit */int) (~(arr_5 [i_2] [i_1] [i_0 + 1])));
                    var_21 |= (-(26U));
                    arr_9 [i_2] [i_1] [i_1] [(unsigned short)0] &= ((((/* implicit */unsigned long long int) ((min((23U), (((/* implicit */unsigned int) var_3)))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [18ULL])))))))) < ((-(((unsigned long long int) arr_1 [i_0 + 1])))));
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (max((arr_6 [i_0] [i_0] [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (arr_3 [i_1]) : (((/* implicit */long long int) 2111206341U))))))) - (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (max((((/* implicit */long long int) var_14)), (arr_2 [(_Bool)1] [i_2]))) : (((/* implicit */long long int) (+(1109152879U)))))))));
                }
            } 
        } 
    } 
}
