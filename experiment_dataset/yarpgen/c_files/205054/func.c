/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205054
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)16887)))) & (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (short)16887)))))) <= (((((((/* implicit */int) arr_0 [(unsigned short)1] [i_0])) & (((/* implicit */int) (unsigned char)46)))) & (((((/* implicit */int) arr_1 [(short)15] [i_0])) & (((/* implicit */int) (short)16887))))))));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) var_0)))) | (((((/* implicit */int) (unsigned short)8734)) | (((/* implicit */int) (signed char)-43)))))) < (((/* implicit */int) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [(signed char)13])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)46205))))))))));
    }
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-16888)) || (((/* implicit */_Bool) var_9))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (var_4))))))) / (((((var_7) << (((((/* implicit */int) var_6)) - (23))))) >> (((((((/* implicit */int) (short)-16888)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (59298))))))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)8734)) < (((/* implicit */int) (unsigned char)27)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)56802)))))))) << (((((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (var_2)))) ^ (((var_8) | (((/* implicit */unsigned int) var_2)))))) - (1216495714U)))));
}
