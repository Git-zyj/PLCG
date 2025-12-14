/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21112
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_20 += ((/* implicit */_Bool) ((((3101345008U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (2132651584U)));
                        var_21 = ((/* implicit */_Bool) ((((1193622287U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [13U] [i_0] [i_0] [i_1] [i_1 + 2])) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] [i_1 + 1])))))));
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((((2926008753U) - (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_2))) + (((((/* implicit */int) arr_6 [i_3] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_4 [i_1])))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_22 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((long long int) 0U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_3 [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                        var_23 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_4 [i_0])))))) >= (((((/* implicit */_Bool) var_8)) ? (1048844446U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_15 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [12ULL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2614))))) << (((/* implicit */int) (_Bool)0)))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3246))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_0 [i_0]))))) - (3481419757U)))))) : (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [12ULL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2614))))) << (((/* implicit */int) (_Bool)0)))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3246))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_0 [i_0]))))) - (3481419757U))) - (3940639056U))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [10U] [i_2] = ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) 10414374565743739910ULL)))) || (((((((/* implicit */_Bool) arr_13 [10LL] [i_1 - 1] [i_2] [i_5] [i_6] [i_2])) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) -1LL))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_11 [i_1 + 2])))) / (((-8954319045264340521LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1])))))));
                        }
                        arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62921))) - (8954319045264340517LL)))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_11)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_14 [4] [4] [i_2] [i_2])))) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 - 1]))))) : (((int) var_18))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_25 = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65532)) * (((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_2]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_7]))) / (var_10))));
                                arr_28 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1 - 1] [i_7] [i_7 + 1] [i_0]))) + (var_15)))) - (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_11 [i_0])))) - (852331231247010519LL)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [14ULL] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)5)))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) || (((((/* implicit */_Bool) var_9)) && (var_0))))) ? (((unsigned int) ((((/* implicit */_Bool) var_11)) && (var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61388)) ? (1334333401356007406ULL) : (var_3)))) || (((/* implicit */_Bool) var_15))))))));
    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2614))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6))))) : (((538724039U) & (var_17))))) >= (((unsigned int) ((((/* implicit */_Bool) (unsigned short)52321)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16624304092250017299ULL))))));
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) <= (((((unsigned long long int) (signed char)-36)) | (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
}
