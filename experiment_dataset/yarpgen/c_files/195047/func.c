/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195047
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (unsigned char)110)) - (((/* implicit */int) (unsigned char)131))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [(_Bool)1] [i_1] &= ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
            var_19 = ((/* implicit */_Bool) var_2);
        }
        var_20 |= ((/* implicit */signed char) ((((unsigned long long int) var_16)) >> (((/* implicit */int) arr_1 [(unsigned short)2]))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) != (264949697U)))), (arr_1 [(unsigned char)14])))) ^ (((((((((/* implicit */_Bool) arr_1 [(unsigned char)14])) ? (-855418273) : (((/* implicit */int) arr_4 [i_2] [i_2] [(unsigned short)0])))) + (2147483647))) >> ((((-(var_3))) - (1122307658645653586ULL)))))));
        arr_11 [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)156)), (((((/* implicit */_Bool) arr_9 [4ULL] [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */int) var_9))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_15 [(_Bool)0] = ((/* implicit */int) max((10917070472340653454ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 264949697U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)23342)))))));
        var_21 *= ((/* implicit */unsigned long long int) max(((((~(arr_9 [i_3] [(_Bool)1]))) ^ (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (var_1) : (((/* implicit */int) (unsigned short)14089))))))));
        arr_16 [8ULL] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_3] [i_3])) <= (((/* implicit */int) arr_8 [i_3] [(unsigned short)16])))) ? (3569412217U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [4ULL])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)78)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) 0)));
    }
}
