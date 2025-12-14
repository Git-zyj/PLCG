/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214111
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
    var_13 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 2544895048U))))) * (((/* implicit */int) (_Bool)0))))), (var_12)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_1] [(signed char)2] [10] [12LL] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((arr_3 [i_0] [5ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (836505041U))))), (var_1)));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])))))))) != ((~(((/* implicit */int) (unsigned char)249)))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((arr_2 [i_3 - 3]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2] [6])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)17))))))) ? (max((((/* implicit */int) max((arr_6 [i_1] [i_1] [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_0 [i_0] [8ULL])))))) : (min(((~(((/* implicit */int) arr_6 [i_1] [i_1] [8] [i_3])))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_3 - 2] [i_4])) > (((/* implicit */int) (short)-8192)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6144))));
                }
            } 
        } 
    } 
    var_15 = (+(((/* implicit */int) var_5)));
}
