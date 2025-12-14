/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238624
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
    var_12 = ((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) >= (var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_10 [i_1]))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0 + 1] = (short)32763;
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
                    var_13 = ((/* implicit */unsigned short) (signed char)-24);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 1] [i_0 + 1])) + (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [1LL])));
                }
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((9223372036854775807LL), (((/* implicit */long long int) (short)-10137))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    arr_18 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (+(9223372036854775807LL)));
                    var_15 = ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)20)));
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */int) ((signed char) ((((unsigned long long int) arr_0 [(short)9])) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0 + 1]))))))));
                    arr_22 [4ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)10120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(unsigned char)4] [(unsigned char)4] [i_1] [(unsigned char)4])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -532073866)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))))))) : (((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */unsigned long long int) 9223372036854775794LL)) : (1985125974782119036ULL)))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */short) (~((+(var_11)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) 9693568626770364938ULL);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32749)) ? (((int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) -1305198328)) >= (-9223372036854775794LL))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5868328640662644734LL)) ? (((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) (unsigned short)22782)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (short)32749))));
        arr_27 [i_5] = ((/* implicit */short) -3437809238428575996LL);
        var_20 = ((/* implicit */int) 9223372036854775794LL);
    }
    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        arr_32 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_6 - 1]))));
        arr_33 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_23 [i_6])))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((((/* implicit */int) (unsigned short)11952)) << (((8783128686460904818ULL) - (8783128686460904812ULL)))))));
}
