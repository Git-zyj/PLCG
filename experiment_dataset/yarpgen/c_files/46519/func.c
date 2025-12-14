/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46519
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)1893)), (((((/* implicit */_Bool) 0ULL)) ? (arr_0 [9ULL] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0] [0ULL])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))))))))));
        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0] [i_1] [i_2]));
                arr_6 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)65535));
                var_17 = ((/* implicit */unsigned short) var_13);
                arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1]);
                arr_8 [i_2] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)0))))) : (arr_5 [i_0] [i_0] [i_0])));
            }
            var_18 = ((/* implicit */unsigned long long int) -1774125343);
        }
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [3ULL] [i_0]))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (8889926326805090725ULL))))) : (((/* implicit */unsigned long long int) min((arr_4 [(unsigned short)3] [(unsigned short)3] [i_0]), (((/* implicit */long long int) (unsigned char)27)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] [4ULL] &= ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) 6398530864974430568LL);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_7 - 1] = ((/* implicit */unsigned char) var_7);
                                var_21 = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                }
            } 
        } 
        arr_25 [i_3] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) min(((unsigned short)54355), (((/* implicit */unsigned short) arr_10 [i_3])))))));
    }
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11181)) ? (9355765995886206302ULL) : (5561052030777632587ULL)));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((signed char) max((arr_21 [i_8] [i_8]), (((/* implicit */long long int) (unsigned char)4))))))));
        arr_29 [i_8] [10U] = ((/* implicit */short) min((arr_2 [4ULL] [4ULL] [i_8]), (((/* implicit */unsigned short) ((short) min((((/* implicit */int) var_1)), (arr_16 [i_8] [i_8] [i_8])))))));
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */signed char) arr_33 [i_9] [i_9]);
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-9982), (((/* implicit */short) var_10)))))) : (max((arr_30 [i_9]), (arr_30 [i_9]))))))));
    }
    var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((long long int) 14986280101532772414ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) -2147483644)) ? (562178439115796100ULL) : (6044377135317800329ULL)))))));
    var_27 -= ((/* implicit */short) ((unsigned char) ((unsigned char) min((740346297), (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            {
                var_28 = ((/* implicit */short) min((var_28), (min((((/* implicit */short) (unsigned char)179)), ((short)-26030)))));
                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((unsigned char) (_Bool)0))), (var_3)));
                var_30 = ((/* implicit */_Bool) (unsigned char)186);
            }
        } 
    } 
}
