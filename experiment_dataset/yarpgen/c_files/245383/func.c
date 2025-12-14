/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245383
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
    var_17 = ((/* implicit */signed char) (~((-9223372036854775807LL - 1LL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned int) (+(arr_1 [i_0 - 1] [5LL])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1567215387946270900LL)))) ? ((-(1567215387946270882LL))) : (((/* implicit */long long int) (~(2147483647))))));
                    var_20 = ((/* implicit */signed char) 195808518U);
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((8388096ULL) | (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_0 - 1] [i_2]))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned int) (short)-1223);
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 6; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1]))))), (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62993)))))));
                    arr_16 [i_3] = ((/* implicit */unsigned short) (short)1630);
                    var_25 = ((/* implicit */long long int) min(((!(arr_8 [i_3] [i_3]))), ((!((!(((/* implicit */_Bool) (short)1630))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (min((arr_3 [i_3] [i_3]), (((/* implicit */long long int) ((arr_2 [(_Bool)0] [(_Bool)0]) <= (4294967287U))))))));
    }
}
