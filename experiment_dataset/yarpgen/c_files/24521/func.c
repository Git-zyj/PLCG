/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24521
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0 + 2] [i_0 + 1];
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((/* implicit */long long int) min(((unsigned short)26354), (((/* implicit */unsigned short) (short)-12953))))), (9223372036854775807LL))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((((/* implicit */int) ((-1LL) < (1LL)))) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-933122164) : (((/* implicit */int) (unsigned char)255))))), (-6LL))) + (24LL))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) -20LL)))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((unsigned char) -444353300)))));
        }
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) (unsigned char)1);
            arr_9 [i_0] [i_0] = ((/* implicit */int) (+(arr_0 [i_2] [i_2])));
        }
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min(((unsigned short)47644), (((/* implicit */unsigned short) var_10))))) ? (min((2147483647), (2147483647))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (449729057U))))))));
            var_16 = (~((~(max((arr_10 [i_0]), (arr_4 [i_0] [i_0]))))));
        }
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(-1LL))) / (((((/* implicit */_Bool) (unsigned short)47618)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 6U)))) : (min((((/* implicit */long long int) -926639387)), (((((/* implicit */_Bool) (unsigned char)246)) ? (arr_7 [i_0]) : (1LL))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_17 [i_0] [i_0 - 2] [i_0 - 2]) | (((/* implicit */unsigned int) 316740646))))) / (max((min((-8891111671945981567LL), (((/* implicit */long long int) (unsigned char)253)))), (((/* implicit */long long int) max((((/* implicit */int) var_5)), (2026836529))))))));
                    var_19 = ((/* implicit */int) arr_16 [i_0 + 2] [i_0]);
                    arr_19 [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((358936898), (((/* implicit */int) (_Bool)0)))), (2026836529)))) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((358936875) >> (((((/* implicit */int) (unsigned short)64829)) - (64825)))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17892)))));
                    var_20 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (unsigned short)44013))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_6]) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_6]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-4107))))) : (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))) : (560372761U)))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) : (-21LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_18 [i_6])) : ((+(((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 7; i_7 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7 + 2] [i_7])) ? ((-(689575879U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-24732))))))));
        var_23 = arr_20 [i_7 + 3];
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (((+(var_6))) / (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) var_11))))))) : (min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) -2026836530)) ? (-8860615760246289803LL) : (2740532353878562041LL)))))));
}
