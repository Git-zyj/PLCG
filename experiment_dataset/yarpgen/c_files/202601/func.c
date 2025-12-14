/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202601
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 1])))) : (((unsigned int) arr_2 [i_0])))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                var_11 = ((/* implicit */signed char) ((((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) max((max((arr_4 [i_0] [i_0]), (arr_0 [i_0]))), (((/* implicit */int) var_0))))) : (max(((-(2947008011033843063ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 0U)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 += max((((/* implicit */long long int) (unsigned char)115)), (max((((/* implicit */long long int) arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 2])), (-6233094395788611300LL))));
                                var_13 += ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_2)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) arr_11 [i_0] [14LL] [i_2] [10ULL] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) 14782816163544689884ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 4; i_5 < 18; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            {
                arr_20 [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((var_3) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) <= (4294967292U)))) : (((/* implicit */int) min(((unsigned char)104), (((/* implicit */unsigned char) (signed char)-67))))))));
                arr_21 [i_6 + 1] = ((/* implicit */long long int) ((((unsigned int) min((((/* implicit */int) var_9)), (var_5)))) >> (((((/* implicit */unsigned long long int) arr_1 [12LL] [12LL])) / (9936272755685806570ULL)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        var_15 += ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)66)) || (((/* implicit */_Bool) var_4))))))));
                        var_16 |= ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (15499736062675708552ULL)))));
                        arr_27 [i_5 - 4] [i_6] [i_7 + 1] [i_8] [i_7] [i_8] = ((/* implicit */_Bool) arr_18 [i_5] [i_5]);
                    }
                    var_17 += ((/* implicit */short) ((((arr_3 [i_5 - 2] [(_Bool)1] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_6 + 1] [i_5 - 2]))))) ? (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) var_7))))) : (max((8510471318023745046ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 1) 
                {
                    for (short i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        {
                            arr_34 [i_5 + 1] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) 0U)) ? (2147483642U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (var_4)))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (max((arr_9 [18ULL]), (max((arr_9 [8]), (arr_9 [2U])))))));
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) min((2147483653U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_1)), (var_9))))))) ? (-7710483836885155571LL) : (((/* implicit */long long int) (+(arr_24 [3U] [i_9 + 1] [i_9 + 2] [i_5]))))));
                            var_20 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_9)))) * (((((/* implicit */int) var_9)) >> (((8510471318023745045ULL) - (8510471318023745037ULL))))))));
    var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_3)), ((-2147483647 - 1))))))) ? (((/* implicit */int) var_1)) : (((((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-21)))) >> (((var_5) - (1981221456)))))));
}
