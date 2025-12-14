/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32808
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
    var_12 = ((/* implicit */_Bool) ((((var_6) << (((/* implicit */int) (_Bool)0)))) >> ((((-(((((/* implicit */int) (unsigned short)25)) << (((/* implicit */int) (unsigned char)22)))))) + (104857649)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) || (((arr_1 [(signed char)6]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_14 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)194)), (arr_0 [i_0 - 1]))))) + ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775794LL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(short)9] [i_0] [i_0] = ((/* implicit */short) (unsigned char)152);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_2))));
                    arr_8 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(short)8]))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) / ((-(18446744073709551615ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (var_10) : (826637870))));
        arr_13 [i_3 + 1] = ((/* implicit */signed char) var_10);
        arr_14 [i_3] [4ULL] = ((/* implicit */_Bool) (unsigned char)17);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (unsigned char)59))));
        var_18 -= ((/* implicit */short) (-((-(((/* implicit */int) var_0))))));
    }
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_1))));
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_4]), (arr_15 [i_4])))) ? (((/* implicit */int) arr_6 [(short)2] [i_4 - 1] [i_4] [i_4 - 1])) : ((~(((/* implicit */int) (unsigned char)246))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_0))))))))) : (((/* implicit */int) arr_10 [0LL]))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] [i_4 + 1] = 18446744073709551615ULL;
                        arr_25 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (unsigned char)7))) ? (((/* implicit */int) ((_Bool) 18446744073709551611ULL))) : (((/* implicit */int) (unsigned char)253)))) == (((/* implicit */int) arr_6 [i_6] [(_Bool)1] [i_5] [i_6]))));
                    }
                } 
            } 
        } 
    }
    var_20 -= ((/* implicit */unsigned short) var_7);
}
