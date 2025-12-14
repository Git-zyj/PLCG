/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202276
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)48638))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4U]))) - ((+(arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)9567))))) ? (((((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)245)))) ? (max((5505031250304426840LL), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20029))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_0 [i_0]))))))))));
        var_13 |= ((/* implicit */signed char) ((min(((+(arr_1 [(signed char)17]))), (((/* implicit */unsigned int) ((int) (short)-8170))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (2292749665U))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (2002217614U) : (arr_1 [i_1]))) : (var_6)))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */long long int) (((+(((/* implicit */int) var_10)))) & ((~(((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (short)21574)) ? (var_0) : (var_9))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_1 [4ULL]);
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)60)) | (var_11)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)17))))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_2]))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
            {
                var_17 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_8 [i_2] [i_2])))) | (((/* implicit */int) min((var_10), (((/* implicit */signed char) arr_8 [i_2] [i_2])))))));
                arr_17 [i_4] [(_Bool)1] [i_4] |= ((/* implicit */unsigned int) arr_8 [i_4 - 1] [(_Bool)1]);
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_2] [i_2])), ((unsigned char)32))))));
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            var_20 *= arr_13 [i_3] [i_2];
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 |= ((7890080533525721795ULL) <= (((/* implicit */unsigned long long int) ((long long int) var_4))));
            var_22 = ((/* implicit */unsigned char) ((short) arr_10 [i_2]));
            arr_22 [i_2] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2] [i_2] [6]))));
        }
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) < (((/* implicit */int) (short)-30470)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) (short)-26285)) : (((/* implicit */int) arr_9 [(short)12]))))) : (min((var_9), (((/* implicit */long long int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_2] [(unsigned short)24] [i_2] [i_2])))) : (((((var_11) == (((/* implicit */int) (signed char)60)))) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_10)) : (var_11)))) : (min((5907030580472187638LL), (((/* implicit */long long int) arr_8 [i_2] [2ULL]))))))));
        arr_23 [i_2] = ((/* implicit */unsigned int) ((long long int) ((_Bool) var_7)));
        var_24 *= ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_25 += ((/* implicit */unsigned int) -1101120004469564660LL);
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_13 [i_6] [i_6]))))), (min((arr_3 [i_6]), (((/* implicit */unsigned int) arr_10 [(short)24]))))))) ? (((/* implicit */int) (short)-3236)) : (((((/* implicit */_Bool) 7737383637638700015ULL)) ? (((/* implicit */int) arr_12 [i_6] [20ULL] [i_6])) : (((/* implicit */int) arr_12 [i_6] [6ULL] [i_6]))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_29 [i_6] [i_6] [i_7] = ((/* implicit */signed char) arr_12 [i_6] [2U] [i_6]);
            var_27 = ((/* implicit */signed char) (~(((arr_26 [i_6]) % (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)22])))))));
        }
        var_28 = ((/* implicit */short) (-(min((-6641348398395297137LL), (((/* implicit */long long int) arr_13 [i_6] [i_6]))))));
    }
}
