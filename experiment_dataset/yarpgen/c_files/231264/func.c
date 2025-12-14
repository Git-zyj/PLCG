/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231264
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
    var_18 = ((/* implicit */int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (12639621469670006103ULL) : (576460752236314624ULL)))) || (((/* implicit */_Bool) min((-9223372036854775799LL), (((/* implicit */long long int) (signed char)63))))))))));
    var_19 |= ((/* implicit */unsigned char) ((var_16) >> ((((~(((9223372036854775807LL) ^ (((/* implicit */long long int) var_13)))))) + (9223372032735858646LL)))));
    var_20 |= ((/* implicit */unsigned long long int) max((-9223372036854775784LL), (((/* implicit */long long int) (unsigned char)91))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 2])))) ? ((+(((/* implicit */int) arr_2 [i_0] [8U] [8U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 4])))))))) && (((/* implicit */_Bool) var_12))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -9223372036854775781LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned char)179))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3])))));
                var_21 = ((/* implicit */short) ((signed char) ((unsigned char) ((unsigned short) (unsigned char)78))));
                arr_7 [(short)8] [i_0] [i_1 - 1] = ((/* implicit */short) ((_Bool) (+(((((/* implicit */_Bool) 8214748723594319944ULL)) ? (((/* implicit */unsigned long long int) -9223372036854775797LL)) : (18ULL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 4] [i_2] [i_3] [6U] [6U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned short)488)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_3])))))) % (((/* implicit */int) arr_11 [i_4 - 1] [i_3] [(short)4] [i_0 + 1]))));
                                arr_16 [i_2] [i_0] [i_2] [(short)3] [i_2] [i_2 - 1] [i_4] = ((/* implicit */unsigned long long int) ((signed char) 11746704210495014154ULL));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) max(((signed char)69), (((/* implicit */signed char) (_Bool)1)))))));
                }
            }
        } 
    } 
}
