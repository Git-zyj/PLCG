/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36462
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) - (((/* implicit */int) var_11))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((long long int) arr_8 [i_0 - 1] [i_1] [i_1]))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3] [(_Bool)1] [8LL] [8LL])) | (((/* implicit */int) (unsigned short)65535))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (var_3)));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) 3611084609U));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22)) ? (((((/* implicit */_Bool) arr_10 [(signed char)2] [(signed char)2])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))));
        var_19 += ((/* implicit */unsigned char) ((unsigned int) ((int) var_10)));
    }
    var_20 = ((/* implicit */unsigned short) ((int) var_4));
    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_4))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))))) | (((((/* implicit */_Bool) ((int) var_6))) ? (min((((/* implicit */unsigned long long int) (unsigned short)4)), (18446744073709551613ULL))) : (((((/* implicit */_Bool) (short)21129)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
}
