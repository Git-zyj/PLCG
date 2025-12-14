/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239141
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 7421464348023319529ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (0ULL))))) % (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(var_1))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [10ULL] [i_2 + 1] [i_3])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [1ULL] [i_0]))) >= (var_10))))))) : (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775787LL)) ? (var_8) : (var_6)))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1])) ? (var_1) : (18446744073709551613ULL)))))));
                            var_14 = ((((((/* implicit */unsigned long long int) var_8)) - ((+(var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) var_6);
                                arr_17 [i_6] [i_5] [i_4 - 1] [i_1 + 1] [i_1 + 4] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                                var_16 += ((/* implicit */_Bool) ((unsigned char) min((arr_3 [i_1 + 1] [i_4 - 2]), (arr_3 [i_1 + 1] [i_4 - 2]))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1 + 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((((/* implicit */long long int) arr_7 [i_1 - 1] [i_1])), ((-(9223372036854775803LL))))) : (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_8)))), ((((+(var_1))) == (min((((/* implicit */unsigned long long int) (unsigned char)15)), (var_10)))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_3))));
}
