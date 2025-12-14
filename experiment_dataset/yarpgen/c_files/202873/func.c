/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202873
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
    var_18 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)3968)) < (((/* implicit */int) (signed char)14)))))));
                    arr_7 [i_0] [i_1] [5U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)20)) / (((((/* implicit */int) (unsigned char)248)) & (((/* implicit */int) (unsigned char)234))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(var_4)));
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) (-(var_11)));
                    arr_13 [i_0] = (unsigned char)255;
                }
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) var_7);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967279U)) * (0ULL)));
                    arr_16 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned short)65535))))) ? ((+(((/* implicit */int) (unsigned short)48099)))) : (((/* implicit */int) (unsigned char)236)))) / (((/* implicit */int) (unsigned char)246))));
                    var_23 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)128))));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_19 [i_0] = ((/* implicit */unsigned short) (unsigned char)234);
                    arr_20 [i_0] [14ULL] [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)511)))), (((/* implicit */int) (unsigned char)63))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_24 [(unsigned short)17] [i_1] [(unsigned short)17] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)7)), ((+(((/* implicit */int) (unsigned char)63))))));
                        arr_25 [i_6] [i_1] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)7))))), ((~((+(((/* implicit */int) (unsigned char)18))))))));
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (9616165679967097249ULL)));
                        arr_30 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(2298932955U)))) || (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_15)))))))));
                    }
                }
                arr_31 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)63))));
                arr_32 [(unsigned char)4] [i_1] [i_1] &= ((((/* implicit */_Bool) ((39269814U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) ? (16777215) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)65535))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
    /* LoopNest 3 */
    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
    {
        for (unsigned char i_9 = 1; i_9 < 7; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) (unsigned char)135);
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14)))))))))));
                    var_27 = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
                    arr_41 [i_8] = ((/* implicit */unsigned short) min(((((+(8725724278030336ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))))))));
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_11)) : (3015721384072396202ULL)))))) ? ((~(max((((/* implicit */long long int) 1554492396)), (-144115188075855872LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
