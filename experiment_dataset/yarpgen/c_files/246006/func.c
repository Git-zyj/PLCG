/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246006
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_17 |= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [4LL] [22ULL])) & (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */long long int) (_Bool)1);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        var_20 = ((/* implicit */_Bool) ((((4ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-16376))))))) >> (((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? ((-(-9223372036854775805LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (0)))))) - (9223372036854775782LL)))));
        var_21 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))))), ((signed char)(-127 - 1)))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+((~(((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */int) 17370984081856951409ULL);
        arr_9 [i_2] = ((/* implicit */long long int) var_7);
    }
    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 3] [i_3])) != (((/* implicit */int) arr_6 [i_3 - 2] [i_4 - 3])))))) : (arr_4 [i_3 - 3])));
            var_26 = ((/* implicit */unsigned int) max((((arr_3 [i_3 + 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (8699843459246321107ULL)))));
        }
        arr_16 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) | (arr_3 [i_3 - 2])))) && (((/* implicit */_Bool) max((((0ULL) >> (((4217230342U) - (4217230301U))))), (arr_3 [i_3 + 2])))));
    }
    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 2] [i_5 - 2]))) / (arr_17 [i_5 + 3]))) > (arr_17 [i_5 + 1]))))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 2] [i_5 - 3]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5 + 3]))) ^ (14ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10913082025690627427ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5])) || (arr_18 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) -1161571165)))))))) : (var_1)));
    }
}
