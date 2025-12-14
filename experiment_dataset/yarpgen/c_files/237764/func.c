/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237764
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
    var_15 = ((/* implicit */short) var_1);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)39030)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))))) || (((/* implicit */_Bool) var_12))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) arr_2 [i_0]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2926))) : (arr_2 [1])))) ? (arr_3 [22LL]) : (((int) 3898021441U))));
        var_19 = ((/* implicit */int) 3898021441U);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((signed char) ((arr_9 [i_1] [(_Bool)1] [i_1] [i_1]) ? (arr_0 [9LL]) : (((/* implicit */int) arr_6 [(short)18])))));
                        var_21 += ((/* implicit */unsigned short) arr_8 [(signed char)23] [i_2] [11] [i_2]);
                        var_22 *= ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_1]))));
                    }
                } 
            } 
            arr_13 [i_1] [(_Bool)1] = ((/* implicit */short) arr_1 [9U]);
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_18 [1] [i_5] = ((/* implicit */unsigned short) (~((+(arr_16 [i_1])))));
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_23 = arr_21 [17] [i_1] [i_1];
                var_24 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned short)61052)))));
            }
            for (short i_7 = 1; i_7 < 23; i_7 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((unsigned long long int) -1));
                var_26 = ((/* implicit */_Bool) ((int) (short)-5735));
                var_27 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_23 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_5]))) : (((((/* implicit */_Bool) (short)-5725)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [(unsigned short)19])))));
            }
            var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)26872)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)0]))) : (arr_21 [i_5] [(short)14] [(unsigned short)16])))));
        }
        var_29 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)39017)) ? (arr_16 [(signed char)9]) : (arr_20 [(short)21] [(short)21] [(short)21] [i_1]))) % (((/* implicit */unsigned long long int) arr_22 [6] [(unsigned short)11] [21]))));
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) (signed char)57);
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(arr_26 [i_8] [i_8]))))));
        var_32 -= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [(unsigned char)19] [i_8] [i_8])) ? (((/* implicit */int) arr_19 [i_8] [i_8] [(short)11] [i_8])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) ((unsigned short) (unsigned short)7135))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [(_Bool)1])))) && (((/* implicit */_Bool) (~(3186908688U))))))));
        var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) var_14))), (max((max((var_3), (var_3))), ((~(arr_24 [i_8] [i_8] [(unsigned short)4])))))));
    }
}
