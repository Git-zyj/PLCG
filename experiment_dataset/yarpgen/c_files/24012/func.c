/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24012
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
    var_17 |= ((/* implicit */unsigned int) min((((6405784295568463404ULL) / (((/* implicit */unsigned long long int) 2086982310U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)248)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)5])))))))) & (((/* implicit */int) arr_1 [i_0 - 2]))));
        var_19 = ((/* implicit */unsigned int) ((unsigned char) (signed char)-78));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) max((arr_2 [i_2 - 1]), (arr_7 [i_0] [i_1] [i_3])));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 2] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2014)))))) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((-1) + (6)))))))))));
                    }
                } 
            } 
            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0 + 1] [(unsigned char)14] [i_0] [i_0])), (arr_1 [i_0 - 2])))) >= (((/* implicit */int) ((max((arr_7 [i_0 - 2] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))) >= (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 2] [i_0] [i_0 + 1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-71)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 4; i_5 < 15; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_16 [15U] [i_4] [i_5] [i_6] [(short)11] [i_6] = ((short) (signed char)76);
                    arr_17 [i_0] [i_5 + 1] = ((/* implicit */unsigned char) arr_5 [i_4] [i_5] [i_6]);
                    arr_18 [i_0] [i_6] = ((/* implicit */signed char) ((unsigned int) arr_9 [1] [10] [i_0 - 1] [(signed char)11] [i_0] [i_0 - 1]));
                    arr_19 [i_0] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned short)2014))) << (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_6] [i_0]))));
                    arr_20 [i_0] [i_4] [i_5 - 3] [(signed char)9] = ((/* implicit */int) arr_1 [i_0 - 1]);
                }
                for (short i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    var_24 -= ((signed char) ((((/* implicit */unsigned long long int) 2207984986U)) > (1ULL)));
                    arr_24 [i_0] [i_0] [10U] [i_5] [i_5] [i_7 - 2] |= ((/* implicit */int) var_4);
                    var_25 = ((/* implicit */int) (((-(var_13))) - (((((/* implicit */_Bool) var_2)) ? (2086982337U) : (((/* implicit */unsigned int) var_2))))));
                }
                arr_25 [i_0 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 980841083U)) ? (((/* implicit */int) arr_22 [i_5 - 3] [i_4] [i_5] [i_5 - 4] [i_0 + 1] [(unsigned char)14])) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) 5058910U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_9] [i_0 + 1] [i_4]))) : (arr_30 [i_0] [i_0] [i_0 + 1] [i_5] [i_8] [8])));
                            var_28 = ((/* implicit */int) (+(2086982327U)));
                            var_29 = ((((/* implicit */_Bool) arr_30 [i_0] [i_4] [i_5] [i_8] [i_9] [i_4])) || (((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
                        }
                    } 
                } 
            }
        }
        for (signed char i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_6 [i_0] [i_10] [i_0] [i_10])), (((((/* implicit */_Bool) min((((/* implicit */long long int) 1073741823)), (4035534842266387741LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0 - 2]))) : (max((((/* implicit */long long int) arr_29 [i_10])), (arr_15 [i_0 + 1] [i_10]))))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    {
                        var_31 = ((/* implicit */short) arr_37 [i_0] [i_11] [i_12 - 1]);
                        var_32 = ((/* implicit */signed char) (-((-(((unsigned int) var_8))))));
                    }
                } 
            } 
        }
    }
}
