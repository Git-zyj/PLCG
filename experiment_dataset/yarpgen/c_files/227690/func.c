/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227690
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
    var_19 = ((/* implicit */unsigned short) (~(var_12)));
    var_20 = ((/* implicit */_Bool) ((min((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((short) var_18))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((unsigned char) (short)1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_2)), (var_16))), (((/* implicit */long long int) ((short) arr_3 [i_0 - 1] [i_0 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 2] [i_2 + 1])) <= (((((/* implicit */int) var_15)) >> (((var_4) - (2253766315U)))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)5))))) ^ (((4003747726402308003ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21)))))));
                }
                var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) arr_0 [i_0 + 3] [i_0 - 1]))), (min((arr_4 [0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)3)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 12; i_3 += 4) 
    {
        for (int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    arr_17 [i_3 - 1] [i_4 - 3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1990469804U)) ? (((/* implicit */int) (short)-17243)) : (((/* implicit */int) (short)31))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    var_26 = ((/* implicit */_Bool) ((unsigned char) min((arr_1 [i_4 - 3]), (((/* implicit */short) var_10)))));
                }
            } 
        } 
    } 
}
