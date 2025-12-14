/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244325
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((arr_2 [i_1 + 3] [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) (signed char)18)), (arr_5 [i_0] [i_2]))))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-18)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) + (max((((/* implicit */unsigned long long int) (signed char)52)), (3895119136354670462ULL)))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)18))))) ? (min((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_0] [i_0])), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]))))))));
                        var_15 -= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (signed char)-4)) ? (8193886716636804787LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] = ((unsigned int) (signed char)-52);
                        var_16 = ((/* implicit */unsigned long long int) (unsigned char)255);
                    }
                    for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        var_17 &= ((/* implicit */unsigned short) ((int) (-(((long long int) arr_5 [i_1] [i_1])))));
                        arr_14 [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) & (arr_1 [i_2] [i_2])))) ? (((int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_4] [i_2] [i_1]))))) * (((((/* implicit */_Bool) (unsigned short)61315)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_2]))) : (((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) : (arr_0 [i_4 + 2])))))));
                        var_18 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_6 [i_0 + 1])))));
                        arr_15 [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)21050), (((/* implicit */unsigned short) (signed char)8)))))) / (((8217492260810136244LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_1])) ? (2147483644) : (((/* implicit */int) (signed char)-53)))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_16 [i_1] [i_1 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2])) > (((/* implicit */int) arr_9 [i_1] [i_1 + 3] [i_1 - 2] [i_1 + 3])))))) : (arr_16 [i_1] [i_1 + 3])));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)-58))));
                        var_20 = ((/* implicit */signed char) ((arr_3 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)21050), ((unsigned short)21050)))))));
                        var_21 = ((/* implicit */unsigned long long int) max((arr_12 [i_1]), (((/* implicit */short) max((((/* implicit */signed char) ((_Bool) (_Bool)0))), ((signed char)-53))))));
                        arr_20 [i_0] [i_1] = ((/* implicit */long long int) min(((short)-27700), (((/* implicit */short) (_Bool)1))));
                    }
                }
                for (int i_6 = 3; i_6 < 20; i_6 += 3) 
                {
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((arr_22 [i_1] [i_1] [i_0 + 1]) / (((/* implicit */long long int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_1 [i_0 + 1] [i_1 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_6 - 2] [i_6]))))));
                }
                for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_5 [i_0] [i_0]) << (((arr_22 [i_7] [(short)4] [i_0]) - (8812757787507314293LL))))))));
                    var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(short)20])))))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_24 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (arr_3 [i_1 + 2]) : (arr_3 [i_1 - 2]))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((unsigned short) min((arr_6 [i_0 + 1]), (arr_6 [i_0 + 1]))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) (unsigned short)8191)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) arr_25 [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) % (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1])) ? (3752840240496605718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))))) : ((-(arr_1 [i_1 - 2] [i_8 - 1]))))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (signed char)57)), (-4082480623105077038LL)))))) : (max((((/* implicit */long long int) (!(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((323530311787701828LL), (((/* implicit */long long int) (unsigned short)21071))))))));
                        var_29 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_28 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2])));
                    }
                    arr_33 [i_0] [i_1] [i_8] = max((arr_30 [i_1 + 2]), (((short) arr_0 [i_0])));
                }
                arr_34 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_28 [i_0] [i_0] [i_0] [i_0]) & (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_1] [i_0] [i_0] [i_0])) : (arr_6 [i_1]))))))));
            }
        } 
    } 
    var_30 *= (_Bool)1;
    var_31 = ((/* implicit */short) var_8);
}
