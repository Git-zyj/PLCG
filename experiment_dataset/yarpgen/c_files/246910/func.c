/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246910
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57610))) | (var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_7))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((min((0U), (712400360U))) << (((((/* implicit */int) arr_0 [i_0])) - (7269)))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) arr_0 [i_0 + 2])))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) var_8);
        var_21 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 74033590)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15ULL)) && (((/* implicit */_Bool) (short)6222)))))) : (-6365880350955169998LL))))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_5 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_23 ^= ((/* implicit */_Bool) max((-6365880350955169995LL), (((/* implicit */long long int) -1))));
        var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((max((arr_7 [i_2]), (var_10))), (arr_7 [i_2]))))) | (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_8 [i_2])))) + ((-(arr_6 [i_2] [i_2])))))));
        var_25 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_8 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((var_4) == (arr_8 [i_2]))))))) : (((((/* implicit */_Bool) ((arr_6 [i_2] [(signed char)4]) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_8 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((var_4) == (arr_8 [i_2]))))))) : (((((/* implicit */_Bool) ((arr_6 [i_2] [(signed char)4]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) min((((((/* implicit */int) arr_12 [i_3] [i_5 - 1] [i_5 - 1])) - (((/* implicit */int) var_9)))), (((/* implicit */int) var_11))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_4]), (((/* implicit */unsigned int) arr_12 [i_3] [(signed char)5] [(unsigned char)2]))))) ? (((/* implicit */unsigned int) ((arr_13 [i_3] [i_4]) % (((/* implicit */int) arr_12 [i_3] [i_3] [i_5 + 1]))))) : (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23902)) ? (0) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (signed char)-1)) : ((+(((/* implicit */int) (signed char)-19)))))) : (((/* implicit */int) ((-1) == (((/* implicit */int) (signed char)104)))))));
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_6 [i_3] [i_4]) << (((((/* implicit */int) var_1)) - (30380))))), (((/* implicit */long long int) min((var_5), (((/* implicit */short) var_0))))))))));
                }
            } 
        } 
    } 
}
