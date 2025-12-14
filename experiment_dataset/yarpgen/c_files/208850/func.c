/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208850
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
    var_14 = ((/* implicit */signed char) ((min((min((2431919469U), (((/* implicit */unsigned int) (unsigned char)47)))), (((/* implicit */unsigned int) (unsigned char)192)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (818837350U)));
                var_15 |= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)34357)) ? (268427264U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))), (min((((/* implicit */unsigned int) var_8)), (818837350U)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((4026540024U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) != (min((((arr_6 [i_3]) ^ (arr_6 [i_2]))), (((/* implicit */unsigned long long int) ((var_7) <= (var_11))))))));
            arr_9 [i_2] [(short)16] |= ((/* implicit */int) max((min((arr_8 [(short)6] [i_2 - 1]), (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
            var_17 = ((/* implicit */int) min(((((_Bool)1) ? (arr_8 [i_2] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (max((arr_5 [i_2 - 1]), (((/* implicit */unsigned long long int) var_8))))));
        }
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((757214931007584783ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))))));
        arr_10 [i_2] = ((((max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (17131735781096434120ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8644094393270096499ULL)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned char)188))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [16ULL] [i_2] [12U])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((2822593542U), (((/* implicit */unsigned int) (short)-3561))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (arr_8 [i_2] [i_2 - 1]))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551601ULL))));
    }
}
