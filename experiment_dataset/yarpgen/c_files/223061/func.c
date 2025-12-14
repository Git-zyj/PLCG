/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223061
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
    var_20 = ((/* implicit */short) var_18);
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (-(var_15))))), (((((/* implicit */_Bool) ((unsigned char) 3579505620U))) ? (((/* implicit */int) ((((/* implicit */long long int) 1830709679U)) < (var_9)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)13669)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551589ULL))))), ((signed char)0)))), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)166))))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [2ULL] [i_0]), (((/* implicit */unsigned long long int) (signed char)-64))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (signed char)90))))) ? (((((/* implicit */_Bool) arr_6 [6])) ? (arr_6 [(_Bool)1]) : (arr_6 [(unsigned char)18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))))));
        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)65))))), (min((((/* implicit */unsigned int) (signed char)75)), (715461671U)))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [22ULL])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [18]))))) : (((/* implicit */int) arr_4 [i_1]))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 214064557U)) : (arr_6 [i_2]))))), (((/* implicit */unsigned long long int) var_2))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_4 [i_2]))));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((long long int) arr_7 [i_2]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_28 = ((/* implicit */short) -1615672950915163981LL);
                arr_17 [i_2] [i_2] [i_4] = ((/* implicit */signed char) var_9);
                arr_18 [i_2] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17391727782298832624ULL)));
            }
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_29 = ((/* implicit */short) ((-1501855175) <= (((/* implicit */int) arr_8 [i_2]))));
                        arr_23 [i_2] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -646278305)) ? (((/* implicit */int) (unsigned short)757)) : (((/* implicit */int) var_11)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                for (signed char i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_30 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_11 [i_7] [i_7] [i_7])) ^ (((/* implicit */int) (unsigned short)51866)))));
                        arr_30 [i_7] [i_2] = ((/* implicit */short) var_18);
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_28 [i_3 + 2] [i_7 + 2] [i_8 + 3] [i_3 + 2]))))));
                    }
                } 
            } 
            arr_31 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13669)) ? ((-(((/* implicit */int) arr_8 [i_2])))) : ((~(((/* implicit */int) (signed char)-91))))));
        }
    }
    var_32 = ((/* implicit */unsigned char) var_16);
}
