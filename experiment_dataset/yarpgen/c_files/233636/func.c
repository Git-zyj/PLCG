/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233636
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]))));
                    var_11 |= ((/* implicit */long long int) (+(((unsigned int) (~(((/* implicit */int) (unsigned char)245)))))));
                    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)2449)), (288230376118157312ULL)));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)38200)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned char)255)))) * (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) ((short) (unsigned short)0))) : (((/* implicit */int) (short)7936)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-29)) ? (1640976848237057058LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                arr_14 [i_3 + 2] &= min((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)99)))) / (((/* implicit */int) (signed char)16))))), (((25521078U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))));
                arr_15 [9ULL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_9 [i_3])))) / (((((/* implicit */_Bool) arr_9 [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9210)))))))) ? ((-(((((/* implicit */_Bool) arr_11 [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))))))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_3 + 2]))))));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    var_15 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)224))));
                    arr_18 [i_3 + 1] [i_3] [i_4] [11LL] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) arr_10 [8LL])), (((((/* implicit */int) arr_16 [i_3] [i_3 - 2] [i_3])) + (((/* implicit */int) arr_13 [i_3 + 1]))))))), (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (signed char)123))))), (((arr_11 [i_5]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (signed char)(-127 - 1));
                                arr_27 [i_3 + 2] [i_4] [(signed char)21] [i_7] [i_8] [i_6] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1640976848237057058LL)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_17 [i_3 - 1] [i_3 - 1] [i_6]) : (((/* implicit */int) (unsigned char)255)))))));
                    arr_28 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-73)) && (((/* implicit */_Bool) min((-7404098878069811894LL), (((/* implicit */long long int) (short)12))))))))));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    arr_32 [i_3 - 1] [i_9] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_26 [i_9] [i_9] [i_9 - 2] [i_9] [i_9]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_3] [i_4] [i_9])))))));
                    arr_33 [i_4] [i_4] [i_9] = ((/* implicit */long long int) arr_20 [i_3] [i_4] [i_4]);
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 23; i_10 += 3) /* same iter space */
                {
                    arr_36 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((15272448077070495901ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [(short)4] [(short)4])))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) >= (18446744073709551615ULL))))));
                    arr_37 [i_3] [i_4] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_10 - 1] [i_3] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2770209470U)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) ^ (-2525236813646354902LL)))));
                    arr_38 [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_34 [i_3 - 1] [i_3 - 1] [i_4 - 1]));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((signed char) var_3))))) : (((min((((/* implicit */unsigned long long int) var_9)), (var_2))) & (((/* implicit */unsigned long long int) (~(3474501489735602757LL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_23 [i_11] [(_Bool)1] [i_11 - 1] [i_11 - 1] [i_11]))) ? (((((/* implicit */_Bool) 2202232684U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (5631239356396607525LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11 - 1])))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_11 - 1] [i_11] [i_11 - 1])) < (((((/* implicit */int) (unsigned short)18)) / (((/* implicit */int) (unsigned short)65534))))));
        }
        arr_44 [i_11 - 1] [i_11 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_11 - 1] [i_11] [i_11 - 1])) ? (((/* implicit */int) (unsigned char)110)) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)18689))))));
        arr_45 [i_11] [i_11 - 1] = ((/* implicit */unsigned short) ((((long long int) arr_16 [i_11 - 1] [i_11] [i_11])) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2698296471U))))));
    }
}
