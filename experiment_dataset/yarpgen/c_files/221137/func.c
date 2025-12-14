/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221137
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
    var_15 -= ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */int) arr_1 [i_0]);
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))))) & (arr_0 [i_0 - 1] [i_0 - 1])));
        var_17 ^= ((/* implicit */long long int) ((((arr_2 [i_0] [i_0 - 1]) ^ (((/* implicit */int) arr_3 [i_0 + 2])))) >= (((((/* implicit */int) arr_3 [i_0 + 2])) - (arr_2 [i_0] [i_0 + 2])))));
    }
    for (short i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_18 = arr_2 [i_1 + 2] [i_1];
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [5LL] = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((1554652224) << (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_2])) == (arr_7 [i_1] [i_1])))))))));
            var_19 *= ((/* implicit */signed char) ((arr_6 [i_1]) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-22340)) != (((/* implicit */int) (unsigned char)73))))) <= (((/* implicit */int) arr_1 [i_1 - 1])))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && ((!(((((/* implicit */_Bool) (short)22339)) && (((/* implicit */_Bool) (unsigned short)19447))))))));
        }
        var_21 *= ((/* implicit */unsigned int) arr_1 [i_1 + 2]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) ^ (4294967268U)));
        var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3])) != (((/* implicit */int) (unsigned short)11851)))))));
        arr_14 [i_3] &= ((/* implicit */unsigned char) arr_12 [i_3]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            arr_19 [(short)12] [i_4] [i_5 + 1] = ((/* implicit */signed char) arr_18 [(signed char)15] [i_5] [i_4]);
            var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_4])))), (((((var_7) <= (((/* implicit */long long int) var_3)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_4] [5U])) : (arr_11 [i_4]))) : (((/* implicit */int) arr_16 [i_4]))))));
        }
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)651)))))))) > (((/* implicit */int) arr_15 [i_4] [i_4])))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_16 [i_4]), (arr_12 [i_4]))))));
        arr_20 [13LL] [i_4] = ((/* implicit */short) arr_15 [13] [(unsigned char)9]);
        var_26 = ((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_4]);
    }
}
