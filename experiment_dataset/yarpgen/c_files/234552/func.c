/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234552
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_18 = (+(-802795090));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)29328)) <= (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [(unsigned short)12] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-29329)) && (((/* implicit */_Bool) (short)-29329)))))));
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (802795089) : (((/* implicit */int) (signed char)(-127 - 1)))));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_22 *= ((/* implicit */_Bool) ((((((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) var_15)))) + (2147483647))) << (((((/* implicit */int) max((arr_3 [(short)9]), (arr_3 [i_1])))) - (1)))));
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (arr_4 [11])))))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_1])))) > ((-(((/* implicit */int) var_10))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (94)))))))))));
        }
        var_23 = ((/* implicit */unsigned char) var_17);
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((11713426266159917509ULL), (((/* implicit */unsigned long long int) (short)120)))))));
}
