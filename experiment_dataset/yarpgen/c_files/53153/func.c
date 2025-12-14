/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53153
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (~((-9223372036854775807LL - 1LL))));
        var_17 = ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_18 |= ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) arr_11 [i_1])) ? (1270329400) : (var_13))))), (((/* implicit */int) var_4))));
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_3])) / (((/* implicit */int) arr_8 [i_1])))) >> (((((/* implicit */int) (_Bool)1)) % (1308461136)))));
                        var_20 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_3 [i_4]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            arr_18 [i_5] = ((/* implicit */int) (~(((((unsigned int) arr_0 [i_5])) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_4))))))))));
            arr_19 [(_Bool)1] [(_Bool)1] |= (~(((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (-9223372036854775804LL))) / (max((var_3), (((/* implicit */long long int) arr_6 [i_1] [i_5])))))));
            var_21 = ((/* implicit */unsigned short) (-(((6391985584720723249LL) | (((/* implicit */long long int) -1308461123))))));
        }
        arr_20 [i_1] = ((/* implicit */int) max((((((arr_1 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1]))))) / ((-(-9223372036854775805LL))))), (((/* implicit */long long int) var_8))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */int) ((unsigned short) (unsigned char)253));
        var_22 &= ((/* implicit */short) ((((unsigned long long int) (_Bool)1)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (short)-20176))))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) <= (((int) ((int) arr_28 [i_7])))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)32767), (arr_17 [i_7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7])) || (((/* implicit */_Bool) arr_3 [i_7]))))) : (((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_16 [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_7] [i_7])))))))));
        var_26 = ((/* implicit */long long int) 3256881062U);
    }
    var_27 = ((/* implicit */short) (unsigned short)21690);
    var_28 = ((/* implicit */unsigned short) max((var_28), (var_15)));
    var_29 = (!(((/* implicit */_Bool) ((short) max((var_5), (((/* implicit */long long int) (_Bool)1)))))));
}
