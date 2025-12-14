/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24046
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)206))));
                var_17 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) -231795962)) ? (4725075227758660845LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))));
                arr_5 [i_1] = (~(arr_2 [i_0 - 2]));
                var_18 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)34))))));
            }
        } 
    } 
    var_19 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
    var_20 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) var_3))))), (var_15)));
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_11))));
                    var_22 &= ((/* implicit */long long int) arr_12 [(unsigned short)21]);
                    arr_17 [(unsigned char)14] [(unsigned char)14] [i_2] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_14 [i_2 - 1] [i_3]), (arr_14 [i_2 - 1] [i_3])))), (((((/* implicit */long long int) -231795970)) / (3739261177833354983LL)))));
                    var_23 &= ((/* implicit */long long int) arr_8 [i_2]);
                    var_24 = ((/* implicit */short) arr_15 [i_2 + 2] [i_2]);
                }
            } 
        } 
    } 
}
