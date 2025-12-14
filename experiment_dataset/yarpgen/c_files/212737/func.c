/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212737
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (unsigned short)2)))), (((/* implicit */int) ((((/* implicit */int) (short)-32758)) <= (((/* implicit */int) var_15))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31940)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_0 [(unsigned short)8]))))) != (var_5))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            arr_10 [i_1] [(signed char)8] |= ((/* implicit */signed char) arr_8 [i_1] [0LL] [i_2]);
            arr_11 [(short)8] [i_2] = max((((/* implicit */int) arr_5 [11LL])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)(-32767 - 1))))));
        }
        arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((1352727004U) << (((-5131772763483170273LL) + (5131772763483170303LL)))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1]))))) - (arr_8 [i_1] [(signed char)10] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)-117)))))));
    }
    for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) 77598256269815539LL);
                        arr_24 [i_3] [i_5] [(unsigned short)15] [i_6 - 1] [i_6 - 1] [i_3 - 2] = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
        arr_25 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) min((arr_20 [i_3] [8ULL] [12ULL] [12ULL]), (((/* implicit */unsigned short) arr_22 [i_3] [i_3] [i_3] [i_3 + 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3004419471U)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_19))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967294U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (var_4) : (var_18)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7984)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (3004419471U)))) ? (arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 3] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))) == (((((((/* implicit */int) (signed char)-114)) + (2147483647))) << (0ULL)))))))));
    }
    var_23 = ((((/* implicit */_Bool) (+(0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2885215065U));
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (signed char)117))))), ((signed char)85)));
}
