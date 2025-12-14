/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212978
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1]))));
                var_18 = ((((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_2 [i_1])))) & ((~(((/* implicit */int) arr_0 [i_0])))))) & ((~((~(((/* implicit */int) (signed char)27)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-33)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_3])) ? (arr_7 [(signed char)2] [(signed char)6]) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_14 [i_2] [i_3] [i_4] [i_2]) : (((/* implicit */int) arr_4 [(unsigned short)1] [i_3]))))))) : (((((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_4 + 1] [8])) | (arr_7 [(short)9] [(short)9])))));
                    var_20 &= ((/* implicit */int) ((long long int) min((((/* implicit */long long int) (signed char)27)), (((((/* implicit */_Bool) arr_13 [i_2] [(signed char)5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (var_2))))));
                    var_21 = arr_16 [i_2] [i_2];
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (2071804942712860005ULL)))) < (((/* implicit */int) var_6))));
}
