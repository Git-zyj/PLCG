/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212322
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
    var_14 *= ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */signed char) ((unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) var_10)) > (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((unsigned char) var_10)))));
        var_18 = ((int) arr_1 [i_0 + 1]);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            var_19 &= ((/* implicit */unsigned char) var_12);
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_2 [i_0])))) != ((+(((/* implicit */int) var_6))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_12)))) >= (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)117)))))))));
            arr_5 [i_1] [i_1] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (2660183385U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1])))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_1);
            arr_10 [i_2] = ((/* implicit */unsigned short) (+(arr_1 [i_0 + 1])));
            arr_11 [i_0 + 1] [i_2] [i_0] = ((/* implicit */unsigned int) var_0);
        }
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
        {
            arr_14 [i_0 + 1] [i_3 - 2] = ((/* implicit */unsigned short) ((arr_12 [i_3 + 2] [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_18 [(_Bool)1] [i_3] |= ((/* implicit */_Bool) ((unsigned short) arr_12 [i_3 - 2] [i_0 + 1]));
                var_21 = ((/* implicit */signed char) arr_17 [i_0] [i_0]);
            }
        }
        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 4; i_6 < 21; i_6 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [13ULL])))))));
                arr_23 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1)))));
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4229197655U)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (short)32753))))) >= (16564260202687032551ULL)));
                arr_24 [i_0] [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_5 - 2]))));
            }
            var_24 = ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 - 1]))));
            var_25 ^= ((/* implicit */short) arr_15 [8] [i_5] [i_5]);
        }
        var_26 *= ((/* implicit */signed char) ((_Bool) var_4));
        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (16564260202687032551ULL) : (((/* implicit */unsigned long long int) 65769651U))));
    }
    var_28 = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) var_11)))))) < (((/* implicit */int) var_6))));
}
