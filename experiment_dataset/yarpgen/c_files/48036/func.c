/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48036
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (((var_2) << ((((-(((/* implicit */int) var_0)))) + (105))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)32737)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) -3137707601753787754LL)))))))) <= (18446744073709551615ULL)));
    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (16669755861412235371ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((((-9223372036854775807LL - 1LL)) % ((-9223372036854775807LL - 1LL)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (16LL)))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (33292288) : (((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6548607905471782529LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33292288)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1125895611875328ULL)))) ? (6726403694398926848ULL) : (1776988212297316234ULL))))));
            arr_5 [i_0] [(unsigned char)4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_1 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((13956050510495909217ULL) == (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 1])))))) : (max((3001828647U), (2094682422U)))));
        }
    }
}
