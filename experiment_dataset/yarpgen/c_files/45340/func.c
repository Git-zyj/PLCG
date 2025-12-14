/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45340
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-16143)) ? (1959124177U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_4]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
                                var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)5528)) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [(unsigned char)18]))))) / (((((/* implicit */_Bool) (unsigned char)31)) ? (-3800320968881505021LL) : (((/* implicit */long long int) var_5))))))) != (3358456014031373791ULL)));
                            }
                        } 
                    } 
                } 
                var_11 += ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [5] [i_1]))) < (8061191638447525470ULL)))), ((~(arr_14 [i_0] [i_0] [i_1] [(_Bool)1] [i_1])))))), (min((((((/* implicit */_Bool) 1085154733)) ? (5391479945390096739ULL) : (6720329157836842144ULL))), (((/* implicit */unsigned long long int) min((1085154733), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])))))))));
                var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1])) <= (min((1085154724), (-1085154746)))))), (((((/* implicit */_Bool) min((1085154722), (-1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 448189758)) ? (538306615) : (2037427924)))) : (arr_8 [i_0] [i_1] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */int) arr_4 [13]);
                                var_14 = ((/* implicit */unsigned int) (signed char)-1);
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)68)), ((short)2403)))), (((((/* implicit */_Bool) ((unsigned short) 0))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_5] [i_6] [i_7] [4])), ((unsigned short)28635)))) : (((/* implicit */int) arr_24 [i_6] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) min((5063068479445711975ULL), (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5 + 1] [i_5 - 1] [i_5]))))))))));
            }
        } 
    } 
}
