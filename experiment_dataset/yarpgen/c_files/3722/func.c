/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3722
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384)))))) ? (min((((((/* implicit */_Bool) var_10)) ? (var_6) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_8)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_4))))) | (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        var_12 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_4)) < (((/* implicit */int) var_0)))), (((var_2) < (var_8))))) ? (max((((((/* implicit */_Bool) var_0)) ? (var_1) : (var_1))), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (var_2) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (var_8))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_1) % (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_8))))))) ? (((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) var_0))))) + (max((((/* implicit */unsigned long long int) var_10)), (var_1))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (var_10) : (var_10))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))) % ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_9))))) : (max((((/* implicit */unsigned long long int) var_4)), (var_1)))))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_8)))) % (((/* implicit */int) arr_0 [i_1 - 1]))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))), (min((((/* implicit */unsigned long long int) var_10)), (var_6)))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2807159965U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (1487807330U))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1])))))));
        var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_4)), (var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))))));
        var_16 += ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_10)) ? (var_7) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (max((min((((/* implicit */unsigned long long int) var_4)), (var_7))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_10)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))))) % (((/* implicit */unsigned long long int) max((1191222586), (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_9))))))))));
        arr_10 [i_2] = (~(((/* implicit */int) var_0)));
        arr_11 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) | ((~(var_6))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_4))))) || (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) var_0))))));
    var_19 += ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) : (min((var_7), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((max((((/* implicit */unsigned long long int) var_4)), (var_7))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (var_8))))));
}
