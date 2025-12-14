/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249872
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_3 + 1] [i_2] [i_0] [i_0])), ((+(4294967289U)))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) arr_7 [i_1] [i_4] [i_2] [(unsigned char)7]);
                                arr_13 [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-19065)) <= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_3 - 2])) < (((/* implicit */int) ((20U) < (4294967289U)))))))));
                                var_19 = ((4294967289U) < ((~(21U))));
                                var_20 = ((/* implicit */short) ((((12U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -953901950)) < (20U))))))) ? (((((/* implicit */int) arr_8 [i_4 - 1] [i_2 - 3] [i_2] [i_3] [i_3 + 1])) ^ (((/* implicit */int) arr_8 [i_4 - 1] [i_2 - 3] [i_4 - 1] [i_3 + 1] [i_3 + 1])))) : (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)15]))));
                            }
                            /* LoopSeq 3 */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0] [i_3 + 1] [i_5])), (var_12)))) % (((((/* implicit */_Bool) 466289596U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1ULL)))))) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((4294967295U), (4294967295U))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))))));
                                var_22 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)117))))), (((((/* implicit */_Bool) max((arr_3 [i_0] [i_5]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1579899178U)))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747)))))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                            {
                                arr_18 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 4])) ? (((/* implicit */int) arr_8 [i_2 - 3] [i_2] [i_2] [i_2 - 1] [i_2 - 3])) : (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_11)))))));
                                var_23 = (-(((/* implicit */int) (short)-15468)));
                            }
                            for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                            {
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 3U)), (var_15)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32746))))) : (var_10))) + (((((12U) != (((/* implicit */unsigned int) -1470455704)))) ? (((/* implicit */unsigned long long int) max((4294967286U), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_7] [i_7] [i_7 + 1]))))) : (min((((/* implicit */unsigned long long int) (short)-32747)), (144115050636902400ULL)))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_14 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]))))), (((((/* implicit */_Bool) 365517403U)) ? (1387096166U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_3 + 1] [i_7 + 1] [i_7 + 1]))))))))));
                            }
                            arr_21 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) (-((~((+(arr_19 [i_0] [i_0] [i_2] [i_3 - 1])))))));
                        }
                    } 
                } 
                var_26 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))) * (2U)))), (arr_1 [i_0])));
                arr_22 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (1U) : (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1] [i_0]))))) - (((((/* implicit */_Bool) arr_19 [8] [i_0] [(signed char)0] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            {
                arr_28 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)242)), (4294967286U)));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32746))))), (((((/* implicit */_Bool) arr_35 [i_8] [i_9] [i_10] [i_11] [i_12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32750)))))))));
                                var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32737)) ? (((((/* implicit */_Bool) max(((short)7837), ((short)-2456)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 2053611747)) ? (((/* implicit */unsigned long long int) arr_6 [i_9] [i_10] [i_11] [i_11])) : (11283392108436727216ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11 + 1] [i_8])))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                            {
                                var_29 += ((/* implicit */int) (signed char)-106);
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((short) ((9214364837600034816LL) < (((/* implicit */long long int) arr_9 [i_8] [i_10 + 2] [i_11] [i_11 - 1] [i_11 + 1]))))))));
                            }
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 37519260))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (max((4294967289U), (((/* implicit */unsigned int) var_4))))))), (((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_9))))) : (9214364837600034816LL)))));
}
