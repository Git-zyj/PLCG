/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220685
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) -15);
        arr_4 [7LL] [i_0] = ((/* implicit */long long int) ((((3574647170829767745ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52)))));
        arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned short)57344)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 14872096902879783843ULL)) ? (((/* implicit */unsigned long long int) ((-1591069943) | (((/* implicit */int) (short)24682))))) : (max((18446744073709551615ULL), (1ULL))))) | (max((((14872096902879783870ULL) | (11015229196331237839ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) 13121802671516132520ULL)))))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13121802671516132520ULL)) || (((/* implicit */_Bool) (unsigned short)22835))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3574647170829767745ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57206))))) || (((/* implicit */_Bool) 154724194166867745LL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1690381309)) ? (7473807769252688363LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))) | (((((/* implicit */_Bool) (short)-23653)) ? (5324941402193419112ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1] [(short)11])))))))))));
                        var_17 ^= ((/* implicit */_Bool) ((int) ((unsigned int) arr_7 [i_1 - 2])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(-1591069942)))), ((+(arr_15 [i_1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1])))));
                        var_19 &= ((unsigned long long int) ((((/* implicit */_Bool) 1737991318U)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-3172))));
                        arr_18 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_16 [i_1] [i_2] [(signed char)7] [6ULL] [i_2] [i_5]))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2004582295U)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)118))))), (13121802671516132520ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (unsigned short)52025)) : (((/* implicit */int) (short)-2263))))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (14ULL) : (((/* implicit */unsigned long long int) -1591069944)))) : (8698379707019687170ULL)))));
                    }
                    arr_19 [i_1] [i_1 + 1] [i_1 - 2] [i_1] = ((/* implicit */_Bool) arr_7 [i_1]);
                }
            } 
        } 
    } 
}
