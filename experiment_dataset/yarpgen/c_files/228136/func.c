/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228136
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 340743069U))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) min(((unsigned short)20643), (((/* implicit */unsigned short) (unsigned char)255)))))))), (((max((var_8), (((/* implicit */unsigned int) var_9)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_3 [i_0])));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5404151835659279651LL)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (short)32767))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_0 [i_1] [(short)1])), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [4]))))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) var_4);
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_8 [i_2] [i_2])), (340743058U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [(short)8] [(_Bool)1]) + (2061814967)))) ? (((/* implicit */int) ((signed char) arr_2 [i_2 + 2] [i_1]))) : ((-(((/* implicit */int) var_6)))))))));
        }
        arr_12 [i_1] = ((/* implicit */_Bool) arr_5 [i_1]);
        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (9572091U)));
    }
    var_23 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2792484007U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)66)) && (((/* implicit */_Bool) -1911286484))))) : (((/* implicit */int) ((((/* implicit */_Bool) -183386740352947232LL)) && (((/* implicit */_Bool) (unsigned char)255)))))))) || (((/* implicit */_Bool) arr_13 [i_3] [i_3]))));
        arr_17 [i_3] [i_3] = ((/* implicit */_Bool) min((4294967278U), (1351440184U)));
        var_24 -= ((/* implicit */unsigned int) (-(min((((/* implicit */int) (short)5052)), (((((/* implicit */int) (_Bool)0)) * (arr_15 [i_3])))))));
        var_25 = ((/* implicit */signed char) (((-(arr_13 [i_3] [i_3]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((_Bool) var_13)), ((!(((/* implicit */_Bool) var_2))))))))));
    }
    var_26 = ((/* implicit */unsigned short) var_0);
}
