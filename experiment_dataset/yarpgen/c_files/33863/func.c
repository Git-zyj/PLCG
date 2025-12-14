/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33863
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
    var_16 *= ((/* implicit */_Bool) -1);
    var_17 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) var_12);
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 4063838191U)) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [11U] [i_0]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_3 [i_0]))))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (374936763828885554ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (min((arr_2 [i_1]), (((/* implicit */unsigned int) arr_1 [(_Bool)1])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [(short)22]))))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                arr_9 [i_3] = ((/* implicit */unsigned short) 2339469070335586651LL);
                arr_10 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) (-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)31549))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_6 [0ULL] [i_2])))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_15 [11U] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2]));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_2 - 4] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_11 [i_4]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_2] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)17690))))));
                arr_16 [i_0] = ((/* implicit */unsigned int) var_9);
                var_23 |= ((/* implicit */short) (+(((((/* implicit */_Bool) 1696707638U)) ? (var_8) : (18446744073709551608ULL)))));
            }
            var_24 = ((/* implicit */unsigned short) max((((arr_6 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) (-(arr_11 [i_0])))))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_2] [i_2 - 1]))));
        }
        var_25 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)171))))) ? (-9009051441787793832LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))))));
        var_26 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (((unsigned int) (_Bool)1))))));
    }
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_1)))))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) min((-9009051441787793832LL), (((/* implicit */long long int) (unsigned char)245))))))))));
    var_28 = ((/* implicit */_Bool) (~(var_7)));
}
