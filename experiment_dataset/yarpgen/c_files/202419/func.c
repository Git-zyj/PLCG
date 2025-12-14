/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202419
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        var_16 += ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_3] [i_3 + 2] [i_3] [i_3 - 1]));
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3170536028U))));
                        arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) var_13);
                        var_18 ^= ((/* implicit */unsigned long long int) ((unsigned char) 3170536025U));
                        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32737)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3 - 2] [i_3 - 2]))) : (var_1)));
                    }
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0])));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (~(arr_4 [i_4])));
        var_20 *= min((arr_3 [i_4] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22399)) ? ((-(arr_4 [i_4]))) : (var_3)))));
        arr_15 [i_4] |= ((/* implicit */short) ((((((/* implicit */int) var_8)) == (((/* implicit */int) (!(((/* implicit */_Bool) 4580016509431792062LL))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4])))))));
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_16 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [18U] [i_5] [i_5])) != (((/* implicit */int) var_8)))))) : (var_5))), (((/* implicit */unsigned long long int) ((((min((var_6), (var_14))) + (2147483647))) << (((3565033442U) - (3565033442U))))))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) var_8)) > (min((var_7), (((/* implicit */int) var_9))))))), (((((/* implicit */int) ((1272451327) >= (((/* implicit */int) var_9))))) >> (((max((((/* implicit */unsigned int) var_7)), (arr_1 [i_5] [i_5]))) - (4085574648U)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 1) 
        {
            arr_21 [16] [i_6] [16] = ((/* implicit */signed char) (+((+(arr_3 [i_5] [i_5])))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                for (short i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    {
                        arr_30 [i_5] [i_5] [i_5] [i_7] [(unsigned short)11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_6 - 2])) : (((/* implicit */int) arr_13 [i_6 + 1]))))));
                        var_23 = ((/* implicit */unsigned short) ((int) (+(arr_12 [i_5]))));
                    }
                } 
            } 
            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1])) ? ((~(-7996416839736199984LL))) : (-4580016509431792063LL)));
        }
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_5))))))))))));
}
