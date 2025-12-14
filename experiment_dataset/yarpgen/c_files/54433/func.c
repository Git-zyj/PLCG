/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54433
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) (unsigned char)15);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (2081689382150504335LL)))))) ? (((unsigned long long int) (-(((/* implicit */int) (signed char)-53))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0])))) : (max((arr_2 [i_0]), (((/* implicit */int) var_4)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+((-(var_5)))));
                var_11 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_2);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_6))) ? (max((max((((/* implicit */unsigned long long int) (signed char)-66)), (var_5))), (((/* implicit */unsigned long long int) max((4119744946U), (((/* implicit */unsigned int) (signed char)-81))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)2096)), (-8743147214277565636LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_6)))) : (((((/* implicit */unsigned long long int) var_1)) - (var_5)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_3] [i_2]))))), (8315566281576557586LL)));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */unsigned int) ((arr_15 [i_2] [i_3] [i_2 + 1] [15LL] [i_5] [i_2]) ? (((/* implicit */int) arr_15 [i_5] [(unsigned char)10] [i_2 - 1] [i_2 - 1] [i_4] [i_3])) : (var_1)))) == (((max((((/* implicit */unsigned int) arr_9 [i_2] [i_2] [1U])), (arr_7 [i_5]))) ^ (arr_10 [(signed char)4] [i_3])))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_2 - 1] [i_2 + 1] [i_2 - 4] [i_2 - 4])), (arr_11 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 4])))) ? (((/* implicit */long long int) max((arr_7 [i_2]), (((/* implicit */unsigned int) (-(arr_11 [i_2] [i_3] [i_4] [i_5]))))))) : (var_7)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 821345572)) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_6] [i_7])) : (((/* implicit */int) arr_14 [i_7] [i_3] [i_3] [i_2]))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                            {
                                arr_23 [i_2 - 4] [i_3] [i_6] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+((-(arr_10 [i_3] [i_7])))))), (((((((/* implicit */_Bool) arr_20 [i_2 - 4] [i_3] [i_3] [i_3])) ? (arr_19 [i_8] [i_7] [i_3] [i_3] [i_2] [(unsigned short)14]) : (((/* implicit */unsigned long long int) arr_20 [i_2] [(unsigned char)9] [i_7] [i_3])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_8])))))));
                                arr_24 [i_8] [(_Bool)1] [i_3] [i_6 - 3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_2 - 3] [i_2 + 1] [i_6 + 1])) : (((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 2] [i_6 - 1])))), (((/* implicit */int) ((min((arr_12 [i_2 - 2] [i_2 - 4] [i_2] [i_2]), (arr_22 [i_2 - 1] [i_2] [i_3] [i_6 + 1] [i_7] [i_8]))) == (((/* implicit */int) arr_16 [i_2 - 2] [i_3] [1U] [i_7])))))));
                                var_18 = ((/* implicit */unsigned int) max(((+(max((var_5), (((/* implicit */unsigned long long int) arr_7 [i_3])))))), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_7]))));
                            }
                            /* vectorizable */
                            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                            {
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [10U] [i_3] [i_9] [i_7] [i_2] [i_7]))) : (arr_25 [(signed char)7] [i_6] [i_7] [9])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [10ULL] [(unsigned char)6] [i_9 - 1]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_21 [i_2] [i_2] [i_6 - 3] [i_7] [i_9])) : (-1LL)))));
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) arr_22 [i_2] [i_3] [i_3] [i_6] [i_7] [(signed char)9])) > (arr_10 [i_3] [i_3]))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_7]);
                                arr_27 [i_2] [i_3] [i_2 - 4] [i_3] [i_2] [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_6 - 3] [i_6] [i_9])) ? (arr_11 [i_2 - 4] [i_6 - 3] [i_2] [i_2]) : (arr_11 [i_2 - 2] [i_6 - 3] [i_6] [i_7])));
                            }
                            arr_28 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2 - 4] [5])) ? (arr_12 [i_2] [i_2] [i_2 - 2] [i_2]) : (arr_12 [i_2] [i_2] [i_2 - 2] [16LL]))) < ((~(arr_12 [i_2 - 4] [i_2] [i_2 - 3] [i_2 - 2])))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3521758985U) : (arr_7 [i_6 - 2])))) ? (((((/* implicit */_Bool) arr_7 [i_6 - 1])) ? (arr_7 [i_6 - 2]) : (arr_7 [i_6 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6 + 1]))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (~((~((-(var_7)))))));
            }
        } 
    } 
}
