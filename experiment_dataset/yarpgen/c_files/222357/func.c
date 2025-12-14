/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222357
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
    var_11 = ((/* implicit */unsigned char) ((((var_10) ? (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((var_0) & (((/* implicit */long long int) var_4)))))) ^ ((((+(var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)-59))))))))));
    var_12 = ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6055663232555733038LL)) ? (6055663232555733038LL) : (arr_0 [i_1]))))))));
        }
        for (int i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_2] [1] = ((signed char) (_Bool)0);
            arr_9 [14] [i_0] = ((int) arr_5 [i_2 - 1] [i_0]);
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_8)) - (15285))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) != (arr_0 [i_0]))))));
        }
        for (int i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)58)))) < (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))))))));
            var_16 ^= ((/* implicit */short) ((((/* implicit */int) arr_3 [12] [i_3 + 1])) + (((/* implicit */int) arr_13 [i_0] [i_3 - 1]))));
        }
        for (int i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */int) (~(arr_1 [i_0])));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                arr_21 [i_5] [4] [i_0] &= ((/* implicit */long long int) var_5);
                arr_22 [(unsigned char)3] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)1024))));
                arr_23 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */long long int) var_4))))) >> ((((~(var_1))) - (11509359739708667498ULL)))));
                arr_24 [i_0] [i_4] [i_0] = ((arr_10 [i_0] [i_4 + 1] [i_4 + 1]) != (((/* implicit */long long int) (-(arr_6 [i_0] [i_4] [i_0])))));
            }
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_4 - 1] [i_4])) & (((/* implicit */int) var_5))));
        }
        var_17 = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (1884317463723952622ULL) : (((/* implicit */unsigned long long int) 797346954))))) ? ((-(var_0))) : (((/* implicit */long long int) ((int) 7877855303373400826LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)58))))) : (arr_17 [i_6 - 1] [i_6 - 1])));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        var_19 = ((/* implicit */unsigned long long int) arr_7 [i_6] [i_6] [i_6]);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_34 [7] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0LL))));
        arr_35 [i_7] = ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_0 [(unsigned char)10]))), (max((-797346955), (arr_6 [i_7 - 1] [i_7 - 1] [0LL])))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -420359894)) ? (((/* implicit */int) (short)12476)) : (((/* implicit */int) (unsigned char)56))));
}
