/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236426
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_16))))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_2]))));
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_0 - 4] [i_2]))));
            var_22 = var_16;
        }
    }
    for (short i_3 = 2; i_3 < 24; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */short) (((((~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)7987)) - (7978))))))) + (2147483647))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3502)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)63688))))) ? (((/* implicit */int) ((_Bool) 7280613199330463609LL))) : (((/* implicit */int) arr_11 [i_3 - 1]))))));
        arr_14 [7ULL] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 2]))) > (-7642454714479198414LL))))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) (((-(var_0))) <= (((/* implicit */int) arr_11 [i_3 - 2]))))) * (((/* implicit */int) ((var_16) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1]))))))));
        arr_15 [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 - 1]))) : (var_5)))) ? (((long long int) (unsigned char)109)) : (((var_2) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 2])))))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)109))));
            var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24573))) : (-115518111300406495LL)));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((var_0) / (((/* implicit */int) min(((unsigned short)55549), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) (unsigned short)38425)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
            arr_20 [i_3 - 1] [i_5] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) arr_19 [i_5] [12ULL]))))) ? ((-(((/* implicit */int) arr_16 [i_3] [i_5])))) : (((/* implicit */int) arr_12 [i_3 - 2]))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned int) (unsigned char)78)), (var_5))))) : ((+(((/* implicit */int) arr_18 [i_3 - 2] [i_3 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                arr_24 [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)24564))) == (6849602998331712438LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_19)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)11] [(signed char)11]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_5] [i_6] [i_7])) < (((/* implicit */int) (unsigned short)57674))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 3; i_8 < 23; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)38422))))));
                        var_29 = ((/* implicit */unsigned short) ((arr_16 [(unsigned char)15] [i_3 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 2]))) : (-2250059134991138861LL)));
                        var_30 *= ((((/* implicit */long long int) arr_17 [i_3 + 1])) > (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (-6849602998331712410LL))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_12 [i_3 + 1]))));
                    }
                }
            }
        }
        for (unsigned short i_9 = 3; i_9 < 21; i_9 += 3) 
        {
            arr_33 [i_9] [i_9] = (~(min((max((371317966), (((/* implicit */int) (signed char)99)))), (((/* implicit */int) var_7)))));
            var_32 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_30 [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned short) var_10))))), ((-(((/* implicit */int) var_4))))));
            var_33 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_31 [i_3 - 1] [i_3])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (unsigned short)38447))))));
            var_34 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)55277)) | (((/* implicit */int) arr_31 [i_9 + 2] [i_3 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9 - 2] [i_9 - 3])))))));
            arr_34 [19LL] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_26 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_9] [i_9 + 1])) ^ (((/* implicit */int) arr_26 [(unsigned short)23] [i_3 - 1] [i_9 + 1] [i_9 + 4] [i_9] [i_9]))))));
        }
    }
    for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
    {
        var_35 = ((/* implicit */unsigned int) var_12);
        var_36 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)51385)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7))))));
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)6]))) | (arr_1 [i_10 + 1])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (18213945052969707605ULL)))) ? (((/* implicit */int) ((arr_29 [i_10] [(short)22] [i_10] [(unsigned short)24]) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_10])), (var_14)))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_18)))))))))));
    }
    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((min((var_12), (((/* implicit */unsigned long long int) -1822117277048882471LL)))) <= (var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((((/* implicit */int) var_19)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)1487)) - (1480))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)57001)))))))))));
    var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (((long long int) var_5))));
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) var_7)), (var_17)))))) ? (var_9) : (min((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (5293504314908449003LL))), (((/* implicit */long long int) min((250049210U), (((/* implicit */unsigned int) (unsigned short)20059)))))))));
}
