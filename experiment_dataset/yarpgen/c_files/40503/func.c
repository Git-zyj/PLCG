/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40503
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((signed char) max((min((((/* implicit */unsigned char) var_2)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_7))))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0]), ((unsigned char)188)))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_10))))))), (((signed char) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(min(((+(-4031418933266080820LL))), (((/* implicit */long long int) (signed char)28)))))))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_18 = ((/* implicit */long long int) arr_5 [i_1]);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((+(arr_0 [i_1 - 2]))) - (((/* implicit */int) ((_Bool) arr_0 [i_1 + 2]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1]);
        }
        for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            arr_9 [i_0] [14ULL] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) | (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) arr_2 [i_0] [i_2])), (var_4)))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) 1092839312)) ? (1092839312) : ((-(((/* implicit */int) (signed char)117))))))));
            var_21 += ((/* implicit */signed char) ((short) var_0));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) arr_7 [i_2 - 1] [12LL])) : (((/* implicit */int) arr_7 [i_2 - 1] [(_Bool)1])))) < (((/* implicit */int) max((arr_7 [i_2 - 3] [(short)0]), (var_11)))))))));
        }
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [4])))) * ((~(((/* implicit */int) arr_1 [2ULL])))))))));
            var_24 = ((/* implicit */unsigned short) ((arr_5 [(unsigned char)17]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_3] [i_0]))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))) ^ (2526568136U)))))))));
        }
    }
    var_25 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
}
