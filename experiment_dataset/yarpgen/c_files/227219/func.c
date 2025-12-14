/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227219
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
    var_14 &= ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((unsigned short) (signed char)12))))) ? (arr_0 [i_0]) : (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((unsigned long long int) 5009702966444960115LL)))) : (((/* implicit */unsigned long long int) var_4))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((5335082378367078453LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_1))))))) || (((_Bool) var_11))));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_3]);
                    arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) -2147483642)) : (arr_8 [i_1] [i_1]))) >> ((((-(1))) + (31)))))) ? (5009702966444960116LL) : ((+(((((/* implicit */_Bool) var_9)) ? (-5335082378367078454LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))))));
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_3 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_3 [i_2 - 1] [i_3 + 3])))) || (((/* implicit */_Bool) (+(arr_3 [i_2 - 1] [i_3 + 2]))))));
                    var_20 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 + 4] [3ULL] [i_2 - 2])) ? (((long long int) arr_8 [i_2 + 1] [i_3])) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) - (arr_8 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
