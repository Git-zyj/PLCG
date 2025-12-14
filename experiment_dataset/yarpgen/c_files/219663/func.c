/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219663
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) max((var_4), (((/* implicit */short) arr_0 [i_0] [i_1]))))) : (((arr_1 [(short)7]) / (((/* implicit */int) var_11)))))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) -1085114010907921056LL)) >= (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) 4294967295U)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */int) var_4);
                var_14 ^= ((/* implicit */int) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_15 *= ((/* implicit */int) ((_Bool) arr_6 [i_2 + 1]));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                arr_12 [i_4] = ((/* implicit */unsigned short) ((_Bool) arr_9 [i_2] [i_2 - 1]));
                arr_13 [i_2 + 1] [i_3] [i_3] [i_4] = ((signed char) var_2);
                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) : (arr_6 [1]))) - ((~(arr_6 [i_3])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [10U])) <= (9277221308677163610ULL)));
                        arr_21 [i_6] [i_6] = (+(-8751337486897886714LL));
                    }
                } 
            } 
            var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)157)) ? (2147483647) : (((/* implicit */int) (unsigned short)61515)))) / (((/* implicit */int) ((short) var_1)))));
        }
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
        arr_22 [i_2 + 1] = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                {
                    arr_28 [i_2 - 1] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    arr_29 [i_7] [10U] [10U] [10U] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_8 - 1] [i_2 + 1] [(unsigned short)0])) - (((/* implicit */int) ((short) var_7)))));
                    arr_30 [i_2] [i_2] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))));
                    var_21 = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_9] [i_8] [i_7] [i_2])) <= (((/* implicit */int) arr_33 [i_2] [i_7] [i_8] [i_9]))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_11))));
                        var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_0))))));
                    }
                    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)639)) - (((/* implicit */int) (unsigned short)65535))))));
                        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_8 - 2] [i_2 - 1]))));
                    }
                }
            } 
        } 
    }
    var_27 -= ((/* implicit */unsigned char) 134217727ULL);
    var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 965570225U)) == (-5273527365505372138LL))) ? ((((_Bool)1) ? (var_0) : (((/* implicit */int) var_7)))) : (max((var_3), (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-32765), (((/* implicit */short) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) : (((((/* implicit */_Bool) (unsigned short)65525)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (511LL))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-9097603547580713813LL)))))));
}
