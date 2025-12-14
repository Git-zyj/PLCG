/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234773
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
    var_10 = ((/* implicit */long long int) (short)31);
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-4696717226968791393LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)3]))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), ((unsigned short)15310)))))))) ? (((/* implicit */int) ((short) arr_1 [i_0 - 1]))) : (((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) var_0))))));
                    var_13 -= ((/* implicit */long long int) (signed char)2);
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)150)) && (((/* implicit */_Bool) (unsigned char)82))))), ((signed char)-83)));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [13LL] [6] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15310)) & (((/* implicit */int) var_8))))))));
                        arr_12 [i_1] [4LL] [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) + (arr_3 [i_3 + 1] [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */int) arr_0 [i_0 - 1])) + (arr_3 [i_3 + 1] [i_0 - 1] [i_0 + 1]))) : (((arr_3 [i_3 - 1] [i_0 + 1] [i_0 - 1]) - (arr_3 [i_3 + 1] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_4 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1])) : (((/* implicit */int) (signed char)41)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_1] [i_2] [(short)3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)15310)) : (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-49)))))) << (((((/* implicit */int) (signed char)121)) - (109)))));
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_0 [i_0]))));
                        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)-122))) ? ((+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_4 + 1])))) : (((/* implicit */int) max(((unsigned short)50225), (((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_0 + 1] [i_4 + 1])))))));
                        arr_18 [i_0] [i_2] [i_1] [i_4] [7] [i_2] = ((/* implicit */signed char) ((unsigned short) (signed char)-116));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) (signed char)-95))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-22), ((signed char)102))))) : (((long long int) var_6)))) >= (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (short)-9741)))))));
    var_17 = ((/* implicit */unsigned short) (short)255);
}
