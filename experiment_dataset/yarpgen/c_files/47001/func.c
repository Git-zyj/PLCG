/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47001
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) arr_2 [i_0]);
                    var_15 ^= ((/* implicit */unsigned long long int) ((short) arr_2 [i_0 - 4]));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1])))) ? (max((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1 + 1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_0]))) : (min((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned short) min((var_8), (((/* implicit */long long int) ((unsigned short) var_4))))));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_18 |= ((((_Bool) ((long long int) arr_7 [i_3]))) ? (((arr_9 [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))) : (max((-4668967540931581665LL), (((/* implicit */long long int) 4294967285U)))));
        /* LoopSeq 2 */
        for (int i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) arr_10 [(signed char)0] [(signed char)0] [i_3]);
            var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */unsigned int) 402653184)) : (4294967280U)))) ? (((/* implicit */unsigned long long int) max((var_13), (var_10)))) : ((-(arr_10 [i_3] [i_3] [i_4 + 2]))))));
        }
        for (int i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
        {
            arr_14 [i_3] [(_Bool)1] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_3])), (arr_10 [(unsigned short)19] [i_5 - 2] [i_5])));
            var_21 = ((/* implicit */int) (-(28U)));
            arr_15 [i_5 - 1] [21ULL] = ((/* implicit */short) max((((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (short)-3885)) : (1669826893))), (((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_13 [i_3] [(unsigned short)0]))), (max((((/* implicit */short) arr_8 [i_5])), (arr_12 [7ULL]))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            arr_20 [3U] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_17 [i_6] [(unsigned short)6] [i_3])))))))) : (arr_9 [i_3] [i_3])));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((int) 17418939868488733953ULL)))) + (((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_28 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1])))))))));
                            arr_30 [i_9] [i_9] [7ULL] [i_9] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_8] [i_6 - 2] [i_8] [i_9] [i_6 - 1] [(unsigned short)12]))));
                            var_23 = ((/* implicit */long long int) arr_12 [i_9]);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_8] [i_7] [i_6 + 1] [i_6] [i_6 - 2] [i_3])))) != (max((arr_24 [i_6 + 1] [i_7]), (((/* implicit */unsigned long long int) min((arr_11 [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_28 [i_3] [(_Bool)1] [i_7] [i_8] [i_8] [i_6])))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (-(arr_31 [i_3] [i_3] [i_3])));
                                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 369808774870728935LL)), (1027804205220817678ULL)))) ? (((/* implicit */int) ((short) arr_10 [i_12] [i_12 - 3] [i_12 + 1]))) : (((int) arr_34 [i_12 - 1]))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) 1027804205220817662ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (2639114915306124638LL)))));
                                arr_42 [i_3] [i_3] [(unsigned short)7] [i_12] [i_13] = ((/* implicit */unsigned long long int) var_4);
                                arr_43 [i_3] [i_10] [i_12] [i_12] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_3] [i_10] [i_10] [i_11] [i_11] [(short)2]))))) ? (((((/* implicit */_Bool) arr_24 [i_3] [i_3])) ? (arr_24 [i_11] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_3] [i_10] [i_11] [i_3] [i_10] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17095)) * (((/* implicit */int) (short)24220)))))));
                    arr_44 [i_3] [4LL] [i_11] [4LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967292U), (((/* implicit */unsigned int) (signed char)6))))) ? (-369808774870728935LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18535)))));
                }
            } 
        } 
    }
}
