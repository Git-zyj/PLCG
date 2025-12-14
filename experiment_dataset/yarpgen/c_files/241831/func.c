/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241831
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(var_10))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((8325828995783531770LL), (((/* implicit */long long int) var_10)))))))) : (((/* implicit */int) var_16))));
    var_19 += ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_5))), (((/* implicit */unsigned long long int) ((signed char) var_9)))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))))) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) var_9)), (-4011929061424321310LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)129)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(var_5)))))));
                var_21 = ((/* implicit */long long int) (-(((var_12) ^ (((/* implicit */int) ((unsigned char) var_4)))))));
                arr_8 [i_0] [i_1] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-8325828995783531770LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)104)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-581911236774635836LL))))) : ((((!(((/* implicit */_Bool) var_10)))) ? (var_0) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) - (var_11)))))));
                arr_9 [i_0] &= ((/* implicit */signed char) (!(((max((var_5), (((/* implicit */unsigned long long int) var_15)))) > (((/* implicit */unsigned long long int) (+(var_10))))))));
            }
        } 
    } 
}
