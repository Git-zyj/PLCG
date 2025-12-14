/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234771
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
    var_18 = ((/* implicit */short) max((7119423862354103629ULL), (((/* implicit */unsigned long long int) -8167540955874611178LL))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-59))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65472))))) ? (min((((/* implicit */unsigned int) (short)32749)), (232597863U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23842))));
                    var_19 &= ((/* implicit */unsigned short) (short)13985);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_8 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [0ULL] [i_2])) : (((/* implicit */int) arr_6 [i_1] [(signed char)2] [i_2] [(signed char)4]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_2])) || (((/* implicit */_Bool) (short)11437)))))))));
                    arr_11 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max(((signed char)19), (((/* implicit */signed char) (_Bool)1))));
        var_22 += ((/* implicit */unsigned long long int) max((max((arr_3 [i_3]), (arr_3 [i_3]))), (max((arr_3 [i_3]), (arr_3 [i_3])))));
        arr_15 [i_3] = ((/* implicit */short) min((max((((/* implicit */int) arr_0 [i_3] [i_3])), (max((((/* implicit */int) arr_7 [i_3] [i_3])), (arr_9 [i_3]))))), (((/* implicit */int) var_15))));
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (arr_8 [i_3] [i_3])))) ? (max((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3]))) : (((((/* implicit */_Bool) (unsigned char)187)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)32756)))))));
    }
    var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned int) (short)11426)), (1610065845U)))))) : (3226285324792412495LL)));
}
