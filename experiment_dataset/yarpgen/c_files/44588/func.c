/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44588
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((26ULL) & (((/* implicit */unsigned long long int) 1927829935U)))))) : (((/* implicit */unsigned long long int) (~(2239712102U))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) var_14);
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)83)) : (-1015039128)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)23974)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (arr_2 [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_2 [i_1 + 2] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0 - 1] [1U])), ((~(((/* implicit */int) arr_13 [i_0] [i_0 - 1]))))));
                                var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [3] [i_1] [i_2] [(signed char)4] [i_4])) ? (var_10) : (((/* implicit */long long int) -1308368995))))), (min((((/* implicit */unsigned long long int) 1464867024U)), (6513324222314511186ULL))))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_2])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))), (arr_3 [i_0 - 1] [i_1 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
