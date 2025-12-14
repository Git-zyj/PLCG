/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244236
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
    var_18 -= ((/* implicit */signed char) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) & (((/* implicit */int) ((signed char) ((int) 15U))))));
        arr_5 [(unsigned short)1] [i_0] = var_13;
        var_19 -= ((/* implicit */unsigned char) var_11);
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
            var_21 -= ((/* implicit */short) ((4294967279U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))));
        }
        var_22 += 4294967280U;
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-91)) : ((+(((((/* implicit */int) var_17)) << (((var_3) - (3489508028611018429ULL)))))))));
        var_23 = ((short) var_4);
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12713)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))))) <= (((unsigned long long int) arr_3 [i_3])))))));
        var_24 += ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3] [i_3]))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_3] [i_3] [(signed char)17]))) : (((/* implicit */int) max((arr_2 [i_3] [i_3]), (arr_2 [i_3] [i_3])))));
        var_25 += ((/* implicit */short) (-(((/* implicit */int) max((arr_0 [i_3]), (arr_0 [i_3]))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned int) arr_1 [(signed char)0]);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) <= (5U))))));
        }
        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_13))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_3])), (arr_2 [i_5] [i_3]))))));
            var_28 = ((/* implicit */_Bool) arr_12 [i_3]);
        }
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                var_29 = ((/* implicit */unsigned char) var_15);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & ((~(arr_7 [(signed char)11])))));
                    arr_32 [(signed char)6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(unsigned short)0] [i_7])))))));
                    var_31 += var_6;
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_32 = ((/* implicit */signed char) (((+(arr_30 [i_9] [i_6]))) << ((((-(arr_30 [i_7] [i_9]))) - (16830467190059172612ULL)))));
                    arr_35 [(signed char)17] [(signed char)17] [i_6] = ((/* implicit */signed char) (_Bool)0);
                }
                var_33 = (+(((/* implicit */int) arr_29 [(unsigned short)8] [(unsigned short)8] [i_6])));
                var_34 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_6]), (arr_28 [i_6]))))) & (max((2200149393U), (((/* implicit */unsigned int) arr_28 [i_6]))))));
            }
        } 
    } 
    var_35 += ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_3)));
    var_36 -= ((/* implicit */short) min((max((((10U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)126))))))), ((-(((((/* implicit */_Bool) var_16)) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))))));
}
