/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198787
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_3) : (var_3)))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5))))));
                                var_14 = ((/* implicit */short) ((_Bool) var_12));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1] [i_1 - 1] [i_1 - 2]))))) : (((4294963200U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6144)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_0])) || (arr_4 [(unsigned short)1] [i_1] [i_1 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_4 [(_Bool)1] [(_Bool)1] [i_1 - 1]))))))))));
                            var_17 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)9)), (var_6)))) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) (!(arr_5 [i_0] [i_1 - 2] [i_6]))))))));
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_15 [i_0] [i_1 + 1])))) ? (max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_5] [i_6] [1])) ? (arr_13 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [(signed char)3] [i_5] [(signed char)3] [i_5] [i_5])))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */long long int) 4096U)) - (7408692486176501709LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)15225)) : (((/* implicit */int) var_12))))))) : ((((_Bool)1) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) && (((/* implicit */_Bool) arr_0 [i_6] [(unsigned char)9]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_21 [9ULL] [i_1] [9ULL] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) (signed char)31)) ? (3090376042834546526LL) : (((/* implicit */long long int) 4294963200U)))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)-26542))))))) : (max((arr_13 [i_0]), (((/* implicit */long long int) (unsigned short)6136))))));
                            arr_22 [i_0] [10] [i_7] [(signed char)1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6149)) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_7] [(_Bool)1] [i_0] [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30319)) ? (-3437736022121708547LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32766)))));
                var_20 |= ((/* implicit */signed char) (!(var_2)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294963200U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32767))));
}
