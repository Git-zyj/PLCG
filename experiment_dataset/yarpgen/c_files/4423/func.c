/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4423
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
    var_12 = ((short) max((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)51637)))), (((/* implicit */int) ((short) (short)19145)))));
    var_13 *= ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_15 += ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (short)-19145)) ? (-6665303812216721610LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19145))))) : ((~(0LL))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned char)0] [(unsigned char)0] [i_1] [(unsigned short)15] [i_1] = ((/* implicit */short) arr_1 [i_4]);
                                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_2] [i_1]) : (arr_5 [i_1] [i_1])))) ? (min((arr_5 [i_1] [i_2]), (arr_5 [i_3] [i_4]))) : ((~(arr_5 [i_2] [i_2])))));
                                var_17 ^= ((/* implicit */short) ((-1012103100) + (((/* implicit */int) (unsigned char)87))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)1])))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_1] [i_0])) : (-1012103098))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) | (arr_7 [i_4] [3U] [i_4] [3U] [3U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)28640), (((/* implicit */unsigned short) (short)-30544)))))) : (var_7))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (2203657590942964799ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
}
