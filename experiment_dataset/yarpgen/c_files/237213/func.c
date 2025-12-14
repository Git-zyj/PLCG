/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237213
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 4])) | (var_2)));
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_3 [i_0])))));
        var_18 = ((/* implicit */int) (unsigned short)65535);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned long long int) (signed char)82)) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_6 [i_1]))))))) >= (((((/* implicit */int) arr_7 [i_1])) >> (((/* implicit */int) ((3768228266U) >= (3650720623U))))))));
        var_19 = ((/* implicit */unsigned int) (-(max((((unsigned long long int) arr_5 [i_1])), (((/* implicit */unsigned long long int) (signed char)11))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_20 += ((/* implicit */unsigned long long int) ((unsigned char) arr_18 [(unsigned char)2] [i_5 - 4] [i_5 + 1] [i_5 - 4] [(unsigned char)2] [(unsigned char)2]));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 3; i_6 < 7; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_6 - 1]));
                            var_22 = ((((/* implicit */_Bool) arr_5 [i_6 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) : (arr_6 [i_2]));
                        }
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 - 3] [i_5 - 4] [i_5 - 1] [i_5 + 1] [i_5 - 3] [i_5 + 1])) ? (arr_16 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 4] [i_5 + 1]) : (arr_16 [i_5 - 4] [i_5 - 4] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2])));
                        var_24 *= ((/* implicit */unsigned int) var_2);
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) (signed char)0));
                    }
                } 
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(arr_13 [i_2])));
        arr_23 [i_2] = ((/* implicit */unsigned short) ((arr_13 [i_2]) <= (arr_13 [i_2])));
    }
    var_26 ^= ((/* implicit */unsigned char) var_13);
    var_27 = var_0;
    /* LoopSeq 1 */
    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_14)), (arr_5 [i_7]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_28 = (+(min((max((((/* implicit */unsigned int) arr_18 [i_7] [i_7] [(signed char)0] [i_7] [i_7] [i_7 + 1])), (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) -1596558676)))));
    }
}
