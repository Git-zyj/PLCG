/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233965
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
    var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))));
    var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)98)))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (var_12) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_2))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_4 [i_0 - 2] [i_1]) % (((/* implicit */int) arr_1 [i_1] [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_1))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)4] [i_1]))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_1]))));
            arr_6 [i_0 - 1] [i_0] [i_0] = ((arr_2 [i_0] [i_0 - 2] [(signed char)5]) % (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 2] [(signed char)0] [i_1]))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_0 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0 - 2] [i_0 - 2]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0 - 1]);
                    var_25 = ((/* implicit */long long int) (-(var_15)));
                    arr_12 [i_0] [i_1] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-32))));
                }
                var_26 -= ((/* implicit */short) ((-774178176) <= (1896399660)));
                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned long long int) var_3)))));
            var_29 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_4])), ((-(arr_8 [i_0 + 1] [i_0] [i_4] [i_4]))))));
        }
        arr_16 [i_0] = ((/* implicit */short) ((arr_8 [i_0] [i_0] [2ULL] [i_0 - 1]) | (max((((/* implicit */unsigned int) (short)-25404)), (2156204576U)))));
        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) 3513526055U))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_5] [i_5]), (var_1)))) ? ((+(arr_14 [i_5] [i_5]))) : ((~(arr_14 [i_5] [i_5])))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_13 [i_5] [3ULL] [i_5]), (((/* implicit */short) arr_15 [i_5] [i_5] [i_5]))))))))) == (arr_8 [i_5] [(signed char)13] [i_5] [i_5])));
    }
    var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)104))))) ? ((-(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_13)))))), ((~((~(((/* implicit */int) (unsigned short)0))))))));
}
