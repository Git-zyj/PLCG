/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206849
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
    var_14 += ((/* implicit */short) (+(16711680)));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((var_2) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2])))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16711681)) || (((/* implicit */_Bool) -1464794058))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            arr_7 [(unsigned char)9] [i_0] [(unsigned short)17] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_6 [i_0 - 2] [(unsigned char)7] [i_0])))) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])) : (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            var_17 ^= max((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 - 2] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_6 [i_0 - 2] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])), (265592967)))))), (((((/* implicit */unsigned long long int) (~(arr_5 [i_0] [(unsigned short)12] [i_1 + 1])))) & (arr_1 [i_0 + 1]))));
            arr_8 [(_Bool)1] [19] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15U)) ? (max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned short)65535)))))) : (min((((arr_0 [i_1] [(unsigned short)9]) ? (-62068409) : (-16711681))), (((/* implicit */int) (unsigned short)18418))))));
            var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)245)), (((((/* implicit */_Bool) 268435448U)) ? (arr_1 [15ULL]) : (arr_1 [i_0])))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (17016124386825414438ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1])))));
            arr_12 [i_0] [(signed char)1] = ((/* implicit */signed char) arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 1]);
            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1135519883)) ? (190339057) : (((/* implicit */int) (unsigned char)6))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -1)))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_1 [i_0 - 2])));
            arr_16 [i_0] [(signed char)16] [i_0 + 1] = (+(((/* implicit */int) (short)-27592)));
        }
    }
}
