/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228040
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
    var_10 = ((/* implicit */unsigned char) -1649457034);
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) / (arr_0 [i_0 - 3]))) >= (((((/* implicit */_Bool) arr_0 [11ULL])) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) arr_4 [i_0 - 1]);
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
                    var_12 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_1)))))) ? (((/* implicit */unsigned int) arr_7 [i_0] [(unsigned char)12] [i_0] [i_0])) : (arr_8 [i_1 + 2] [i_0] [i_1 + 2] [i_0])));
                }
            } 
        } 
        arr_10 [i_0] = ((signed char) (+(arr_5 [i_0 - 1] [i_0])));
        var_13 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 320963374)))));
        arr_11 [i_0 + 1] [i_0 + 1] = ((/* implicit */int) ((unsigned char) (short)0));
    }
    for (long long int i_3 = 3; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_6 [i_3 + 1]) | (arr_6 [i_3 - 2]))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) var_0)))))));
        var_16 = ((/* implicit */unsigned short) var_1);
        arr_15 [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(1649457042)))))) && (((/* implicit */_Bool) ((arr_3 [i_3 - 2]) ^ (arr_3 [i_3 - 2]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9671)) && (((/* implicit */_Bool) -1961433788))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_4] [i_4] [(_Bool)1] [i_4])))));
        var_18 = ((/* implicit */signed char) ((unsigned char) max((arr_12 [i_4]), (arr_12 [i_4]))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_22 [2ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-34)), (1506855393146669401ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1649457016)))))) : (arr_5 [i_5] [i_5])))) ? (((/* implicit */int) (!(((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5])))))))) : (max((((/* implicit */int) (signed char)-123)), (1649457033)))));
        arr_23 [i_5] = ((/* implicit */int) (short)63);
    }
}
