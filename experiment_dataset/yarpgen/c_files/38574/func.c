/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38574
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
    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)242)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)240)))) : (((((/* implicit */_Bool) 465163248U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (0U))))) : (((((/* implicit */_Bool) max((var_9), (3626718973U)))) ? (max((var_4), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3128026914U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (2884657811U))), (max((((/* implicit */unsigned int) (unsigned char)195)), (1505026802U)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (max((((/* implicit */unsigned int) var_2)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))))) : (max((((unsigned int) var_3)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (var_9)))))));
    var_21 |= ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) var_7)) ? (var_9) : (var_0))), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)64)) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) 3629568463U)) ? (805087125U) : (4051193310U))) : (((unsigned int) max((arr_0 [i_0] [i_0]), (arr_3 [i_0]))))));
                arr_4 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) 3070883678U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))));
                arr_5 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((((/* implicit */_Bool) 3028277213U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) : (3604286333U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) : (var_14)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 6U)))))) : (((unsigned int) max(((unsigned char)232), ((unsigned char)94))))));
            }
        } 
    } 
}
