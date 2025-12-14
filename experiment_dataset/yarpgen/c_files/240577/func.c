/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240577
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
    var_11 -= var_0;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */int) max(((((!(arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0))))))))));
                    arr_10 [i_0] [i_0] [i_0] [12U] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65501))))))) ? (min((((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) arr_1 [(_Bool)1]))))), (((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_0 [12LL])) : (12138517585837070597ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
                var_12 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65501))));
            }
        } 
    } 
    var_13 &= ((/* implicit */short) var_3);
}
