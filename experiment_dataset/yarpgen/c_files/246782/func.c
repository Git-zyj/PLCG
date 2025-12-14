/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246782
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
    var_14 = ((((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) (short)-4958)) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)222))))) >> (((/* implicit */int) var_10)));
    var_15 += ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_12 [i_0] [i_1 - 1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((arr_2 [i_1 + 3] [i_1 - 1] [i_1 + 2]) ? (arr_5 [i_1 - 1]) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 3] [i_1 + 2])))) : (((/* implicit */int) ((unsigned char) (short)124)))));
                                arr_13 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(7)))) ? (((/* implicit */int) ((short) var_1))) : (min((((((/* implicit */int) var_10)) % (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_11)) ? (arr_11 [i_1] [i_1] [i_4]) : (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_1), ((((!(((/* implicit */_Bool) -1596936896)))) && (((/* implicit */_Bool) (+(536870911U))))))));
    var_19 = ((unsigned long long int) var_1);
}
