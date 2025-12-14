/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227295
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)8623)) >> (((-46260508) + (46260532)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2905874004U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) 14449564672306678235ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (7736677313748773548ULL))))), (min((((/* implicit */unsigned long long int) ((int) 10710066759960778067ULL))), (((((/* implicit */_Bool) var_0)) ? (3997179401402873379ULL) : (((/* implicit */unsigned long long int) 2265044895U)))))))))));
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) var_3)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */unsigned long long int) var_1)) | (max((3997179401402873380ULL), (((/* implicit */unsigned long long int) (signed char)8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)8)), (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 2]))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) ((unsigned short) var_6)))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(14776840164330921526ULL)))) || (((/* implicit */_Bool) var_7)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_3 [i_0 + 4] [i_0 - 2] [i_1])) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_0] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) arr_3 [i_0 + 3] [i_1] [i_1]))))));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0 + 3] [i_1] [i_1]) : (((/* implicit */int) (signed char)12))));
            var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
            arr_5 [i_0] [i_1] |= ((/* implicit */long long int) ((arr_4 [i_0 + 2] [i_0 - 2] [i_1]) + (var_3)));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1])))));
            var_19 -= ((/* implicit */unsigned char) var_1);
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [(short)6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3997179401402873380ULL)) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */_Bool) 10710066759960778077ULL)) ? (var_2) : (((/* implicit */unsigned long long int) var_11)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)169)), (max((((/* implicit */unsigned long long int) var_6)), (10710066759960778070ULL))))))));
                    arr_15 [i_3] [i_4] [(unsigned char)3] [i_4] = ((/* implicit */_Bool) max((var_11), (var_1)));
                    arr_16 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) (unsigned short)61912))))))) ? (10710066759960778067ULL) : (10710066759960778068ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (((/* implicit */int) arr_1 [i_6])) : (((((/* implicit */int) arr_6 [i_6] [i_6])) + (arr_3 [i_6] [2] [i_6])))));
        var_23 |= ((/* implicit */int) ((signed char) 7736677313748773530ULL));
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_5))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_1)))) + (max((var_7), (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))))))));
}
