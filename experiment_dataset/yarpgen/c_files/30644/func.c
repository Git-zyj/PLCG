/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30644
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((min((max((((/* implicit */unsigned long long int) arr_8 [i_0])), (18446744073709551615ULL))), (arr_6 [i_0] [14U] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)101)) == (((/* implicit */int) (short)-23404))))) >= (((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)-23404)) ? (arr_8 [i_0]) : (((/* implicit */int) arr_9 [i_4 - 1] [(short)19] [i_4] [i_4])))) == (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) (short)-23404)) : (((/* implicit */int) arr_12 [i_0] [i_0] [3LL])))))))));
                                var_15 = ((/* implicit */unsigned long long int) (unsigned short)63);
                                var_16 = ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1]))) == (max((((/* implicit */long long int) (short)-23393)), (-1LL))))) ? (min((min((((/* implicit */long long int) (short)-6964)), (-7251968801378924137LL))), (((/* implicit */long long int) (~(arr_8 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 2]), (arr_10 [i_0 - 1] [14LL] [i_0] [i_0 - 2]))))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */unsigned char) ((min((arr_0 [i_0 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)3])) ? (((/* implicit */int) (short)-26404)) : (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0]))))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_2] [(unsigned char)13] [i_0 - 1])))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15374))) >= (arr_6 [i_0] [i_0] [i_0])))), ((unsigned char)220)))) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)12701))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26404)) ? (((/* implicit */int) (signed char)48)) : (arr_18 [i_5])))), (11344177406978496477ULL)))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_16 [i_5])) ? (max((arr_8 [i_5]), (-14))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)31193))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7 - 1] [i_7 - 1] [i_7])) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 + 3] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_13 [i_7] [i_6] [(signed char)21] [i_6] [i_7 - 1] [i_7 - 1] [i_7]))))) ? (1412199453) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)214)))) >= (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)-1)))))))));
                    var_21 = ((/* implicit */long long int) ((short) max(((short)255), (((/* implicit */short) (unsigned char)138)))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(max((arr_8 [i_7 + 3]), (((/* implicit */int) arr_12 [i_7] [i_7 + 3] [i_7])))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) arr_7 [i_5] [i_5] [i_5] [i_5]))), (max((((/* implicit */short) (signed char)-1)), ((short)20592)))))) ? ((+(((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) arr_22 [i_7] [i_7]))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((arr_1 [i_5]) >= (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [(signed char)16])) ? (((/* implicit */long long int) 14191690)) : (arr_3 [22ULL]))))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_7 [i_5] [i_5] [(signed char)20] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (unsigned char)17)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_5]), (((/* implicit */unsigned int) (unsigned char)69))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) - (max((((/* implicit */long long int) 14191683)), (2097151LL))))) : (((/* implicit */long long int) 1023)))))));
        var_26 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned char)180))) >= (-14191665)))), ((unsigned char)190)));
    }
    for (long long int i_8 = 3; i_8 < 10; i_8 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_14 [i_8] [i_8] [(unsigned short)18] [(unsigned short)18] [i_8] [i_8 + 1])) ? (((/* implicit */int) (short)26403)) : (((/* implicit */int) (short)-26403))))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20764))))) ? ((~(arr_1 [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)10] [i_8] [i_8] [i_8 - 3] [i_8 - 1] [i_8] [i_8])))))));
        var_28 ^= ((/* implicit */_Bool) ((((min((3357819454416259384LL), (((/* implicit */long long int) (unsigned char)201)))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]))) : (9176216217342455035LL)));
        var_29 = -14191691;
    }
    var_30 = ((/* implicit */short) var_12);
}
