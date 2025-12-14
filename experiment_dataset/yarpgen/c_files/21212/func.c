/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21212
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
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2131489776U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(max((max((((/* implicit */unsigned int) var_8)), (4294967295U))), (0U)))));
        arr_5 [(_Bool)1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (short)16352))), (4294967295U)))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0)))) ^ ((-(((/* implicit */int) (unsigned char)221)))))) : (((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)-1)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] |= ((/* implicit */_Bool) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            arr_13 [i_2 + 3] = ((/* implicit */int) ((arr_12 [i_1] [i_1] [i_2 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2 + 3] [i_2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15063))) : (var_13)))));
            arr_14 [i_1] = ((/* implicit */int) (short)13025);
            var_18 += ((/* implicit */int) arr_10 [i_1] [16U] [i_2]);
        }
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
            arr_17 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_3]))))) ? ((~(arr_7 [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1] [i_3] [i_1])))))));
            var_20 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
        }
        for (long long int i_4 = 4; i_4 < 18; i_4 += 4) 
        {
            var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 2]))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */long long int) arr_18 [i_1])) >= (arr_20 [i_1])))));
            var_23 = ((/* implicit */unsigned char) ((4294967295U) << (((((/* implicit */int) (unsigned short)28625)) - (28623)))));
            var_24 = ((/* implicit */unsigned long long int) var_11);
        }
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_5] [i_5])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39734))) : (1762413775545893193ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_5] [i_5]), (((/* implicit */short) (unsigned char)31))))))));
        arr_26 [11] [i_5] = ((/* implicit */int) 4294967295U);
        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) arr_15 [i_5])) : (2284500713U)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_1)))))))) : (((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (signed char)69))))) ? (-4082939489917265203LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_6] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))));
        arr_29 [i_6] [(unsigned char)9] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_6]))) : (-200845786762350544LL)));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                {
                    arr_36 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) var_15);
                    arr_37 [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)57019)) | ((+(((/* implicit */int) arr_28 [i_6] [i_6]))))));
                    var_27 -= ((/* implicit */unsigned int) (-(((arr_33 [i_8] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0)))))));
    var_29 = ((/* implicit */unsigned int) var_4);
}
