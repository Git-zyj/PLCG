/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53408
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 5ULL)) || (((/* implicit */_Bool) var_4))))) >> ((((+(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])))) - (6723)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */int) arr_3 [5U] [i_1 + 1] [i_0])), (281493822)))))))) : ((-(min((((/* implicit */unsigned int) (unsigned short)35950)), (var_8)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 5ULL)) || (((/* implicit */_Bool) var_4))))) >> ((((((+(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])))) - (6723))) - (17165)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */int) arr_3 [5U] [i_1 + 1] [i_0])), (281493822)))))))) : ((-(min((((/* implicit */unsigned int) (unsigned short)35950)), (var_8))))))));
                var_14 = ((/* implicit */unsigned short) min(((+((+(((/* implicit */int) var_1)))))), (((/* implicit */int) max(((unsigned short)12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))))))));
                var_15 = ((/* implicit */unsigned int) (+(var_10)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_9), (var_7))))), (((/* implicit */unsigned int) (~(var_2))))));
    /* LoopSeq 4 */
    for (int i_2 = 4; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) (+(var_9)));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_2] [i_2] [(short)2])))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_8 [i_2 - 2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-15478), (arr_2 [i_2 + 1])))) ? ((((_Bool)1) ? (arr_6 [i_2 - 2] [i_2] [i_2]) : (arr_1 [i_2]))) : (((/* implicit */int) arr_2 [i_3]))))), (((((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (var_10)))) + (((1LL) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2 + 1])))))))));
            var_19 = ((/* implicit */_Bool) arr_7 [i_2] [i_3]);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_20 = min((1685930346), (((/* implicit */int) (unsigned char)66)));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_4 - 1]))))) : (max((((/* implicit */long long int) var_11)), (arr_0 [i_2 - 4] [i_4])))))) || ((!(((/* implicit */_Bool) arr_3 [i_2 - 4] [i_4 - 1] [i_4]))))));
        }
        /* vectorizable */
        for (signed char i_5 = 4; i_5 < 12; i_5 += 1) 
        {
            var_22 = ((/* implicit */int) var_8);
            var_23 |= ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_10 [(short)10] [(short)10])))) : (var_2)));
        }
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) ((((975655061799467640LL) == (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 991602447)) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : ((-(-2147483645))))) : ((-(((/* implicit */int) (_Bool)1))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_1 [i_6]))));
        arr_16 [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? ((-(arr_14 [i_6]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_6])) && ((_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6])) && (((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 1) 
    {
        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)34391), (((/* implicit */unsigned short) (_Bool)1))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1))))))));
        var_27 = ((/* implicit */unsigned char) (+(((unsigned int) 8LL))));
        var_28 = ((/* implicit */int) var_7);
    }
    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) 
    {
        var_29 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5965884169843593161LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12456))) : (arr_20 [i_8 - 1] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (max((((/* implicit */unsigned int) var_1)), (var_9)))))));
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_1))))));
    }
}
