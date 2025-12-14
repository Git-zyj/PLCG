/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221147
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */unsigned long long int) ((unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)4]))) : (arr_0 [i_0] [3]))))));
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((~((~(arr_1 [(unsigned char)4] [i_1 + 1]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)907)), (979481515U)))) ? (arr_1 [(unsigned char)10] [(unsigned char)10]) : ((~(1ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */int) arr_7 [i_2]);
                var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_7 [2])), (arr_4 [14U]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [14U]))))))))));
                var_20 += ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_4 [(unsigned char)0]) : (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [(_Bool)1])))), (((/* implicit */unsigned long long int) arr_7 [(signed char)2]))))));
                arr_8 [11U] [i_2] [(unsigned short)3] = ((/* implicit */unsigned short) min((((signed char) arr_6 [i_2])), (min((arr_6 [i_2]), (arr_6 [i_2])))));
            }
        } 
    } 
    var_21 = var_11;
    var_22 = ((/* implicit */signed char) var_3);
    var_23 += ((/* implicit */unsigned long long int) var_3);
}
