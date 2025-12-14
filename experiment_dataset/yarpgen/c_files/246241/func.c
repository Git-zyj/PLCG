/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246241
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-25)) + (2147483647))) << (((((/* implicit */int) (signed char)35)) - (35)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (signed char)26)))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? ((~(-4876395307967246677LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-27)) + (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0 + 1]) < (((/* implicit */int) (!((_Bool)1)))))))) : (((((/* implicit */unsigned long long int) -684935359)) * (1820655595733281772ULL)))));
                        arr_15 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (unsigned short)31246);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned char) (-(arr_7 [i_0 + 1])));
                            arr_20 [i_0 + 1] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (signed char)48);
                            arr_21 [i_6] [i_6] [i_6] [i_0] [i_6] [0ULL] [i_6] = ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))));
                            arr_22 [i_6] [i_0] [i_5] [i_2] [i_0] [6ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)55547))));
                            arr_23 [i_0 + 1] [i_0] [i_1] [i_0] [i_5] [i_5] [i_6] = ((((/* implicit */long long int) 224U)) - (((long long int) arr_12 [i_0] [(short)2] [(short)2] [i_6])));
                        }
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((short) (signed char)51));
                            arr_27 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_25 [i_7] [i_7 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 1]));
                        }
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) | ((~(((/* implicit */int) (short)-21339))))));
                        var_17 -= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (signed char)-19)) : (107487515))) * ((-(((/* implicit */int) (_Bool)1))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) (short)-16337)) % (((/* implicit */int) (signed char)-48)))) & (((/* implicit */int) (signed char)33)))))));
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) < (3695130451U))) ? (((/* implicit */int) (signed char)40)) : (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)110)) : (-1934133840)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned int) (unsigned char)110)), (arr_5 [i_0] [i_0 + 1] [i_0])))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-54)) ? (-1461151449) : (((/* implicit */int) (short)15)))) | (((int) (signed char)-18))))) : (arr_9 [(unsigned char)11] [i_0] [i_2] [i_2] [i_0] [i_0])));
                        arr_32 [i_0 + 1] [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? (((((((((/* implicit */int) ((short) (signed char)-80))) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])) + (94))) - (4))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)187)) ? (arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)130))))))))))) : (((((((((/* implicit */int) ((short) (signed char)-80))) + (2147483647))) << (((((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])) + (94))) - (4))) - (111))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)187)) ? (arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)130)))))))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
    var_21 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) ((((/* implicit */int) (unsigned char)237)) + (((/* implicit */int) (signed char)126))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) (((~(((/* implicit */int) (short)17968)))) ^ ((~(((/* implicit */int) (short)17967))))))) ^ ((~(((-7438811125591186792LL) ^ (((/* implicit */long long int) 2393339097U))))))));
}
