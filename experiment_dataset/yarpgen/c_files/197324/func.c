/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197324
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
    var_16 = ((/* implicit */short) min((((/* implicit */long long int) var_1)), ((+(max((9223372036854775807LL), (9223372036854775794LL)))))));
    var_17 = ((/* implicit */signed char) (short)-1);
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(var_8)))), (min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62530))) : (9223372036854775794LL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)125))));
            var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1023))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)9916)))) ? (min((((/* implicit */unsigned int) arr_5 [(unsigned short)12])), (1175458352U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))))) : (-9223372036854775806LL)));
        }
        for (int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) 536739840)), (9223372036854775807LL)));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_21 = (((((+(arr_12 [i_2 - 1] [i_2 - 2]))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))));
                var_22 ^= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (var_12))), (((/* implicit */long long int) arr_12 [i_3] [i_0]))))));
                var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(arr_2 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_2 - 2]))))) : (((((/* implicit */_Bool) 149844155902968603ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) & (-9223372036854775795LL))) : (((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)188)) - (188))))))))));
            }
        }
        var_24 ^= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))))), ((-(((/* implicit */int) (unsigned char)73))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_22 [i_5 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_5 + 1])) ? ((~(-9223372036854775798LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_5] [i_5] [i_5 + 1] [i_5]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0])))))))), (((/* implicit */long long int) (+(((var_3) - (-536739841))))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned char)121), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_24 [i_0] [i_4] [i_0] = ((/* implicit */short) 9223372036854775794LL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_28 [i_6] = ((unsigned char) (short)-11);
        arr_29 [i_6] = ((/* implicit */unsigned short) ((signed char) arr_3 [i_6]));
        arr_30 [i_6] [0] = arr_25 [i_6];
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        arr_34 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3328870542U)) ? (3119508944U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110)))));
        var_25 = ((/* implicit */int) (unsigned short)30734);
    }
}
