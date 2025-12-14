/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42888
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
    var_16 = ((/* implicit */signed char) max((min((max((var_5), (((/* implicit */unsigned long long int) (signed char)-15)))), (((/* implicit */unsigned long long int) ((100806807897567051ULL) < (((/* implicit */unsigned long long int) -1LL))))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_0)))) <= (var_12))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (short)2670)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8637887683875162839LL)) ? (1755620749) : (((/* implicit */int) (short)-2674))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 1189522049U)) : (5175675311460871622ULL)))) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_4] [i_3] [i_1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13170))))) ? (((unsigned int) var_2)) : (var_13)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_15))))))));
}
