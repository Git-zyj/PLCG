/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3482
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
    var_11 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53360))) & (18446744073709551599ULL)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65532)) ? (var_5) : (((/* implicit */unsigned int) var_4)))))))));
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_0] [i_0]));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) | (((unsigned long long int) (unsigned short)65518))));
                        arr_13 [i_0] [(unsigned short)2] [i_2] = ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [7U] [i_0])) ? (var_8) : (var_8)));
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_11 [i_0]))));
                        arr_15 [i_0] [i_0] = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_4 [8LL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)8])));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_22 [(unsigned short)15] [i_0] = ((unsigned long long int) (short)32750);
                    arr_23 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)3))))));
                    arr_24 [i_5] [5ULL] [i_0] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3775908325U)) ? (arr_4 [i_0] [i_1] [i_4]) : (arr_4 [i_0] [i_1] [i_1])));
                }
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [(signed char)3])));
                var_16 = ((/* implicit */unsigned long long int) 3775908302U);
            }
        }
        var_17 = ((/* implicit */signed char) var_3);
    }
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1614968103)), ((+(min((var_0), (var_8)))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) & (2462472883U)));
}
