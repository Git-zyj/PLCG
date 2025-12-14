/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227562
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
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [6LL] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (-8342764681392699348LL) : (6387340804932953886LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1]))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(min((((((/* implicit */unsigned long long int) 2017612633061982208LL)) % (14ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_1 + 1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (-(4964294508041990066ULL))))) ? (max((((((/* implicit */_Bool) (unsigned char)74)) ? (12390328763753085855ULL) : (4964294508041990055ULL))), (((/* implicit */unsigned long long int) ((long long int) 576460752303423456ULL))))) : (((((/* implicit */_Bool) 6316655194006507981LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42565))) : (3343489521061315983ULL)))));
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((-4187043641845844690LL) / (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])))) + (-6084512166985426231LL)))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775791LL)) ? (var_10) : (var_15)))), (((((/* implicit */_Bool) 13482449565667561534ULL)) ? (3343489521061315997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15220)))))))));
                            var_16 = ((/* implicit */signed char) 15330905884314198521ULL);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) max((1834111106), (7))))))), (arr_1 [i_0] [i_1])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
}
