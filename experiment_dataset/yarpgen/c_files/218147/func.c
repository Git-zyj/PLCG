/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218147
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
    var_20 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (short)32752)) ? (-2652838024272454161LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7346))))), (((/* implicit */long long int) (short)-32766)))) / (((/* implicit */long long int) var_12))));
    var_21 = ((/* implicit */unsigned long long int) min(((short)-32748), (((/* implicit */short) ((((/* implicit */_Bool) max(((short)-32748), ((short)-3537)))) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65534)), (8191)))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3538)) || (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) var_8);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) ? (-140217570731212841LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1]))))))));
            var_24 = ((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_1]);
        }
        var_25 &= ((/* implicit */long long int) arr_4 [i_0] [(signed char)6]);
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                arr_16 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2])))) || (((/* implicit */_Bool) var_10))));
                var_26 = ((/* implicit */long long int) var_16);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62343)) || (((/* implicit */_Bool) (unsigned char)29)))))));
            }
            arr_17 [2ULL] [8U] [2ULL] |= ((/* implicit */signed char) 140217570731212841LL);
        }
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6645)) || (((/* implicit */_Bool) 3321900382U)))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) arr_23 [i_2 + 4] [i_2 - 3] [i_5 + 1]))));
            }
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) arr_22 [i_2 + 3] [i_5 + 1] [i_7 + 1]);
                var_31 = ((/* implicit */long long int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -140217570731212843LL)) || (((/* implicit */_Bool) (short)32752))))))));
            }
            for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_2 - 2] [i_2 - 3] [i_2 + 4])) || (((/* implicit */_Bool) arr_26 [i_2 + 2] [i_2 - 2] [i_2]))));
                var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3537)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8 + 2])))));
            }
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32734)) ? (((/* implicit */int) (unsigned short)18720)) : (((/* implicit */int) (signed char)2))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10849582003319671732ULL)) ? (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (short)-32736)))) : (((/* implicit */int) (unsigned short)24883))));
            var_36 += ((/* implicit */unsigned short) ((arr_24 [i_2 - 1] [i_9] [i_2 - 2] [i_2 + 4]) ? (7371222909315559399LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 4] [i_2 - 3])))));
        }
        arr_30 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_2 + 3]))));
    }
    var_37 = ((/* implicit */long long int) var_1);
}
