/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216456
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
    var_13 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)37)) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_11 [i_0] [i_0] [i_0] [10ULL]))))));
                            var_15 = ((/* implicit */short) max((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_1 - 2]))))), (((/* implicit */unsigned long long int) arr_1 [i_2 + 1] [i_1 - 2]))));
                            var_16 = ((/* implicit */unsigned long long int) arr_10 [(signed char)7] [i_1] [i_3 + 1]);
                        }
                    } 
                } 
                var_17 = (!((!(((/* implicit */_Bool) arr_13 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 9030729104592694983ULL))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_4]))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-569177475001727131LL)))));
                        arr_27 [i_4] [i_5 - 1] [i_6] [i_7] = ((((/* implicit */int) (unsigned char)249)) > (-130017344));
                    }
                    arr_28 [i_4] [i_5] [i_6 - 1] = ((/* implicit */short) arr_22 [i_4] [i_4]);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5)))))) : (var_12))))));
                    arr_29 [i_6] [i_5] [i_6] [i_4] = ((/* implicit */long long int) arr_19 [i_4]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        arr_41 [i_10] [i_8] [i_9] = ((/* implicit */unsigned long long int) (unsigned char)110);
                        arr_42 [i_4] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((short) ((unsigned long long int) var_2)));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) && (((/* implicit */_Bool) var_11))));
                            arr_46 [i_4] [9LL] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_7);
                        }
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_4) : (((/* implicit */int) arr_36 [i_10] [i_8] [i_4])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 4; i_13 < 17; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) / (-30658157)))) + (-8081099840475427420LL)));
                    arr_53 [i_12] [i_13 - 2] [i_12] [10ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_2) || (((/* implicit */_Bool) 3790675978U))))) >> (((/* implicit */int) (_Bool)0))));
                    arr_54 [i_12] [3] [i_14] = ((/* implicit */unsigned long long int) 271130231);
                    arr_55 [i_12] [i_13] [i_14] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
}
