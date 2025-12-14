/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200804
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
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (signed char)40);
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */_Bool) 12295193945628276227ULL);
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)192)), (min((((/* implicit */unsigned int) (unsigned short)18)), (2116249932U)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((min((765835763), (((/* implicit */int) (signed char)34)))) * (((((/* implicit */int) (unsigned short)65518)) >> (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned char)1))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_4 + 2] [i_2 - 1] [i_3] [i_3 + 1] = ((/* implicit */unsigned char) -4183819581975193946LL);
                            var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43473)) * (((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) 9223372036854775807LL);
    }
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36353)) == (((/* implicit */int) (unsigned char)75))));
        var_23 ^= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)65520), (((/* implicit */unsigned short) (_Bool)0)))))));
                    var_25 &= ((/* implicit */unsigned short) -1101585522);
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(1788004923))))));
                    var_27 = ((/* implicit */long long int) min((var_27), ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))))));
                    var_28 = ((/* implicit */long long int) (unsigned short)43465);
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (max(((short)-12603), (((/* implicit */short) (unsigned char)128)))))))));
        arr_23 [i_8] = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_30 ^= max((((/* implicit */unsigned char) (signed char)-69)), (min(((unsigned char)84), ((unsigned char)6))));
    }
    /* LoopNest 3 */
    for (short i_9 = 2; i_9 < 23; i_9 += 2) 
    {
        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            for (unsigned int i_11 = 1; i_11 < 21; i_11 += 3) 
            {
                {
                    arr_32 [i_11 + 3] [i_10 + 1] [i_9 - 1] = ((/* implicit */short) ((max((-3553693207435168628LL), (1073741824LL))) << (((max((536870911ULL), (((/* implicit */unsigned long long int) (signed char)-84)))) - (18446744073709551532ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) (short)-32623);
                                var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)11))))) < (min((((/* implicit */long long int) (short)32767)), (-9223372036854775783LL)))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) min((max((16229124654349131577ULL), (((/* implicit */unsigned long long int) (unsigned char)14)))), (((/* implicit */unsigned long long int) min(((short)-4), ((short)30220))))));
                }
            } 
        } 
    } 
}
