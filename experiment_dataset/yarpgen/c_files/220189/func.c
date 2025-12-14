/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220189
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] = ((/* implicit */long long int) ((_Bool) (((!(((/* implicit */_Bool) (short)0)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32745))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 120542230264674432ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)217))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((+(arr_0 [i_0] [3U]))) * (((((/* implicit */_Bool) ((unsigned short) (short)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (arr_0 [i_0] [i_0])))));
        var_13 = ((/* implicit */_Bool) (unsigned short)40783);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */long long int) (unsigned char)0);
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 3799928737526558555ULL)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)40783))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (arr_0 [i_1] [22LL]) : (arr_0 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1]) > (arr_0 [i_1] [i_1]))))) : (((((/* implicit */_Bool) (short)13580)) ? (arr_0 [(unsigned char)11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((9384331436603234391ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
        var_16 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)131))))) != (arr_5 [i_2]));
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_0))));
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
    {
        for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) (short)(-32767 - 1));
                    arr_21 [i_3] = ((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3]);
                    arr_22 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)22517))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)24))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_36 [(unsigned short)9] [i_6] [i_7] [i_7] [10U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) ((unsigned short) 16463851907024922873ULL))) : (((/* implicit */int) (unsigned short)14587))))) || (((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9 + 1] [i_9 + 3])) && (((/* implicit */_Bool) arr_34 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1]))))));
                            var_20 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24761))))) ? (((/* implicit */int) (short)-31610)) : (((/* implicit */int) (unsigned char)9))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 2; i_11 < 17; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (short)-15175)))))));
                            arr_39 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) (short)32767);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_34 [i_7] [i_7] [i_7 - 1] [i_8] [i_11 + 1])) : (((/* implicit */int) arr_7 [i_9 + 1] [i_7 - 1]))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9 - 2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_29 [i_11] [(unsigned char)15] [i_11] [i_11 + 4]))))) ? (arr_38 [i_6] [i_6] [i_6] [9LL] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)32744)))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_6])) % (((/* implicit */int) (short)-16057))));
                    }
                } 
            } 
        } 
    }
}
