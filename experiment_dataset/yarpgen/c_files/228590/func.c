/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228590
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
    var_20 = ((/* implicit */signed char) var_10);
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_22 |= ((/* implicit */unsigned long long int) 7154539281935439771LL);
                    var_23 *= ((/* implicit */signed char) min(((short)-23772), (((short) -7154539281935439771LL))));
                }
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    arr_11 [i_0] [(unsigned char)4] [17LL] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)53097)) ? (-5702167223927967117LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((7154539281935439771LL), (((/* implicit */long long int) (unsigned short)0)))) & (((/* implicit */long long int) ((/* implicit */int) (short)-18069)))))) ? (max((12463562627686027694ULL), (((/* implicit */unsigned long long int) (short)-32763)))) : (((/* implicit */unsigned long long int) max(((~(7154539281935439771LL))), (-7154539281935439771LL))))));
                }
                for (unsigned char i_4 = 4; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), ((-(((long long int) (-(5941588682235886331ULL))))))));
                        var_25 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)2730)) : (((/* implicit */int) (unsigned short)42391))))), (max((((/* implicit */long long int) ((unsigned int) 9223372036854775807LL))), (-7154539281935439771LL)))));
                    }
                    var_26 -= ((/* implicit */long long int) (!((_Bool)0)));
                    var_27 += ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) 7154539281935439771LL)))));
                }
                for (unsigned char i_6 = 4; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_21 [i_0] = (short)-15902;
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -8411292124918525877LL)))) / (8411292124918525846LL))))));
                }
                var_29 *= ((/* implicit */short) ((max((8848683566977014292ULL), (((/* implicit */unsigned long long int) -9223372036854775807LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)23118)))))));
                var_30 = ((/* implicit */unsigned char) 9223372036854775807LL);
            }
        } 
    } 
}
