/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42224
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */long long int) var_4);
                    var_19 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [20] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0])))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (11480615863531353897ULL)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (((unsigned int) arr_6 [i_3] [i_3 + 3] [i_3 + 4]))))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_13))))) >= (min((((/* implicit */int) var_11)), (arr_4 [i_3])))))), ((((~(arr_4 [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [13LL] [i_3])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_14 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_4]))) >= (arr_3 [i_4]))))));
            var_23 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_11 [i_4])))));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (unsigned char)206);
            /* LoopNest 2 */
            for (signed char i_6 = 4; i_6 < 10; i_6 += 3) 
            {
                for (unsigned char i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) ((unsigned char) 12031827295011752933ULL))))));
                        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [i_5] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)50434)) : (((/* implicit */int) (unsigned char)208))))))));
                        arr_24 [i_3] = ((/* implicit */long long int) var_2);
                        arr_25 [i_3] = ((/* implicit */short) (~(arr_22 [i_3] [i_3] [i_6] [i_7 + 1] [i_7])));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_8 = 3; i_8 < 7; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned short) arr_10 [i_8]);
        var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_7))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)11188))) | (4993093148881849033LL)))))) ? (((/* implicit */int) ((unsigned char) max((arr_4 [i_8]), (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((unsigned char) var_6)))));
        arr_29 [i_8] [i_8] = ((unsigned long long int) (-(((((/* implicit */_Bool) -1931216864444216533LL)) ? (arr_3 [i_8 + 1]) : (((/* implicit */unsigned long long int) 1931216864444216532LL))))));
    }
    var_27 = ((/* implicit */unsigned int) 1931216864444216532LL);
}
