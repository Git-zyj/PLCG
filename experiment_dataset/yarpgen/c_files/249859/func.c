/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249859
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
    var_11 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) var_4)))))) : (((var_4) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 871051871)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_0))), (((/* implicit */unsigned long long int) (-(arr_4 [i_1 + 1] [i_0]))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1))))), (((unsigned long long int) (unsigned char)7)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 1])))))));
                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_3)))) - (((/* implicit */int) (unsigned char)41))));
                var_15 = min((((/* implicit */long long int) ((signed char) max(((unsigned char)119), (((/* implicit */unsigned char) var_3)))))), (var_6));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_2])))) / (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (unsigned short)61248)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_6 [i_3])))))))));
                var_17 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                arr_9 [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)248))))));
                arr_10 [(unsigned char)7] [10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((min((var_0), (((((/* implicit */_Bool) 5244187783210124775LL)) ? (var_7) : (var_7))))), (10278594648296946549ULL)));
}
