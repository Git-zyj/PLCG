/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29486
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_3] [i_2 - 2] [i_1 - 1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_2 + 2] [i_0]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) var_5)), (var_11)))))))));
                        arr_9 [i_0] [i_0] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (2287828610704211968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))), ((((_Bool)1) ? (12733057579727311389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_18 = ((/* implicit */int) (+(min((((4294967295U) & (var_9))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        for (signed char i_5 = 3; i_5 < 22; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_4])))) : (13743134628854581436ULL))), (((/* implicit */unsigned long long int) -2025895531))));
                var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_4] [i_4])), (13615669230000188390ULL)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (1944583954512083201ULL))) : (((/* implicit */unsigned long long int) var_4))))));
                arr_14 [i_4] [i_4] = ((/* implicit */signed char) var_4);
                var_21 = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) min((1U), (((/* implicit */unsigned int) arr_11 [i_4] [i_5]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_9);
}
