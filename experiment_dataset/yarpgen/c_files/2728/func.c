/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2728
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) 1152780767118491648LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (830170890307874450LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24965))))))) >= (((/* implicit */long long int) min((((/* implicit */int) (short)24965)), (max((((/* implicit */int) (unsigned char)255)), (arr_1 [i_0]))))))));
        var_11 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)30)), (-1152780767118491649LL)));
        arr_4 [i_0] [(signed char)8] = min(((~(var_2))), (((/* implicit */long long int) ((_Bool) (signed char)30))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)-29627)) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)-29627)), ((unsigned short)7)))))))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) var_7);
                    arr_12 [i_1] [(unsigned short)22] [i_3] [i_2] = ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (min((arr_10 [i_2] [i_3] [i_3 - 1] [i_1]), (arr_10 [i_2] [i_2] [i_3 + 1] [(short)1]))) : (min((var_2), (((/* implicit */long long int) ((var_5) / (((/* implicit */int) var_1))))))));
                    arr_13 [5] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2])))) <= (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-32131)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_6 [(unsigned char)19])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_1] [i_2 - 2] [i_2 - 1] [i_1]))))))));
                    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (17824076749837928521ULL) : (((/* implicit */unsigned long long int) 2147483647))))) && (((/* implicit */_Bool) ((long long int) var_0))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)11353)))))) : (var_5)));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1152780767118491648ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4]))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-29627)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_23 [i_4] [i_5] [(unsigned char)17] = ((/* implicit */long long int) max((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (arr_8 [i_5 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6])) || (((/* implicit */_Bool) arr_10 [i_6] [i_5] [i_4] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3402832289U))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                arr_29 [i_6] [i_7] [i_6] [i_7] [7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (short)24964))));
                                var_16 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(0)))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)100)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) * (min((min((arr_10 [23U] [i_5 - 1] [i_7] [23U]), (arr_26 [i_8] [i_7] [i_6] [i_7] [i_7]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) - (-2067355435524269154LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) min((min((0LL), (((/* implicit */long long int) arr_0 [i_4] [i_4])))), (min((arr_17 [i_4] [22ULL]), (arr_17 [i_4] [i_4])))));
    }
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */int) ((((arr_26 [4LL] [i_9] [4LL] [i_9] [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) (short)13226))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [i_9])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))));
        arr_35 [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_6 [13LL]))))))), (((arr_8 [i_9]) * (((/* implicit */unsigned long long int) arr_7 [i_9] [i_9] [i_9]))))));
        var_19 |= ((/* implicit */unsigned short) min((2047), (-25)));
        arr_36 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_17 [24ULL] [24LL]) <= (var_2))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_31 [7ULL] [7ULL])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_9 [i_9] [i_9] [i_9] [i_9]))))))) ? ((+(((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_9)) : (var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((long long int) arr_6 [i_9]))))))));
    }
}
