/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38951
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
    var_10 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (signed char)-125);
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)104))));
                                var_12 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)-105)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_4)), (16323593525774899810ULL))) - (18446744073709551476ULL)))))) < ((((-(var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                var_13 = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_0] [i_0] [(unsigned short)13]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) (unsigned short)5)))))))));
                            var_15 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) & (35184372086784ULL)))) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (arr_17 [i_1]));
                        }
                        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)3)), (arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_7 - 2]))))) + (arr_9 [i_7] [i_5] [i_2 + 4] [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) max(((signed char)104), ((signed char)104)))), ((unsigned char)25)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3907584974762409759LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))))));
                            var_17 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (unsigned short)62276))))))))));
                            arr_25 [i_7] [i_5] [(unsigned char)0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_5))));
                        }
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                }
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-21810)), (3907584974762409760LL)))) ? (((((/* implicit */_Bool) ((signed char) -2001142754))) ? ((-(-1980769113954863527LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3] [(unsigned short)1] [i_1]))))) : (-3907584974762409760LL)));
                var_20 = ((/* implicit */long long int) (unsigned char)2);
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_9);
    var_22 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)48811)) << (((-2118564112) + (2118564121))))) >= (((/* implicit */int) ((max((((/* implicit */unsigned long long int) 5659040719124080908LL)), (var_1))) >= (((/* implicit */unsigned long long int) (~(392880233627139707LL)))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (signed char)4)), ((unsigned short)20299))), (((/* implicit */unsigned short) (signed char)-48))))) ? (((/* implicit */int) ((signed char) ((4ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))))) : (((((/* implicit */_Bool) 16498341104380689466ULL)) ? (((/* implicit */int) ((var_1) <= (var_1)))) : (((/* implicit */int) (signed char)57))))));
}
