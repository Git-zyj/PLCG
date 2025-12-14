/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213005
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                    var_10 += ((/* implicit */long long int) (_Bool)1);
                    var_11 &= ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) != (131071ULL)))), (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((2388793001U), (((/* implicit */unsigned int) (unsigned short)8))))) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((unsigned long long int) arr_1 [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_12 += ((/* implicit */int) ((signed char) ((18446744073709551614ULL) > (((/* implicit */unsigned long long int) arr_5 [i_4] [i_5])))));
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1495031670)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_5]))) : (9746068692913415984ULL))) << (((((/* implicit */int) ((signed char) arr_11 [i_3] [i_4]))) + (113)))));
                }
                var_14 = -7262810595186219637LL;
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) 2ULL);
                arr_18 [i_3] = min((((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (9223372036854775798LL)))), (((/* implicit */long long int) (signed char)33)));
            }
        } 
    } 
}
