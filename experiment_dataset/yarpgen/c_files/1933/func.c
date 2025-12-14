/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1933
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
    var_18 = ((/* implicit */signed char) (-((~(((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_19 ^= ((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)85)));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */long long int) arr_3 [i_0]);
        var_20 += (~(((/* implicit */int) arr_1 [i_0 - 1])));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_0 [i_0 - 1])));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */short) -926977618);
        arr_9 [i_1] = ((/* implicit */short) ((arr_7 [i_1]) <= (((/* implicit */int) min((((((/* implicit */unsigned int) arr_7 [i_1])) >= (arr_6 [i_1]))), (arr_5 [i_1] [i_1]))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((unsigned int) var_14))))) && (var_13)));
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (var_10)));
        arr_12 [4U] [i_2] = ((/* implicit */short) var_6);
        arr_13 [i_2] [i_2] = ((/* implicit */int) 3747295181399677103LL);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_7 [i_2])))) ? (-3747295181399677104LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_2])) : (arr_0 [i_2]))))))) ? (-3747295181399677103LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))));
        var_25 += ((/* implicit */int) arr_1 [i_2]);
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((arr_5 [5ULL] [5ULL]) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_5 [i_3] [i_3]))))))) / (var_9)));
        arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_7 [i_3])), (var_4))) - (arr_0 [i_3])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) <= (3747295181399677127LL)))) : ((~(((/* implicit */int) (unsigned short)8165))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_19 [i_4] [i_4])) && (((/* implicit */_Bool) var_2))))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3747295181399677100LL)) ? (((/* implicit */int) (short)-23336)) : (((/* implicit */int) (unsigned char)26))));
        arr_20 [i_4] = (-(((/* implicit */int) arr_18 [i_4])));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_24 [i_5] [i_5] = ((signed char) ((int) arr_6 [i_5]));
        arr_25 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_5] [i_5])), ((+(var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)124)), ((short)-203)))), (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_5]))) : (var_15)))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (arr_14 [i_5])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8651)) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_32 [i_5] [i_7] [i_6] [i_5])))))));
                        var_30 = ((/* implicit */unsigned short) var_0);
                        arr_34 [i_8] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */short) (-(3001217292U)));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */int) 3024326026U);
    }
    var_32 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max(((signed char)106), (((/* implicit */signed char) var_13))))))) || (((/* implicit */_Bool) var_12))));
}
