/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24662
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
    var_14 = var_0;
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) 261888))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (((+(((arr_8 [i_0] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)-74)))))) >> ((((((_Bool)1) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_3 [i_0])))) - (47)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - ((~(((/* implicit */int) (short)32750))))));
                                var_18 -= ((/* implicit */int) (short)-16837);
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_6 [i_0] [i_2] [i_4])), (var_13))), ((-(((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : ((-(2147483648U)))));
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) (+(4018259310U)));
                    var_22 &= ((/* implicit */unsigned int) arr_15 [i_5] [i_1]);
                }
                arr_18 [i_0] = ((/* implicit */short) min((((/* implicit */int) var_2)), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_1] [i_1])), ((unsigned short)8746)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 12626935567544010823ULL)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_7))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_3))))) : (max((2335810536U), (((/* implicit */unsigned int) (signed char)87))))))));
}
