/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197506
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) -1798138071)) : (var_12))), (((/* implicit */long long int) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))), (0ULL)))));
        var_17 = ((/* implicit */unsigned long long int) (signed char)-1);
        arr_3 [i_0] = ((((/* implicit */_Bool) var_12)) ? ((+(min((-2551085584441400701LL), (2551085584441400700LL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-30159))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((-(arr_4 [i_2] [i_1 - 1] [i_0]))) == (((/* implicit */int) (!(var_1)))))))));
                    arr_11 [i_2] [i_2] |= (!(((/* implicit */_Bool) ((unsigned long long int) -6843281983785104407LL))));
                    var_19 = ((/* implicit */long long int) 2147483647);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (18446744073709551613ULL)));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] |= ((/* implicit */int) var_6);
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_23 [i_6] [12ULL] [i_4] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (16597931373303986639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -3581572112716695553LL)) : (arr_14 [i_5] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-30159), (((/* implicit */short) var_2)))))))), ((-(((unsigned long long int) var_8))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((max((max((((/* implicit */long long int) arr_22 [i_7] [i_6] [10] [10] [i_4] [i_3])), (4769410777012340492LL))), (((/* implicit */long long int) (+(-1103585258)))))) / (((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [1LL]))) : (var_9))))))));
                            arr_28 [i_4] [i_7] = ((((/* implicit */int) (unsigned short)64971)) / (((((/* implicit */_Bool) 1447316528330048868ULL)) ? (((/* implicit */int) (unsigned short)54636)) : (((/* implicit */int) (_Bool)1)))));
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned char) 0ULL));
                            var_23 = ((/* implicit */short) ((unsigned char) max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12)))), (((((/* implicit */_Bool) var_14)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30174))))))));
                        }
                        var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23895)) ? (((/* implicit */int) arr_16 [i_3] [i_4] [i_5])) : (((/* implicit */int) (short)-48))))) ? ((~(var_13))) : ((-(((/* implicit */int) (short)-25857)))))));
                    }
                } 
            } 
        } 
    }
}
