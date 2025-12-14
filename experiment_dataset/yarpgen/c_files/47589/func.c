/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47589
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
    var_19 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_17))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (4258520146U)))) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_16)))) : (-430145008)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) -430144999)) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((min((((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) & (arr_0 [i_0] [i_0]))), (min((var_14), (arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2))))) : (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (((_Bool)0) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_6))))))));
            var_21 = ((/* implicit */long long int) var_6);
            var_22 = ((/* implicit */signed char) var_2);
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) max((((int) arr_6 [i_0])), (((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (arr_0 [i_2] [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_6 [i_0]))));
        }
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))));
        var_25 = ((/* implicit */unsigned char) arr_6 [i_3]);
        arr_13 [(_Bool)1] |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (7101343711994901653LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))))) ? (((/* implicit */int) ((signed char) var_1))) : ((+(arr_11 [i_3] [(_Bool)1])))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_26 = (~(((((/* implicit */_Bool) ((long long int) arr_10 [i_4]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9U] [i_4]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
        var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((-430145008), (arr_14 [i_4])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
        var_28 -= ((/* implicit */int) (_Bool)1);
        var_29 &= ((/* implicit */unsigned short) arr_15 [i_4]);
    }
    var_30 &= ((/* implicit */unsigned char) ((unsigned long long int) var_2));
}
