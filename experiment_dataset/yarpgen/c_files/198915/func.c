/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198915
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
    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) -324379181)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (short)3968)))) : (((/* implicit */int) (signed char)75))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [(unsigned short)1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [(_Bool)1]))))), (((((/* implicit */_Bool) arr_8 [(unsigned char)5])) ? (arr_4 [i_2] [(signed char)14] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26606)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (unsigned char)246)))))))) : (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) * (22U)))) / ((-9223372036854775807LL - 1LL))))));
                        var_20 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) ^ (arr_4 [i_1 + 1] [i_3 + 1] [i_0 - 2])))), (min((max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned char) var_3)))))));
                        var_21 &= ((/* implicit */unsigned int) ((signed char) arr_1 [i_0]));
                        arr_11 [i_1] = ((((((/* implicit */_Bool) (-(-1377101322938790343LL)))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (signed char)4)) - (((/* implicit */int) arr_6 [(signed char)7] [i_2])))))) * (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) min((arr_1 [i_0 - 2]), (((/* implicit */unsigned short) var_12))))) : ((+(((/* implicit */int) arr_1 [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((long long int) (((~(((/* implicit */int) arr_6 [i_0] [i_4])))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [23ULL])), (arr_1 [(unsigned char)5])))) - (65519))))));
            arr_14 [11LL] [i_0] = ((/* implicit */_Bool) ((int) min((18446744073709551599ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)9))))))));
            var_23 = ((/* implicit */long long int) var_14);
        }
        arr_15 [(unsigned char)0] [(_Bool)1] = ((/* implicit */unsigned short) ((((((long long int) ((((/* implicit */int) arr_5 [9U] [9U] [20LL] [(signed char)5])) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [1ULL]))))) + (9223372036854775807LL))) >> (((max((((((/* implicit */_Bool) (unsigned char)225)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-125)), ((unsigned char)255)))))) - (87)))));
    }
}
