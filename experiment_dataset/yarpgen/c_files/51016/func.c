/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51016
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (unsigned short)32768);
        var_20 = ((/* implicit */unsigned int) (!(arr_1 [i_0])));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(signed char)7]))))) < (((arr_1 [i_0]) ? (var_9) : (var_9)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_0 [14ULL]))))))) ? ((-(((arr_1 [i_1]) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_1]))))));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(_Bool)1]))))) ? ((-(((/* implicit */int) (signed char)16)))) : ((-(((/* implicit */int) arr_0 [i_1]))))))) > (((((/* implicit */_Bool) max((2464876646435313982ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(unsigned short)8]))))) : (((unsigned int) arr_4 [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)2)) | (((/* implicit */int) (unsigned short)37452))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3 + 4] [3U] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4]))))) ? (min((arr_2 [i_3]), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_9 [i_4] [4U] [i_2]))))))));
                    arr_15 [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2366864U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((14749443962047540943ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28100)))))))) : (((((/* implicit */_Bool) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) : (12356210228255484366ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (2821052802U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >> (((((arr_6 [i_2]) + (((/* implicit */long long int) 4294967292U)))) + (8823693694022746051LL)))))) ? (((((/* implicit */_Bool) arr_7 [i_3 + 3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) + (arr_12 [i_4] [10ULL] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)15] [i_2]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) (+(18446744073709551615ULL)));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_20 [i_6] [14U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_5] [i_6])) : (((/* implicit */int) arr_3 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_5]))) > (arr_13 [(unsigned char)1] [i_6] [i_6]))))) : (max((arr_6 [i_5]), (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5])))))), (((/* implicit */long long int) (unsigned short)1920))));
            arr_21 [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) : (arr_12 [i_5] [12U] [i_6])))) ? (((/* implicit */int) (unsigned short)37221)) : (((/* implicit */int) (_Bool)0))))) ? ((-(arr_18 [i_5]))) : (((((/* implicit */_Bool) (-(arr_19 [i_5])))) ? ((+(4744786056867132107ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_6])))))));
            arr_22 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_7 [i_5] [(unsigned char)5]))))) - (((((/* implicit */long long int) ((/* implicit */int) var_13))) & (arr_12 [i_5] [i_6] [(signed char)7])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 13236823814329366892ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (66977792U)))) : (min((arr_12 [i_5] [(signed char)0] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_3 [i_5]))))))));
        }
    }
    var_25 *= ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)15481)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)37)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((max((var_18), (((/* implicit */unsigned long long int) var_10)))) | (max((var_0), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 14749443962047540943ULL)) ? (((/* implicit */int) (unsigned short)28083)) : (((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((-(4227989507U)))))));
}
