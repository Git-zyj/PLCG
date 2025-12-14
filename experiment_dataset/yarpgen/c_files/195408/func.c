/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195408
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
    var_12 = ((/* implicit */unsigned short) ((4294967295U) << (((-51323753) + (51323775)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0 - 1] [i_0])), (((((/* implicit */_Bool) (unsigned short)36674)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0]))) + (5893837930399146836ULL)))));
                arr_6 [i_0] = min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (-6755109)))))), (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)50)))), (((((/* implicit */int) var_3)) / (394140578)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (-5473343095907965806LL) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3238)) * (((/* implicit */int) (signed char)-61))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(signed char)20] [(signed char)20])) ? (((/* implicit */int) arr_4 [i_2] [(unsigned char)10])) : (((/* implicit */int) arr_4 [i_2] [(unsigned char)18])))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_8)))) ? (min((4194288), (-1117058641))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (-2012390835) : (((/* implicit */int) (unsigned short)65535))))))) ? (-37871105) : (((/* implicit */int) (unsigned short)28861))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_27 [i_3] [i_5] [i_7] = ((/* implicit */unsigned short) min((min((-689832934), (arr_23 [i_3] [i_3] [i_4 - 1] [i_5 - 1] [i_3] [(unsigned short)6] [i_3]))), ((-(((((/* implicit */_Bool) arr_25 [i_3] [i_5] [i_5 + 1] [(signed char)4] [i_7])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_7]))))))));
                                arr_28 [i_5] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned char) (+((+(((/* implicit */int) (unsigned short)55061)))))));
                                arr_29 [i_3] [i_3] [i_3] [(unsigned char)14] [i_5] = ((/* implicit */unsigned char) arr_22 [(unsigned char)0] [1U] [i_4] [i_3]);
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_4] [(signed char)1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) : (2281955416U)))), (arr_7 [i_5])));
                    arr_31 [i_4] [i_5] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_2 [i_5])))), (((/* implicit */int) max((arr_0 [i_5]), (min((((/* implicit */unsigned short) (unsigned char)77)), (arr_12 [i_3] [3]))))))));
                    arr_32 [i_3] [i_4 + 2] [i_5] = ((/* implicit */_Bool) arr_20 [7] [i_4] [i_3] [i_3]);
                }
            } 
        } 
        arr_33 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38687)) ? (971160414200877826LL) : (((/* implicit */long long int) 448043626))));
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        arr_37 [11ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [9U] [9U])) % (((/* implicit */int) var_11))))) ? (((((((/* implicit */int) arr_8 [i_8])) / (((/* implicit */int) var_9)))) / ((-(((/* implicit */int) (signed char)-116)))))) : (((((/* implicit */_Bool) arr_2 [(short)6])) ? (((/* implicit */int) arr_2 [(signed char)20])) : (((/* implicit */int) arr_2 [(unsigned char)2]))))));
        arr_38 [i_8] [i_8] = arr_11 [i_8];
        arr_39 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)53))));
        arr_40 [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((4269625755U), (4294967288U))) >= (2940660107U)))), (arr_13 [5U] [i_8])));
    }
}
