/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26197
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
    var_17 &= ((/* implicit */_Bool) ((((int) max((321782311381216374LL), (((/* implicit */long long int) (unsigned short)29))))) ^ (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_10)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> ((((-(((/* implicit */int) var_0)))) + (47034))))) : (((/* implicit */int) (signed char)-25))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(min((((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)7621)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) var_2)))))))));
            var_19 &= ((/* implicit */unsigned int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) var_2)))) + (2147483647))) >> (((min((var_9), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))) - (572451343U))))))));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)55))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) 3817602148U)))))) : (max((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (arr_0 [i_0 - 2] [i_0 - 1])))));
        }
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [22] [22]))))) ? (((/* implicit */int) arr_9 [(unsigned char)2])) : (((var_8) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2]))))))) ? (max((((/* implicit */unsigned int) ((unsigned short) var_13))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_9))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 1])) > (var_10)))), (min((var_7), (((/* implicit */int) var_11)))))))));
        var_22 = ((/* implicit */unsigned int) arr_0 [i_2 + 3] [i_2 + 1]);
        var_23 = ((/* implicit */short) (-(((/* implicit */int) var_12))));
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)112))));
        var_24 += ((unsigned short) ((arr_0 [i_3 + 3] [i_3 - 1]) / (arr_0 [i_3 + 3] [i_3 - 1])));
    }
    var_25 = ((/* implicit */unsigned short) var_8);
}
