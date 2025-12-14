/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242168
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
    var_15 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */int) (unsigned short)54880)) : (-747871656)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((arr_2 [i_0 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0])))))))));
    }
    var_17 |= ((/* implicit */unsigned char) ((long long int) var_6));
    /* LoopSeq 1 */
    for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_18 -= ((/* implicit */unsigned long long int) (short)-2024);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */short) ((arr_7 [i_1] [i_1 - 3] [(unsigned short)11]) > (arr_7 [i_1] [i_1] [i_2])));
            var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_20 |= ((((/* implicit */_Bool) ((short) 2861931791963032965ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */int) (_Bool)0)), (1374316628)))))) : (((((((/* implicit */int) (signed char)-58)) <= (((/* implicit */int) (_Bool)1)))) ? (((long long int) arr_4 [i_1 - 2] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3389541096105294201LL)) && (((/* implicit */_Bool) arr_5 [i_3])))))))));
            var_21 = ((/* implicit */unsigned short) arr_1 [i_3]);
            var_22 -= ((/* implicit */long long int) (short)0);
            arr_11 [(short)9] [i_1] [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2055087734768634638LL)), (6027335911626459241ULL)))) && (((/* implicit */_Bool) (short)22307))))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) -6088172766504093366LL)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 562949953420288LL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)255))));
                var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)35)));
            }
            var_25 = ((/* implicit */unsigned long long int) var_4);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    {
                        arr_22 [i_7] = ((/* implicit */unsigned char) var_6);
                        var_26 *= ((/* implicit */short) ((arr_18 [i_1 - 2] [i_4]) ^ (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)41)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-43)) < (((/* implicit */int) var_6))))))))));
                        var_27 |= ((/* implicit */long long int) min((arr_4 [(signed char)1] [(_Bool)1]), (((/* implicit */unsigned long long int) ((-9223372036854775795LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))))))));
                    }
                } 
            } 
        }
        arr_23 [i_1 - 1] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) ((arr_18 [i_1 - 1] [i_1 + 1]) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1 - 2]))))))))));
    }
}
