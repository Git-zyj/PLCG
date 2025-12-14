/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33503
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) arr_3 [(short)12] [(short)12]))))))));
                    var_20 ^= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0])))) : (((11488355659412340922ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))))))) >> (((var_18) - (697758762418943505LL)))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) (-(-1599295192))))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)1402)) : (((/* implicit */int) (signed char)-2)))) - (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)18384))))))));
                    var_21 += ((/* implicit */signed char) var_4);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [6LL])) ? (((/* implicit */unsigned int) arr_6 [i_0])) : (arr_10 [i_1] [9])));
                    var_23 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)-17804))) > (-1LL)))));
                }
                var_24 = ((/* implicit */unsigned short) (+(((-8856639703934481308LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((short) ((long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))))));
}
