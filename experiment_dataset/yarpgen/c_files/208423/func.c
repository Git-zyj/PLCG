/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208423
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) (short)27858)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_9)))))))));
        var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_2 [i_0])))))))), (((unsigned int) ((unsigned char) var_6)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [(unsigned short)6] [i_0] [i_3] = ((((unsigned int) min((((/* implicit */unsigned short) var_2)), (arr_2 [i_3])))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))));
                        var_19 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_9))));
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((_Bool) 2147483647));
                        var_20 = (!(((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) arr_2 [i_0]);
        var_22 += ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) > (min((var_10), (var_11)))));
    }
    var_23 += ((/* implicit */short) var_7);
    var_24 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (4364519902153512269LL)))), (var_4))), (((/* implicit */unsigned long long int) min((max((var_14), (var_7))), (max((var_14), (var_7))))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >> ((((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)121)) >= (((/* implicit */int) (signed char)-121))))))) + (6)))));
}
