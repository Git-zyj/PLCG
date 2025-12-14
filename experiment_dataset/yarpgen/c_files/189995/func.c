/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189995
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 2]))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_1) && ((_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((_Bool) var_8))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)15946), (arr_0 [i_1] [i_2])))) ? (((arr_1 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31920)))) : (((((/* implicit */int) arr_7 [i_1])) & (((/* implicit */int) arr_7 [i_1]))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)144))));
                }
            } 
        } 
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_1]);
        var_20 = 2093443150U;
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_21 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [4ULL] [i_4])) ? (arr_11 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80)))))));
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) == (arr_12 [i_4] [i_4])));
    }
    var_22 *= ((/* implicit */unsigned int) var_16);
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) ((unsigned int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */int) arr_13 [i_5]))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5] [i_5])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) || (((/* implicit */_Bool) (signed char)81)))))));
        var_25 = ((((/* implicit */int) arr_17 [i_5] [i_5])) % (((/* implicit */int) arr_0 [i_5] [i_5])));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_26 *= ((/* implicit */signed char) var_3);
                    arr_23 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57057))) < (2201524146U))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)13)) >= (((/* implicit */int) (signed char)-103))))), (max((((/* implicit */unsigned char) var_4)), ((unsigned char)214))))));
}
