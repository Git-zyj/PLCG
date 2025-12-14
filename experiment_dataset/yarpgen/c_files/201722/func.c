/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201722
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1917386683)) ? (-1092726509367702838LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))));
        var_20 |= ((/* implicit */_Bool) (signed char)13);
        var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1092726509367702838LL)) ? (((/* implicit */int) (short)-6583)) : (((/* implicit */int) (signed char)125)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [22ULL] = ((/* implicit */short) ((unsigned long long int) 2147483647));
            var_22 &= ((/* implicit */short) ((long long int) 1092726509367702837LL));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((long long int) (signed char)106)))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) & (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)122))))));
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_24 = ((short) var_4);
                var_25 = ((/* implicit */unsigned long long int) (+(-9130615326511046868LL)));
            }
            arr_12 [i_2] [i_2] [i_2] = (signed char)110;
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)74))));
            var_27 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) -449976118904725829LL)))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned long long int) (signed char)73)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((short) 0)))));
            var_30 ^= ((signed char) (signed char)-62);
            var_31 = ((/* implicit */signed char) ((long long int) ((_Bool) 255)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */int) ((unsigned long long int) 2147483647));
        var_33 = ((/* implicit */signed char) (~(32767ULL)));
        arr_23 [i_6] = ((/* implicit */unsigned long long int) (signed char)-112);
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */_Bool) 2147483647);
        arr_27 [i_7] = ((int) 13ULL);
        var_35 = (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)97))));
    }
    var_36 = ((/* implicit */unsigned long long int) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (short)14588)))));
}
