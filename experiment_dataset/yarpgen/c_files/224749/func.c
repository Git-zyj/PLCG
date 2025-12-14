/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224749
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
    var_16 = ((/* implicit */unsigned int) (-((+(((9223372036854775807LL) / (((/* implicit */long long int) var_0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_4);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 5729818152766217484LL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (arr_1 [i_0])))) && (((/* implicit */_Bool) 10141885642229010278ULL)));
        var_18 = arr_1 [i_0];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) 0LL);
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) var_10);
        var_20 &= ((/* implicit */unsigned int) var_11);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_2 - 1]))));
            var_22 = ((/* implicit */short) (!(((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)-12086))))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) != (((/* implicit */int) (short)11531)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [1LL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (-6367652104591511640LL)))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) 1064735727U)) : (11587971263824044503ULL))))))));
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) >= (3597166756155730308ULL)));
            arr_11 [i_3] [23LL] |= ((/* implicit */long long int) ((unsigned int) arr_5 [i_2] [i_3 - 2]));
        }
        var_25 = ((/* implicit */unsigned short) ((14849577317553821308ULL) & (((/* implicit */unsigned long long int) arr_8 [i_2 - 1]))));
        var_26 = ((/* implicit */signed char) ((((var_14) + (2147483647))) >> (((arr_10 [(short)18] [i_2 - 1] [i_2 - 1]) - (3386012365U)))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17623))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)127)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))) ^ (9223372036854775807LL))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1178971078U)) : (0LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_28 &= ((/* implicit */short) var_13);
            arr_18 [i_5] |= ((/* implicit */short) (((+(3230231557U))) << (((var_8) - (12698181649911130138ULL)))));
            var_29 = ((/* implicit */_Bool) (((+(arr_1 [i_5]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17622)) ? (arr_15 [i_4]) : (((/* implicit */unsigned int) var_6)))))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_30 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_6] [(unsigned char)2])) && (((/* implicit */_Bool) (unsigned char)39)))) ? (((/* implicit */long long int) max((3671204856U), (((/* implicit */unsigned int) arr_21 [i_4 - 1] [i_6] [i_4 - 1]))))) : ((-(-1298666284147531016LL)))));
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)94)))) > (((/* implicit */int) arr_17 [i_4 - 1] [i_4]))))), ((unsigned char)13)));
            arr_22 [i_4] = ((/* implicit */unsigned long long int) ((4245537008U) >> (((((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1])) - (212)))));
            var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_1 [i_4]), (((/* implicit */long long int) var_2))))), (((((/* implicit */_Bool) arr_7 [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))))) ? (1528071593398546513LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (min((((/* implicit */unsigned int) arr_9 [i_6] [i_4])), (arr_10 [16U] [16U] [16U]))))))));
            var_33 = ((/* implicit */int) (((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -880574190)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1])) ? (1122508243U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2926))))))));
        }
        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) 
        {
            var_34 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (short)8493)) || (((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 - 1]))))));
            arr_27 [i_4] [(unsigned char)16] [i_4] |= ((/* implicit */unsigned int) var_9);
        }
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 23; i_9 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) min(((+(var_8))), (((/* implicit */unsigned long long int) min((arr_24 [i_4 - 1] [i_4 - 1] [i_9 + 1]), (arr_24 [i_4 - 1] [i_4 - 1] [i_9 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) 2147483647)), (-2254799264902865871LL))))) ? (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_16 [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)30594)))))) : (((((/* implicit */_Bool) (+(-6249193515616141890LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [i_8]))))));
                                var_37 |= ((/* implicit */long long int) var_10);
                                var_38 = ((/* implicit */short) (~(2570517739U)));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned short) var_0);
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((arr_30 [i_4]), (((/* implicit */unsigned long long int) arr_29 [i_4])))))) ? (((/* implicit */long long int) arr_29 [i_8])) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_24 [i_4] [i_8] [i_4])), (arr_26 [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_4 - 1])))));
                }
            } 
        } 
    }
}
