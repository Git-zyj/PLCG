/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33548
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5355865541844344254LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32760))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (min(((short)13008), ((short)32767)))))) : (((/* implicit */int) arr_0 [6ULL]))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_12 *= ((/* implicit */short) (+(((/* implicit */int) (short)-32767))));
            arr_6 [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (unsigned char)180)))));
        }
        for (short i_2 = 3; i_2 < 10; i_2 += 3) /* same iter space */
        {
            arr_10 [i_2 + 2] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [i_2 - 2] [0]))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)15609))))))))));
            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)16), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((((arr_4 [(short)5]) + (((/* implicit */long long int) ((/* implicit */int) (short)-6884))))), (((/* implicit */long long int) 598574359U))))));
            var_14 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) var_7))))) <= ((((_Bool)1) ? (arr_4 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_0]))))));
        }
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) var_8)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (short)-1252)) : (((/* implicit */int) (signed char)-21)))))))));
    var_16 = ((/* implicit */int) min((((/* implicit */long long int) var_2)), (9223372036854775807LL)));
}
