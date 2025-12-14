/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46053
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_0 [(signed char)0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (long long int i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) -5650059109215182343LL);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [17LL] [i_1])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [(short)7] [i_1 + 1])) : (((/* implicit */int) min((arr_5 [i_1] [14LL]), (((/* implicit */short) var_3)))))))), (0ULL)));
        arr_8 [i_1] = ((/* implicit */unsigned char) 4028224798U);
    }
    for (long long int i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_19 [(unsigned short)0] [i_3] [i_4] [i_5] |= ((/* implicit */short) (~((~(arr_18 [(unsigned char)10] [i_2 + 2] [i_2] [i_5])))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12370))) | (var_8)))));
                        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 20U)) ? (((/* implicit */int) (short)-32248)) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) (signed char)81)) : ((-(((/* implicit */int) (unsigned short)65525))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [12LL] [i_4] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_18 [i_2] [i_5 + 4] [i_6] [i_5])))));
                            arr_25 [i_5] [(unsigned char)13] [i_4] [i_3] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) & (var_8))), (((/* implicit */unsigned long long int) max((arr_10 [i_2 - 1]), (arr_10 [i_2 + 2]))))));
                            arr_26 [i_5] [i_3] [4ULL] [i_5] [(signed char)3] = ((/* implicit */short) arr_11 [i_6] [i_2 + 4]);
                        }
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned int) 1321609742)) : (arr_18 [i_2] [(short)14] [i_2] [i_2 + 3]))))));
    }
    var_15 = ((/* implicit */unsigned char) 1042906916989648011LL);
    var_16 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */short) ((signed char) (unsigned short)16244)))));
}
