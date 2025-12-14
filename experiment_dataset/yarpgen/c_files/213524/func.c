/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213524
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
    var_16 = ((/* implicit */int) (short)32767);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (unsigned short)37288)) : (1872866649))));
                                var_18 = ((/* implicit */unsigned int) ((unsigned short) min((arr_5 [2U] [i_0 + 2] [i_0]), (arr_5 [i_0] [i_0 + 3] [i_0]))));
                                var_19 ^= ((/* implicit */int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)142))))), (((unsigned int) 2249600790429696LL)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_4]))))));
                                var_20 ^= ((/* implicit */unsigned short) max((-2249600790429674LL), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                                var_21 = ((/* implicit */int) min((min((((/* implicit */unsigned short) var_4)), ((unsigned short)1216))), (((/* implicit */unsigned short) max((arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 1]), (arr_8 [i_3 - 3] [i_3] [i_3 - 2] [i_3 + 1]))))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)6))));
                    var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (max((1401284429U), (((/* implicit */unsigned int) arr_5 [i_1] [(unsigned short)5] [(unsigned short)5])))) : (((unsigned int) (-2147483647 - 1))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */int) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) + (18446744073709551615ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_15)), (var_2))))))));
}
