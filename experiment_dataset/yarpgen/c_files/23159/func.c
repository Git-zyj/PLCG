/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23159
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) 1732025244U)) && (((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */long long int) (((_Bool)1) ? (2053359054) : (((/* implicit */int) (short)2044)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)101))));
                            arr_9 [(_Bool)1] [(_Bool)1] [(short)15] [i_1] [11LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) ((-2053359037) & (2053359040))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (2053359054)))) ? (min((((/* implicit */unsigned int) (unsigned short)14800)), (2626397323U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)165)), ((unsigned short)6996)))))))));
                            arr_10 [(signed char)18] [(_Bool)1] [(signed char)16] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))) ? ((+(((263019407771435581LL) / (263019407771435586LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198)))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (895526843) : (((18) / (2053359053)))))) && (((/* implicit */_Bool) ((long long int) var_5)))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((_Bool) var_1)) ? (((unsigned long long int) (!(((/* implicit */_Bool) 2LL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 4) 
        {
            {
                arr_16 [12U] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((-19) > (((/* implicit */int) var_2))))), ((+(((/* implicit */int) (unsigned char)21))))));
                arr_17 [20LL] = ((/* implicit */signed char) max((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)39200)))) == (((long long int) (_Bool)0)))))));
            }
        } 
    } 
}
