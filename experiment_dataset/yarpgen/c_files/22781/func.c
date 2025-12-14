/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22781
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) + (min((((/* implicit */long long int) (~(var_11)))), (var_5)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~((+((-(((/* implicit */int) (unsigned char)192))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((min((2884136751587589370LL), (((((/* implicit */_Bool) (unsigned short)47689)) ? (-8657058006084555014LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))))))) | (((/* implicit */long long int) var_11)))))));
            var_21 = (~((-(((/* implicit */int) arr_0 [i_0 - 1])))));
            var_22 += ((/* implicit */unsigned char) var_3);
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))));
            var_24 = (-(max((var_12), (((/* implicit */long long int) var_11)))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_2] [i_2])))) ^ (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 1])), (arr_1 [i_0 + 1] [i_2])))) ? (min((((long long int) var_17)), (((/* implicit */long long int) ((-6457121326756849298LL) < (var_12)))))) : (((((/* implicit */_Bool) (~(var_9)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */int) (unsigned short)10872)))))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */int) var_6)), (min((var_8), (((/* implicit */int) min((var_13), (var_6)))))))))));
    var_27 += ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) 3532637445468398861LL)) ? (var_7) : (((/* implicit */int) var_1)))) > (((/* implicit */int) (unsigned short)41378))))) > (((/* implicit */int) ((unsigned short) var_18)))));
}
