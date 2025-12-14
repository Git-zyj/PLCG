/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20574
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) (~(4294967279U)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) (unsigned short)35118)) - (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_1 [i_2] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((int) (~((-9223372036854775807LL - 1LL)))))) : (min((((((/* implicit */_Bool) -3976064421965254130LL)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (arr_0 [i_3] [i_2])))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_16)) : (8ULL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)45)))))));
                                var_23 = ((/* implicit */unsigned int) (~(min((arr_0 [i_0] [i_4]), (((/* implicit */unsigned long long int) var_18))))));
                            }
                            arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1]) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))))) ? (min((((unsigned int) arr_0 [16ULL] [16ULL])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)102)) ? (2027590433) : (((/* implicit */int) (short)-6698))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) > (-4269637091067178493LL)))))))));
                            var_24 -= ((/* implicit */unsigned long long int) ((short) ((unsigned short) var_0)));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) ((1595254126) > (-75319508)))))))), (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3243))) - (18446744073709551603ULL))))));
                arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) var_7)) | (((((/* implicit */long long int) arr_7 [i_0] [i_1])) ^ (min((var_9), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            {
                var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */int) arr_13 [i_5] [i_6]))))) ? (var_10) : ((+(var_19))))))));
                arr_18 [i_5] = ((/* implicit */unsigned long long int) ((short) (~(min((((/* implicit */unsigned int) (unsigned short)30418)), (786432U))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_5)) : (var_9))))), ((~(var_13)))));
                            /* LoopSeq 3 */
                            for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                            {
                                arr_27 [i_5] [i_6] [i_7] [i_8] [i_8] [i_9] [i_6] |= var_3;
                                var_27 &= ((/* implicit */unsigned short) (+(min((var_5), (((/* implicit */int) ((unsigned char) arr_14 [i_9] [i_9] [i_7])))))));
                            }
                            for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                            {
                                var_28 |= min((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)2109))))) * (var_7))), (((/* implicit */unsigned int) var_15)));
                                var_29 = ((/* implicit */unsigned short) min((min((max((68719476735ULL), (((/* implicit */unsigned long long int) arr_13 [i_5] [4U])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16))))))), ((((_Bool)1) ? (14496399072287982611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))));
                                var_30 |= ((/* implicit */short) max(((~(min((11652851954204255328ULL), (((/* implicit */unsigned long long int) var_17)))))), (((/* implicit */unsigned long long int) (((~(var_9))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1202282659)))))))));
                            }
                            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                            {
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), ((((_Bool)1) ? (6673204687907977712ULL) : (((/* implicit */unsigned long long int) -5067144409345147786LL))))));
                                var_32 = ((/* implicit */unsigned long long int) (((-(min((arr_12 [i_5] [i_6 - 1]), (((/* implicit */unsigned long long int) var_6)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)0)))))) / (5849119483252082742LL))))));
                            }
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_6] [i_6] [i_5])))), (((/* implicit */int) ((unsigned short) arr_5 [i_5] [i_6 + 1] [i_5])))));
            }
        } 
    } 
}
