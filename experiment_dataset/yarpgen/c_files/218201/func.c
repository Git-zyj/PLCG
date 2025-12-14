/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218201
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
    var_11 ^= ((/* implicit */signed char) (((-(((unsigned int) var_10)))) << (((/* implicit */int) (((+(((/* implicit */int) (signed char)-64)))) == (var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_0 [i_0] [(signed char)14]))));
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_0))));
        }
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0 + 3])))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_4] [i_2 + 1])) : (-1765295901))))));
                    var_16 *= ((/* implicit */int) var_7);
                    var_17 += ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)247))))) ? (((((/* implicit */_Bool) (unsigned char)41)) ? (1765295895) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_9)))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_1))));
            var_20 = ((/* implicit */int) min((var_20), ((((_Bool)0) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)65521)))) : (((/* implicit */int) arr_12 [i_2 + 2] [i_5 - 1]))))));
            var_21 |= ((/* implicit */_Bool) 3925463491334739799LL);
            var_22 &= ((((/* implicit */_Bool) 6637836594929866379ULL)) ? (((/* implicit */int) arr_13 [i_2 + 2] [i_5 + 2] [i_5 - 1] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_5 + 1] [i_5 + 1] [i_2 + 2])));
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_22 [6] [i_5 + 1] [i_6] [i_7]))));
                            var_24 -= ((/* implicit */long long int) var_9);
                            arr_25 [i_2] [i_5] [(unsigned char)2] [(_Bool)1] [0U] [(short)2] [i_2] |= ((/* implicit */short) ((((/* implicit */unsigned int) 1077243502)) != (arr_17 [i_2] [i_2 + 3] [i_5 - 1])));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_5))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    var_26 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)111)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_9 + 1] [i_6] [i_5 - 1]))) : (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_2 - 1] [i_5 - 2] [i_6] [i_9 - 3] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_27 -= ((/* implicit */signed char) (+(var_10)));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (unsigned short)15))))))))));
                }
            }
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((var_3) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8141453264649606700LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_10]))) : (3925463491334739789LL)))))))));
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned short) (~(5697381181444598393LL)))))));
            }
            for (long long int i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                arr_34 [i_2 + 2] [i_2 + 2] [i_11] [(short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_31 [i_2 + 3] [i_2] [i_2] [i_2])) : ((+(((/* implicit */int) (_Bool)1))))));
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) 1771216846))));
                var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_29 [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_11 - 1])) : (((/* implicit */int) arr_29 [i_2 + 1] [13LL] [i_5 - 1] [i_11 - 2]))));
                var_33 ^= ((/* implicit */unsigned short) var_8);
            }
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */int) var_6)) ^ ((+(((/* implicit */int) (short)-15248))))))));
                var_35 += ((/* implicit */int) arr_14 [i_12] [i_5]);
                var_36 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_37 |= ((/* implicit */_Bool) var_4);
            var_38 += ((/* implicit */long long int) arr_15 [i_2] [i_2] [(short)1]);
            var_39 += ((/* implicit */_Bool) var_0);
        }
    }
    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((short) (unsigned short)40))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) -1771216841)))))));
}
