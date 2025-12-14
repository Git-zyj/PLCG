/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220780
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
    var_16 -= ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_8 [i_0] [i_2]);
                    var_18 = ((/* implicit */unsigned short) var_11);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((849192028U), (849192047U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((3445775271U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                                var_20 &= ((/* implicit */short) (-((+(0U)))));
                                arr_15 [i_4] [i_4] [i_1] [(short)14] [i_1] [i_0] [i_0] &= ((/* implicit */long long int) min((max((arr_7 [i_2 - 3] [8U] [i_2 + 1]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 849192047U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((var_15), (((/* implicit */long long int) (+(3445775261U)))))))));
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 849192044U)) ? (((/* implicit */int) (short)30207)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_6] [i_7] [2LL] [i_9]))) : (var_8)))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((arr_13 [i_5 + 2]), (((/* implicit */short) (!(((3445775261U) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)14898)) : (((/* implicit */int) (unsigned short)28801))))), ((+(arr_19 [i_5])))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)2820))))), ((+((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) var_13))));
                            }
                        } 
                    } 
                    var_25 = min((((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))), ((unsigned char)176)))), (var_6));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    var_26 -= ((/* implicit */unsigned int) var_2);
                    var_27 *= ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_18 [8U] [i_10])), ((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (int i_12 = 2; i_12 < 8; i_12 += 1) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) (unsigned char)218)) ? (min((((/* implicit */unsigned int) (signed char)73)), (1174007995U))) : (0U));
                                arr_39 [i_5] [i_6] [i_10] [(signed char)2] [8LL] [i_12 - 1] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-11514))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(short)1] [i_10] [i_6] [i_5]))))))) : (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_34 [6LL] [i_5 - 1] [i_12 + 3]))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_35 [i_5] [i_13 + 1] [i_5 + 2])), (var_4))))) < (-3087680122597140279LL)))));
                    var_30 = (short)-10924;
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) 3445775273U)))))))) : (arr_7 [13] [i_6] [i_13 + 1]))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_11)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)62715)))))));
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_33 -= ((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) min((((/* implicit */short) arr_43 [i_5] [(unsigned char)2])), ((short)-11206)))) ^ (((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)12)))))))));
                    var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((((((/* implicit */int) (signed char)44)) << (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) min((min((((/* implicit */short) (unsigned char)38)), ((short)-3039))), (((/* implicit */short) ((((/* implicit */long long int) var_11)) == (-2357580466842258608LL)))))))));
                    arr_46 [i_5] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2820)) ? (arr_8 [i_5] [10LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)37)), (arr_34 [i_5] [i_6] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 849192039U))))))), (((((/* implicit */_Bool) min((var_12), (var_8)))) ? ((+(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (unsigned short)62733))))))));
                }
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 15290951098774144615ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (min(((-(((/* implicit */int) (unsigned char)46)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))))));
                arr_47 [i_5] = (_Bool)1;
                var_36 = ((/* implicit */long long int) ((int) min((((int) var_13)), (((/* implicit */int) var_5)))));
            }
        } 
    } 
}
