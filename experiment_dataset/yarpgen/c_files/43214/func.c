/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43214
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5422985821743835772LL))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))))));
    var_14 = ((/* implicit */signed char) ((((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (var_1) : (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_9))) : (((/* implicit */int) max((var_12), (var_12))))))) : (((((/* implicit */_Bool) 3486094563U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32278))))) : ((~(var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                var_15 -= ((/* implicit */unsigned char) min((((/* implicit */short) max(((signed char)68), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))))), (((short) var_12))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) var_7))))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)2])) : (((/* implicit */int) var_5)))) >> (((((/* implicit */int) (unsigned short)21738)) - (21725))))) : (((/* implicit */int) var_8))));
                var_16 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)38)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87)))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) 3560952532484512112ULL))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-39)))))))));
            }
        } 
    } 
}
