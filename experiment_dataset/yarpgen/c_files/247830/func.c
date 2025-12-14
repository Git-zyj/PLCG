/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247830
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((max(((-(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_1])))) - (((/* implicit */int) min((var_9), (((/* implicit */signed char) max((var_12), (var_12)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                                arr_14 [i_0] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((((_Bool) ((_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 1])) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-60)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_5 [i_2])))))) : (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */signed char) min((((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_1] [(_Bool)1])))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_2] [i_0])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) ((signed char) ((signed char) var_3))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) min(((signed char)-105), (var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 += var_3;
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) max((var_13), (var_4))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)84))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) (signed char)106))))))));
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_6), ((signed char)-122)))) && (((/* implicit */_Bool) max((var_8), (var_10)))))) ? (((/* implicit */int) var_11)) : (((((((/* implicit */int) var_4)) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_13)), ((signed char)126)))) : (((/* implicit */int) var_15))))));
}
