/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44995
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
    var_15 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (((unsigned long long int) var_4)));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(var_0))))));
    var_17 = ((/* implicit */unsigned int) (((_Bool)1) ? (var_11) : (2044535194740664065ULL)));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_18 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) var_14))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_19 -= ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_2] = ((/* implicit */int) ((unsigned int) var_11));
                /* LoopSeq 1 */
                for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_2])) ? (((/* implicit */int) var_14)) : (arr_0 [i_3 + 3] [i_0 - 2]))))));
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_7);
                }
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_0] [(_Bool)0] [i_0 + 1] [i_4 + 1])));
                    var_23 = ((/* implicit */unsigned int) arr_12 [7ULL] [(_Bool)1] [i_1] [i_4 - 1]);
                }
                arr_14 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [6]))))) >> (((arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1] [(_Bool)0] [i_0]) - (1960387184)))));
            }
        }
    }
    for (int i_5 = 2; i_5 < 12; i_5 += 2) /* same iter space */
    {
        arr_18 [2ULL] [i_5] |= ((/* implicit */_Bool) ((signed char) max((arr_0 [i_5 - 1] [i_5 - 2]), (((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)28927)))) ? (min((arr_22 [i_5] [(unsigned char)11]), (((/* implicit */unsigned long long int) arr_8 [i_5 - 1] [i_5 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8336)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) & (arr_26 [i_5 + 1]))))));
                    arr_27 [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)62293)), (((unsigned int) var_13))));
                }
            } 
        } 
    }
}
