/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238891
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_11)) : (2883850646U))), (((/* implicit */unsigned int) max((var_15), (((/* implicit */signed char) var_6))))))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (-948747347)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((2355431569U), (((/* implicit */unsigned int) ((max((arr_2 [14U] [i_4]), (-1127641669))) / (((/* implicit */int) (signed char)-93)))))));
                                var_20 -= ((/* implicit */unsigned short) (((~(arr_8 [i_0] [i_0 + 2] [i_1 - 1] [i_2 - 1] [i_2] [20U]))) == (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 + 3]), (arr_1 [4LL])))))));
                                var_21 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) ^ (2147483647)))) ^ (arr_7 [i_2] [i_2 + 1] [i_2 - 1])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) max((((unsigned long long int) 8641856473120215853ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) arr_11 [i_0 + 4] [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_0])) : (882706187U))))));
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_0 - 1] [13] [i_2]) | (((/* implicit */unsigned long long int) -1996217684))))) || (((/* implicit */_Bool) ((long long int) arr_10 [i_2 + 1] [i_1 + 1] [i_2 - 1] [(unsigned short)11])))));
                    var_24 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned char) 882706187U))) ? (((int) 2837715590303269594ULL)) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((int) arr_9 [i_0 + 4] [(unsigned short)3] [i_1 + 1]))));
                }
            } 
        } 
    } 
}
