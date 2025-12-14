/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233330
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_11 = ((/* implicit */int) ((_Bool) ((int) var_8)));
            var_12 = ((/* implicit */unsigned long long int) (+(min(((-(var_2))), (((/* implicit */long long int) var_8))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 7036650871357327335ULL))));
            var_14 += ((/* implicit */unsigned long long int) (-(arr_5 [i_0] [(short)0])));
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((1254313738) >> (((var_0) + (1368072234))))));
        }
        var_15 = (+(-1254313739));
        var_16 += ((/* implicit */unsigned long long int) ((var_5) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) 0ULL))) : (((var_3) >> (((9223372036854775807LL) - (9223372036854775804LL)))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_17 = arr_5 [i_3] [i_3];
        arr_9 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) ((-15) > (((/* implicit */int) (unsigned char)255))));
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)26))));
                    arr_21 [i_7] [i_5] [i_6] [2] [i_7] [i_6] &= ((/* implicit */long long int) (~(((arr_2 [i_4] [i_7]) + (((/* implicit */int) arr_4 [i_4] [i_7]))))));
                    arr_22 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_3 [i_6] [i_7])) + (69)))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6] [i_6])));
                    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned short)15401)))))) % (((-1LL) + (var_2)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 3] [i_8 - 3] [i_8 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (arr_24 [i_8] [i_8 - 4] [i_8 - 2] [i_8 - 2])));
                }
                arr_25 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)3));
            }
            for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 3) 
            {
                arr_30 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)100)))))));
                arr_31 [i_4] [i_5] [i_9] = ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((_Bool) arr_13 [i_4] [i_5]));
                            arr_38 [i_4] [i_5] [i_5] [i_5] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_1) : ((-(var_1)))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_4] [i_5])) >> (((3943901637399267727ULL) - (3943901637399267713ULL)))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) 635107732))));
        }
        for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (signed char)-1))))))));
            arr_42 [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_5);
            arr_43 [i_4] = ((/* implicit */int) var_1);
        }
        for (unsigned int i_13 = 4; i_13 < 16; i_13 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((short) (unsigned char)152));
            var_28 = ((/* implicit */unsigned int) min((var_28), ((~(var_1)))));
        }
        arr_48 [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_41 [i_4]))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        var_29 &= ((/* implicit */int) 18446744073709551615ULL);
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (~(1254313748))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(3375541558014854386ULL)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            var_31 = min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_51 [i_14])), (var_10)))), ((+(arr_52 [i_14] [i_14]))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_50 [i_15])) & (((/* implicit */int) var_8))))))))))));
            var_33 ^= ((/* implicit */_Bool) min((((/* implicit */int) arr_51 [i_14])), (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) arr_51 [i_14])) : (((/* implicit */int) arr_51 [i_14]))))));
        }
    }
    var_34 = ((/* implicit */unsigned char) var_5);
}
