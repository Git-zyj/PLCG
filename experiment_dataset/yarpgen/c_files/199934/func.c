/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199934
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_13))));
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)12))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_4 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) | (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (arr_3 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_4)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 156243097)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) / (1152514412U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (arr_8 [i_2])))))))) ? (((/* implicit */unsigned long long int) 6840341375095550912LL)) : (arr_7 [i_1])));
            var_22 = ((/* implicit */short) (((~(var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((arr_8 [i_1]), (var_12))))))));
            var_23 ^= ((/* implicit */signed char) ((var_9) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))))));
            var_24 = ((/* implicit */long long int) ((unsigned short) arr_7 [i_1]));
            arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((((/* implicit */unsigned long long int) 469762048)) / (arr_7 [i_2])))));
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned int) var_11));
                var_25 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2612076551U)))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((187040616102185834ULL) != (((/* implicit */unsigned long long int) -2147483630))))))))));
            }
            var_26 = (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_1] [i_3])) + (31895))) - (3)))))));
        }
        for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_1]))))) ? ((-(1484497559U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])))))));
            arr_22 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (~(max(((+(arr_4 [i_1] [i_5]))), (((/* implicit */unsigned long long int) (short)-18174))))));
        }
        arr_23 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))))))))));
        arr_24 [i_1] = ((/* implicit */short) (+(65535U)));
    }
    var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-12635)))))));
}
