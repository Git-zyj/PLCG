/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194136
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12318)) ? (16272377908196093720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) (signed char)-66)) - (var_0))) : (((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) (short)-1))))));
        arr_2 [i_0] = ((/* implicit */long long int) (~(((unsigned long long int) var_5))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_3)))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_12 = var_1;
            var_13 = ((/* implicit */_Bool) ((unsigned long long int) (short)-1));
            var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (-8685865672004443758LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_16 [(signed char)14] [(unsigned short)8] [i_2] [(unsigned short)8] = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_3 + 2] [i_3 - 4] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66)))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (unsigned short)2543)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            arr_25 [i_6] [i_1] [i_1] = ((/* implicit */short) var_1);
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
            arr_26 [15] [10LL] [i_1] = ((((_Bool) arr_23 [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 677464370U)))))) : (var_6));
            var_18 = var_9;
        }
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            arr_31 [i_7] [i_1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (var_6) : (arr_11 [i_1] [i_7] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (arr_7 [i_1] [18] [i_1]));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                arr_35 [(signed char)10] [i_7] [(unsigned short)14] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)3)))) % (((/* implicit */int) ((_Bool) var_5)))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_1])))))) : ((+(var_7)))));
                arr_36 [i_1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (9059867930986267918LL)))));
            }
        }
    }
    var_20 = ((/* implicit */unsigned short) ((unsigned int) var_5));
}
