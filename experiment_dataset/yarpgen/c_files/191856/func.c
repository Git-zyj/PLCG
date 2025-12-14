/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191856
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
    var_11 = -1LL;
    var_12 = ((/* implicit */long long int) ((unsigned int) var_8));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
        {
            var_13 ^= ((/* implicit */unsigned int) (short)30547);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_6 [i_1] [i_2] = ((/* implicit */int) var_7);
                arr_7 [(unsigned char)5] [i_1] [i_1] [4U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_1 [i_0 - 2])) - (635500984U)));
            }
            var_14 *= ((/* implicit */unsigned short) 3659466312U);
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_4]))) : ((+(18014398509481983LL)))));
                arr_16 [i_3] [i_3 + 2] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)8] [i_3] [i_4]))))))) % (((((/* implicit */_Bool) var_8)) ? (635500994U) : (((/* implicit */unsigned int) var_9)))))), (max((((((/* implicit */_Bool) (short)-23238)) ? (1073610752U) : (3659466312U))), (((/* implicit */unsigned int) max((arr_1 [i_0]), (arr_3 [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) arr_3 [i_6] [i_3])) ? ((-(((/* implicit */int) (unsigned char)196)))) : ((~(((/* implicit */int) arr_17 [6] [i_3] [i_4] [i_5 - 2])))));
                            var_16 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (unsigned char)196)), (arr_18 [i_0 - 1] [i_0] [(_Bool)1] [i_0] [i_3 - 1] [i_5 + 2])))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_0 - 1] [i_5 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)6135)) / (((/* implicit */int) arr_2 [i_0 - 1]))))) : (((((/* implicit */_Bool) (signed char)14)) ? (635500974U) : (var_3)))));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0])) / (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_2 [i_0 - 1]))))))) || (((/* implicit */_Bool) arr_14 [(_Bool)1] [i_4]))));
                            arr_21 [i_0] [i_3] [i_6] [i_4] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)60)), ((short)(-32767 - 1)))))) / (((var_5) / (188460143U)))))), (((min((-1LL), (((/* implicit */long long int) -720489131)))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50107)) - (var_9))))))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned char) var_1);
            }
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_8 [i_0] [5LL] [i_3])) ? (((((/* implicit */_Bool) 1966080U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (188460143U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1966080U) < (4153027480U))))))))))));
        }
        var_21 |= ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    }
    var_22 = ((/* implicit */int) var_10);
}
