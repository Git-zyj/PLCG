/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30051
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (arr_1 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_11 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((2359428977U) != (((/* implicit */unsigned int) -407434620)))) && (((/* implicit */_Bool) var_4)))))) < ((-(((arr_1 [i_1]) ^ (((/* implicit */unsigned long long int) 7680265244957377163LL))))))));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35831)) ? (((/* implicit */unsigned long long int) 407434619)) : (18350043868263908466ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) ^ (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) 4339960968153222544LL))))) : (((/* implicit */int) (short)13349))))) : (min((((/* implicit */unsigned long long int) (unsigned short)56331)), (arr_4 [i_1] [i_1]))))))));
            var_13 += ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-70)) || (((/* implicit */_Bool) (unsigned short)9204))))), (max((((/* implicit */unsigned long long int) 12288U)), (4190208ULL))))) << (((var_8) + (1459050637)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_8 [(_Bool)1] [i_0]))) > (((/* implicit */unsigned long long int) -8910766756035690777LL))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            arr_16 [i_0] [(unsigned char)10] [i_3] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4 - 2] [i_5 - 3] [i_5] [i_5])))))) ^ (min((arr_14 [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5] [i_5 - 2]), (var_1)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_2 [i_3] [i_3]))))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33641))) : (var_9)))))));
                    arr_19 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) - (((/* implicit */int) arr_7 [i_6] [i_2]))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_17 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_7 - 1]))))) != (((unsigned long long int) arr_9 [i_0]))));
                    arr_23 [i_0] [i_0] [i_3] [i_7] = ((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)));
                }
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(arr_4 [i_0] [i_3]))) % (arr_1 [i_0])))) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3])) << (((((/* implicit */int) var_5)) - (55647))))))))));
            }
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                var_19 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (min((((/* implicit */unsigned long long int) var_4)), (var_1)))))), (min((arr_6 [i_0] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_6))))));
                var_20 ^= (!(((/* implicit */_Bool) ((arr_2 [i_8] [i_8]) ? (arr_1 [i_8]) : (var_9)))));
            }
            /* LoopSeq 2 */
            for (int i_9 = 3; i_9 < 9; i_9 += 3) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [i_9 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((8910766756035690776LL), (((/* implicit */long long int) (_Bool)1)))))) ? (8181097195771847224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(2586359502497739542ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9 + 2] [i_9] [i_9 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_3))))))));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 9; i_10 += 3) /* same iter space */
            {
                var_22 -= ((/* implicit */unsigned short) var_9);
                arr_35 [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_21 [i_10] [i_10] [i_10] [i_10 - 3] [9U] [i_10 - 1]))));
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_26 [i_0] [i_0]);
            }
        }
    }
    for (unsigned short i_11 = 4; i_11 < 20; i_11 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) min((var_7), (((/* implicit */unsigned int) arr_37 [i_11 - 1] [i_11 + 1])))));
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_37 [i_11 - 2] [i_11 - 2])), ((~(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
        var_25 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)33))));
        arr_39 [i_11] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)0)), (890719181U)));
    }
    var_26 &= ((/* implicit */unsigned long long int) var_6);
    var_27 = ((/* implicit */_Bool) min((890719181U), (((/* implicit */unsigned int) -566078142))));
}
