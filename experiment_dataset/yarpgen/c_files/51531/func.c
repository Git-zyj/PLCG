/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51531
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((/* implicit */int) arr_2 [i_0]))))) : ((((_Bool)1) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37)))))))) ? ((-(var_7))) : ((((-(((/* implicit */int) (unsigned short)35412)))) - (((/* implicit */int) arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_3] [(short)3] [i_1] [i_1] [i_0])) ? (arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_3] [i_4 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) << (((arr_10 [i_0 + 1] [(signed char)13] [i_0 + 2] [(signed char)3] [i_0]) - (17825547662728037573ULL))))));
                                arr_15 [i_0 - 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [14ULL] [i_3] [i_2] [(signed char)17] [i_0]))) : (arr_11 [i_0 - 1] [(signed char)1] [(short)10] [i_3] [(unsigned char)9] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) || (((/* implicit */_Bool) (-((~(arr_3 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        var_10 *= ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [2ULL] [i_5] [(unsigned char)0] [i_5] [(short)4]))) / (arr_11 [(signed char)12] [i_5] [i_5 + 1] [i_5 + 1] [18] [(signed char)12]))) - (((/* implicit */long long int) -12)))) * (((/* implicit */long long int) (-(min((arr_3 [(signed char)20]), (((/* implicit */int) arr_12 [20U] [i_5] [i_5] [i_5] [i_5 + 2] [20U])))))))));
        var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) (signed char)-37))));
        arr_18 [(signed char)4] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_5 + 2] [i_5] [(_Bool)1] [i_5] [(unsigned char)8])) ? (((/* implicit */int) (short)-5088)) : (arr_16 [i_5])))))), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_12 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-25)) ? (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)0)))) : ((-(((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6])) == (-534291619))))));
        arr_22 [(unsigned short)8] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_21 [i_6])), (-4196133103391153760LL))) < (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_6])) << (((arr_11 [i_6] [(signed char)8] [i_6] [i_6] [i_6] [i_6]) - (6679694046208233303LL))))))));
        arr_23 [i_6] [(unsigned short)1] &= min((((/* implicit */unsigned long long int) max(((~(-1049765797))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_1)))))))), (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_6])), ((signed char)0))))) : (17651789329065250262ULL))));
    }
}
