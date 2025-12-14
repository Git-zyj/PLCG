/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28656
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
    var_15 = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)26)))) % (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (-(((int) var_8))));
                    arr_8 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((unsigned long long int) (signed char)-95)) == (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_1] [0U]) / (((/* implicit */int) arr_6 [i_2])))))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)9503)) > (arr_5 [i_0] [i_1] [i_1])))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_7 [i_0] [i_0] [i_1] [i_2]))) ? (((((/* implicit */int) arr_0 [i_0])) / (arr_5 [i_0] [i_2] [i_2]))) : (((/* implicit */int) arr_0 [i_0]))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((max(((short)9503), (((/* implicit */short) var_3)))), ((short)-9503))))));
                    arr_9 [i_0] [1U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)9492)) > (((/* implicit */int) (short)-9536))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)-48)), ((short)9519)))) | (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)30))))));
        arr_11 [15ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_14)) >> (((/* implicit */int) (signed char)31)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-9504)) : (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_4))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) (short)26881)) : (((/* implicit */int) arr_12 [(signed char)2])))), (((/* implicit */int) var_14))))) ? (((/* implicit */int) min((arr_12 [i_3]), (arr_12 [i_3])))) : (((/* implicit */int) var_11))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9504)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_3])) : (arr_14 [i_3])))) ? (((((/* implicit */_Bool) -1855513185)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))) : ((-(arr_14 [i_3]))))) : (((/* implicit */int) var_10))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)17)), (var_9)))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (short)-9504)) : (1761907492))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_14)) - (19918)))))))) ? (arr_3 [i_4] [(short)19] [i_4]) : (28U)));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((18446744073709551603ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)9501)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9514)) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))) : (max(((+(arr_7 [(short)3] [(unsigned char)7] [i_4] [i_4]))), (((/* implicit */unsigned long long int) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    }
    var_23 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9528)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-25138)))))));
        arr_22 [i_5] = ((/* implicit */short) ((arr_1 [i_5 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 4; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) var_4)))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6 + 3] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_18 [i_6 - 3]))))));
        var_27 = ((arr_1 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6]))));
        arr_26 [i_6 - 2] [i_6] = ((signed char) arr_21 [i_6 + 2] [i_6 + 3]);
    }
}
