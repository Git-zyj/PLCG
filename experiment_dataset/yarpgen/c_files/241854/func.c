/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241854
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_4))));
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_9))))))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */long long int) ((((_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((15286617486566779442ULL) < (3160126587142772173ULL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-1))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)8] [i_2] [(unsigned short)4]))))))));
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_5] [i_4] [i_3])) : (((/* implicit */int) arr_11 [i_1] [i_4] [i_5])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_5] [3ULL] [i_3] [i_1]))))));
                            arr_17 [i_0] [i_0] [i_0] = (_Bool)1;
                            arr_18 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            arr_19 [i_5] [i_0] [(_Bool)1] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4492576301428925071ULL) + (((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [5LL])) : (arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65528)) >> (((15286617486566779442ULL) - (15286617486566779416ULL)))))) ? (((/* implicit */int) (unsigned char)255)) : ((+((-2147483647 - 1)))))))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) < (arr_2 [i_0]))))) < (((((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((var_6) - (2831433325U)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (829535064895859440ULL)))))));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((var_2) ? (((/* implicit */unsigned long long int) var_4)) : (829535064895859444ULL))))), ((~(((((/* implicit */int) var_14)) | (arr_16 [i_0])))))));
            }
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_27 [i_0] [i_6 - 1] [i_6] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    arr_28 [i_1] [i_0] [i_6 - 1] [i_7] [8] [i_7] = ((/* implicit */long long int) (-(3890483162U)));
                    arr_29 [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_9))));
                }
                arr_30 [i_0] = (_Bool)1;
            }
            var_22 = ((/* implicit */long long int) max((((short) arr_5 [i_0] [i_1] [i_1] [i_1])), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)95)) || (var_2))))));
            var_23 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [i_1] [i_0]))))) ? (arr_24 [i_1] [i_0] [i_0]) : (((/* implicit */long long int) max((var_12), (((/* implicit */int) var_13))))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_8] [i_9])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (4)))) || (((/* implicit */_Bool) (+(var_4))))))) : (((/* implicit */int) (unsigned char)96)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            arr_39 [i_1] [i_9] [i_8] [i_9] [i_8] |= ((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */unsigned int) (+(var_12))))));
                            arr_40 [i_8] [i_0] [i_10 + 1] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_35 [i_10 + 3] [i_10 + 1] [i_10 + 1] [(signed char)6] [(signed char)6])))));
                            var_25 = ((/* implicit */unsigned short) 15286617486566779434ULL);
                            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))));
                        }
                        arr_41 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_1] [i_0] [(unsigned char)0]);
                    }
                } 
            } 
        }
        arr_42 [i_0] = ((/* implicit */long long int) var_14);
    }
    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned char) (((~(max((var_0), (((/* implicit */long long int) var_4)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4116218538216917442LL)) ? (arr_2 [i_11]) : (((/* implicit */int) var_8)))))))));
        var_27 = ((/* implicit */int) max((var_0), (((/* implicit */long long int) max((max((((/* implicit */short) (unsigned char)255)), (arr_12 [i_11] [i_11] [i_11] [i_11]))), (arr_12 [i_11] [i_11] [11ULL] [i_11]))))));
    }
    for (short i_12 = 2; i_12 < 23; i_12 += 2) 
    {
        var_28 -= ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) (unsigned char)237)), (16941663159770581338ULL))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) var_9)))))));
        var_29 *= ((/* implicit */unsigned long long int) max((((long long int) max((((/* implicit */unsigned int) var_7)), (var_4)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) var_8))), (var_8))))));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (var_14)));
}
