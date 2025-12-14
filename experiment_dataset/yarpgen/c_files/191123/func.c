/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191123
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) 9291159334925273240ULL)) ? (((1128391596U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0]))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((min((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */signed char) min((arr_1 [i_0 - 2] [i_0 + 2]), (arr_1 [i_0 - 2] [i_0 - 2])))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_22 -= ((/* implicit */_Bool) arr_3 [i_1]);
        var_23 = min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) arr_2 [i_1] [(unsigned short)5])) : (arr_3 [i_1])))) ? (arr_4 [i_1]) : (((arr_3 [i_1 + 1]) ^ (((/* implicit */long long int) arr_2 [i_1] [i_1])))))), (((((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (((/* implicit */long long int) (_Bool)1))))) ? ((+(arr_3 [i_1]))) : (((arr_4 [i_1 + 2]) / (arr_3 [i_1]))))));
        var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)64))) ? (((arr_4 [(short)6]) & (((/* implicit */long long int) arr_2 [i_1] [i_1 + 2])))) : (((arr_4 [i_1]) | (((/* implicit */long long int) arr_2 [i_1] [i_1]))))))), (max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 1])), (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (9155584738784278380ULL)))))));
    }
    for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2] [i_2]))))) ^ (min((2953492538U), (((/* implicit */unsigned int) ((_Bool) (signed char)60)))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_4]))))), (arr_6 [i_2 - 2])));
                        var_27 *= ((/* implicit */long long int) ((unsigned int) (!(arr_9 [i_2 - 2]))));
                        var_28 += ((/* implicit */_Bool) (~(max((arr_2 [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)7))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((long long int) (signed char)-117)), (((/* implicit */long long int) ((unsigned char) arr_0 [i_2] [i_2])))))) * (9291159334925273233ULL)));
        var_30 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) -3053250783919041508LL)) ? (((arr_4 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))))));
        arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52489))) ^ (min((arr_3 [i_2]), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)104)))))))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 4141496677U))) ^ (((((/* implicit */int) (signed char)-27)) | (((/* implicit */int) (_Bool)0))))))) ^ (((long long int) ((((/* implicit */int) (unsigned short)8393)) ^ (((/* implicit */int) (short)6529)))))));
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_3))));
}
