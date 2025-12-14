/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216463
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
    var_14 = var_8;
    var_15 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_11)))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_10) ? (var_6) : (var_6))))))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_5)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (max((arr_0 [i_0]), (arr_1 [(short)4])))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((min((arr_1 [0LL]), (arr_1 [(signed char)6]))) / (max((arr_1 [8]), (arr_1 [4LL]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) ((arr_3 [i_1]) * (arr_3 [i_1]))))), ((~(arr_5 [i_1])))));
        var_19 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) arr_4 [i_1 + 1])), (((long long int) arr_4 [i_1 - 1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [9LL])) : (((/* implicit */int) (unsigned short)65535)))), (min((((/* implicit */int) var_1)), (var_4)))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) 0))))) ? (arr_3 [i_2 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (6252031116854211835LL)))))));
            arr_10 [i_1 - 1] [i_1] [i_1] = arr_5 [i_1];
            var_21 = ((/* implicit */int) ((arr_3 [i_2]) % (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_1 + 1])))));
        }
        for (unsigned short i_3 = 2; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_8), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1]))) >= (arr_5 [i_1])))))))));
            var_23 += ((/* implicit */unsigned int) arr_5 [i_3]);
            arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_3 - 2])) > (((/* implicit */int) arr_8 [i_3 - 2])))) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_4 [i_1]))));
        }
    }
    var_24 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_2)))) % ((-(((/* implicit */int) ((unsigned short) var_0)))))));
}
