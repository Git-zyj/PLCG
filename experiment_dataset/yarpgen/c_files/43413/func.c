/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43413
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                var_21 |= ((/* implicit */unsigned short) min((((long long int) arr_3 [i_1] [i_1])), (((/* implicit */long long int) max((((((/* implicit */unsigned int) var_1)) + (508U))), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))), (max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) (((+(1845422114))) >> ((((((~(arr_1 [i_2] [i_2]))) - (max((-61691536), (((/* implicit */int) var_16)))))) + (513061780)))));
        arr_13 [(unsigned char)12] |= ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [0LL]))))) | ((~(arr_2 [i_2 - 3]))));
        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [16U]))))) ? (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) (unsigned short)25356)) ? (((/* implicit */unsigned long long int) var_12)) : (7449046323655209997ULL)))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((-1845422114) + (2147483647))) << (((14838749624587914740ULL) - (14838749624587914740ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) ? (((/* implicit */unsigned long long int) var_14)) : (var_6)));
}
