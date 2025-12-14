/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225801
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (var_1)));
    var_13 = ((/* implicit */_Bool) ((int) (+(((((/* implicit */_Bool) (short)29506)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (short)29506)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_3);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_6 [22] [4LL] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) / (arr_3 [i_0] [(unsigned char)20] [i_0])))) != (max((arr_4 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 + 1])))));
            arr_7 [(unsigned char)18] [(unsigned char)10] [(unsigned short)16] &= ((/* implicit */unsigned int) ((((-967656814) + (((/* implicit */int) (short)29502)))) <= (((/* implicit */int) (_Bool)1))));
            var_14 = ((/* implicit */unsigned char) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -967656804)), (arr_3 [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)-1024)) + (1035))))) : (((967656827) + (((/* implicit */int) var_6)))))))));
            var_15 += ((/* implicit */unsigned int) ((0LL) != (((/* implicit */long long int) -967656814))));
        }
        for (signed char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [i_2] [i_0]) : (((/* implicit */int) arr_9 [i_0]))))), (arr_10 [i_0] [i_2] [i_0])))) ? (((/* implicit */int) (short)960)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2])))))));
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (short)29506);
        }
        arr_13 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_8))));
    }
    var_18 = ((/* implicit */signed char) (~(((((var_6) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) <= (((/* implicit */long long int) var_7)))))) : (var_5)))));
}
