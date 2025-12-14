/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25434
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)65535))))))), (min(((-(arr_8 [(_Bool)1]))), (((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_1] [i_2] [11LL] [i_4] [i_4]) <= (((/* implicit */long long int) arr_0 [i_0] [17])))))))));
                                var_12 = ((/* implicit */unsigned int) max(((short)-10053), (((short) arr_6 [i_3] [i_1] [i_1] [i_0]))));
                                var_13 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_4 [(unsigned short)13] [i_4] [i_4])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 + 2])), ((unsigned short)65535))))))), (((((/* implicit */_Bool) arr_8 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [(_Bool)1])))))) : (arr_8 [(unsigned short)6])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [i_0])), (-128832353267203408LL))), (((/* implicit */long long int) max((arr_4 [i_0] [i_1] [9LL]), (0U))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-4667)), ((unsigned short)1))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2])) ? (arr_8 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 3] [16ULL] [i_2 - 1] [i_2] [i_2 + 1])))))));
                    var_15 = (-(((/* implicit */int) (unsigned short)65535)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4667)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (short)4667)))))))))));
    var_17 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((6028398621830004882LL), (((/* implicit */long long int) (short)-4667))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))), (max((2147483616), (((/* implicit */int) (unsigned char)8))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28298)) ? (((/* implicit */unsigned int) ((-433744585) & (((/* implicit */int) (short)-5389))))) : (4294967295U))))));
                    /* LoopSeq 3 */
                    for (int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_19 &= ((/* implicit */unsigned int) arr_15 [i_5] [(short)20] [i_6] [i_5]);
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41484)) && (((((/* implicit */_Bool) (short)-4675)) || (((/* implicit */_Bool) -714104160))))))), (((signed char) min((((/* implicit */unsigned long long int) arr_10 [i_5])), (arr_15 [i_5] [20LL] [i_7] [i_6]))))));
                        var_21 = ((/* implicit */short) arr_15 [i_5] [0LL] [i_7] [i_6]);
                        var_22 = ((((/* implicit */_Bool) arr_13 [18LL] [i_6] [i_7])) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_5] [i_6] [i_8])), (arr_10 [i_6])))) ? (((/* implicit */int) arr_18 [i_5] [i_6] [i_5] [i_5] [i_5])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-5389)), (arr_17 [i_5] [(_Bool)1] [i_7])))))) : (((/* implicit */int) (_Bool)1)));
                    }
                    for (int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        arr_22 [i_5] [(unsigned short)0] [i_6] [i_5] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_21 [4ULL] [4ULL] [i_5] [i_7] [i_9])), (((((/* implicit */_Bool) min((arr_18 [i_7] [i_7] [i_7] [(short)3] [i_7]), (((/* implicit */unsigned short) (signed char)-85))))) ? (4294967295LL) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)28298))) : (var_1)))))));
                        var_23 = ((/* implicit */unsigned long long int) (signed char)-69);
                        var_24 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_1)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
                    {
                        arr_25 [i_6] = ((/* implicit */long long int) arr_14 [i_6] [i_10 + 1] [i_10 - 2] [i_10 + 3]);
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5] [i_10 - 3] [18LL]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_20 [5] [i_7] [i_10 - 1]))) & (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [(_Bool)1] [i_5]))))))));
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_17 [i_5] [i_6] [(unsigned short)14]))));
                    var_27 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_5] [i_6] [i_7] [(unsigned short)22])), (((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_5] [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_6] [i_7] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_7] [i_7]))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        for (short i_12 = 1; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_32 [i_5] [(_Bool)1] [i_6] = ((/* implicit */long long int) arr_28 [i_6] [i_12] [i_7] [12LL] [(short)24]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 += ((/* implicit */int) var_7);
}
