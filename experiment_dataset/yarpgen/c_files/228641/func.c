/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228641
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
    var_10 ^= ((/* implicit */short) 4294967289U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1781062397)) ? (-2051266281) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7ULL)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) (short)24947))))) && (((/* implicit */_Bool) (short)24947))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_1]);
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483640)) ? (((((/* implicit */_Bool) (unsigned short)4032)) ? (3700419719347159257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872)))))) ? (((/* implicit */unsigned long long int) 4294967289U)) : (min((((/* implicit */unsigned long long int) 2147483640)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) - (18446744073709551615ULL)))))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((((/* implicit */_Bool) 14746324354362392357ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_1] [6U])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */_Bool) 555749989618986493ULL)) ? (17659873458963708675ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((397253612) / (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) 1501955601))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 5164933129320465543ULL)) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) (short)31512))))))) ? (var_4) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-24950)) : (2147483640)))) : (var_4)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */int) 16720240472352593238ULL);
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-67)) + (2147483647))) >> (((3700419719347159249ULL) - (3700419719347159224ULL)))))) ? (-1) : (((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (-574391081)))));
            }
        } 
    } 
}
