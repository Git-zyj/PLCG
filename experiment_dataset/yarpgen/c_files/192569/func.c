/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192569
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [(unsigned short)7] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [(unsigned short)3] [15ULL] [(_Bool)1] [i_4]));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))), (arr_2 [i_0] [i_3])))) || (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])) || ((!(((/* implicit */_Bool) (unsigned char)103)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_1);
                                var_19 = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_6] [i_7])))))) / (((/* implicit */int) (unsigned char)101))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6])))))) % (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0] [i_6] [i_5]) : (arr_15 [i_7] [i_5] [i_5])))));
                            }
                        } 
                    } 
                } 
                arr_23 [(short)0] [4U] = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_0]);
                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_7), (var_16))), (((unsigned short) 18446744073709551615ULL))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -9223372036854775784LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((23ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
}
