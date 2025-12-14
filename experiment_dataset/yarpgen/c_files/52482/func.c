/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52482
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 111578503)) / (var_3))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) | (((/* implicit */int) arr_0 [i_0 - 2])))))));
        var_17 = ((/* implicit */short) 25ULL);
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [(signed char)0] [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((25ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))))) : (2994496304U)));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) ((short) var_4))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2])))))));
        var_22 *= ((/* implicit */signed char) arr_7 [6ULL]);
        var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_7 [i_3]), (arr_4 [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 2]))) : (var_9)))) ? (((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_3])) : (22ULL))) : (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) var_13))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-18618)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_8))))))));
        var_24 *= ((/* implicit */unsigned int) var_15);
        var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) arr_4 [i_3]))))) ? (arr_9 [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 3])))))), (((((/* implicit */_Bool) ((short) (short)-6))) ? (arr_5 [i_3 + 2]) : (min((var_3), (var_0)))))));
        var_26 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_3 - 1])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))), (arr_5 [i_3])));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_15 [i_3 + 3] [i_3 + 1] [i_3] = ((/* implicit */signed char) arr_5 [i_4]);
            arr_16 [i_4] [i_4] [i_3 - 1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_10 [i_3 - 1]))), (min((var_16), (((/* implicit */unsigned short) var_11))))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            arr_19 [i_3] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10ULL))));
            var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((arr_13 [i_5 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-5316))))) & (((((/* implicit */_Bool) 1211472372U)) ? (arr_10 [i_5 - 1]) : (536870911U)))))), (((((/* implicit */_Bool) arr_8 [i_5 - 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_5]))))) : (((10ULL) >> (((var_4) - (280796807U)))))))));
            arr_20 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_13 [i_3 - 1])))), (max((max((18446744073709551590ULL), (25ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 469359116901232799ULL)) ? (((/* implicit */int) arr_17 [i_5 + 2])) : (645169056))))))));
            var_28 *= arr_13 [(short)13];
            arr_21 [i_5 - 1] = ((/* implicit */short) (-(min((min((((/* implicit */unsigned int) (short)18617)), (arr_13 [i_3]))), (2921093696U)))));
        }
    }
    var_29 -= ((/* implicit */unsigned int) (signed char)-33);
}
