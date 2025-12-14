/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212202
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) 948350139U)), (-4512925097369797601LL)));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19549)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19546))) : (-4512925097369797601LL))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_0]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)12002))));
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 5247338807793299987ULL)) ? (2120632635756771115LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19543)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7698465781405406344LL)) ? (10401213173621085356ULL) : (0ULL)));
                        arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)-53))))) && (((/* implicit */_Bool) arr_12 [i_4 - 2] [i_1] [i_1] [i_2 - 1]))));
                        arr_16 [i_1] = ((unsigned char) ((2527505202U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2 + 2] [i_1] [i_0] [i_2] = ((/* implicit */short) -4989220049570542915LL);
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-29)) - (((/* implicit */int) (unsigned short)45989))));
                    }
                    for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) (~(14234249436212025433ULL)));
                        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
                        arr_23 [i_0] [i_1] [i_2] [i_6] [i_6 - 1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 32767ULL))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((long long int) var_5)))) ? (765265354224201720ULL) : (((/* implicit */unsigned long long int) -5617846167032976083LL))));
                        arr_24 [i_0] [i_1] [i_1] [i_6 - 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18014398509481968ULL)) ? (((/* implicit */unsigned long long int) -7243148904948338040LL)) : (arr_8 [i_6 + 1] [i_2 + 3] [i_6 + 1] [i_6]))) * (((/* implicit */unsigned long long int) 7168U))));
                    }
                }
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((((unsigned int) 18446744073709551607ULL)) * (min((((/* implicit */unsigned int) arr_4 [i_0])), (3831386829U)))));
    }
    var_19 = -7467510593642356863LL;
}
