/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217611
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9582696392048198849ULL)) ? (562949953413120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (short)32764)) : (-2145410123)));
    var_15 -= ((/* implicit */long long int) var_13);
    var_16 ^= ((/* implicit */unsigned short) 0U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (signed char)0))));
            var_18 = ((/* implicit */unsigned char) (unsigned short)8496);
        }
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)57040)) : (((/* implicit */int) (unsigned short)8496))))) ? (((((/* implicit */_Bool) (unsigned short)8496)) ? (((/* implicit */int) (short)1827)) : (((/* implicit */int) (signed char)-20)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned short) (unsigned char)0);
                var_19 = ((/* implicit */short) min((var_19), ((short)20199)));
                var_20 += ((/* implicit */unsigned char) (unsigned short)38701);
                arr_16 [5] [1ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1827)) ? (((/* implicit */int) (short)1821)) : (((/* implicit */int) (unsigned short)41701))));
                arr_17 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)26837)) : (((/* implicit */int) (unsigned short)38701)))) : (((/* implicit */int) (short)1827))))) ? (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)41701)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)45))));
            }
        } 
    } 
}
