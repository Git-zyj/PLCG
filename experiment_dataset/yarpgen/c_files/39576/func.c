/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39576
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
    var_10 = ((short) ((((9389412764408161633ULL) <= (((/* implicit */unsigned long long int) 1342640764U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9389412764408161641ULL)) ? (((/* implicit */int) (unsigned short)48752)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (12377176912874499133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)96)), ((unsigned short)48772)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [15U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21873))) - (12377176912874499113ULL))), (6069567160835052484ULL)))) ? (max((9057331309301389982ULL), (((/* implicit */unsigned long long int) (unsigned short)11)))) : ((((~(arr_3 [i_1] [15] [i_0]))) * (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) 1736550594U)) : (arr_3 [i_1] [i_1] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)204)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [(short)3] [(unsigned char)2])))))));
            }
        } 
    } 
    var_12 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19839)) - (((/* implicit */int) (unsigned short)64273))))) ? (((int) 12377176912874499109ULL)) : (((17) + (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-24058)) || (((/* implicit */_Bool) -3116487387632391973LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) ^ (4718734914835758773ULL))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_19 [i_4] [i_5 + 1] [18LL] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_13 [i_6 + 2] [i_5 + 1] [i_5 + 1] [i_4 + 2]))) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_5 + 1] [i_5 + 1] [i_6 - 3] [i_6] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5]))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_2 [i_2] [i_3]))))))) : (max((((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_3])) == (((/* implicit */int) (unsigned short)64267))))), (arr_0 [i_2])))));
                                arr_20 [i_4] = ((/* implicit */int) ((unsigned long long int) arr_8 [i_2] [i_6]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_16 [i_4] [i_7]))));
                        arr_24 [i_2] [i_2] [i_4] [i_7] = ((/* implicit */unsigned long long int) (short)1889);
                        arr_25 [i_4] [i_7] = ((/* implicit */signed char) var_0);
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) arr_16 [i_4 - 1] [i_3]);
                        var_15 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_0)) || (((var_1) > (((/* implicit */int) (unsigned char)188))))))));
                    }
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16783)) + (((/* implicit */int) (unsigned short)1267))));
                    arr_28 [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-123))))), ((~(min((562709032U), (((/* implicit */unsigned int) arr_23 [i_2]))))))));
                }
            } 
        } 
    } 
}
