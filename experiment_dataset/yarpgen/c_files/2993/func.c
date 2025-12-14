/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2993
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
    var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_14)) - (17614)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) % (17648698420935833684ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6403349888796539250LL)))) && (((/* implicit */_Bool) var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_7)))))) : (max((((/* implicit */long long int) var_5)), (arr_3 [i_0])))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (9223372036854775808ULL))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)106))))) : (((9223372036854775803ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                var_18 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_2]))) : (-1947035859816075735LL))))))));
                var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))))));
                var_21 = ((/* implicit */unsigned char) (+(((((9223372036854775834ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [11ULL] [i_3] [i_3]))))) >> (((((unsigned long long int) var_10)) - (49ULL)))))));
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 7990997805701800140LL);
                var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((798045652773717931ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)18578)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_12))))) >> (((((((/* implicit */_Bool) 7990997805701800140LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (18050078748689308842ULL))))));
}
