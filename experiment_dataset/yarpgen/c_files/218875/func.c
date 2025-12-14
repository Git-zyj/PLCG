/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218875
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = (((-(((/* implicit */int) (unsigned short)60534)))) & (((/* implicit */int) arr_5 [i_2 - 1])));
                    arr_7 [i_0] [i_2] [(signed char)5] [i_2] = ((_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2])) <= (((/* implicit */int) arr_6 [i_0] [i_2]))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_2 - 1]))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) arr_5 [i_0])) % (arr_0 [i_0] [i_0])))));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_13))));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) arr_3 [i_3 - 1] [i_3])) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_20 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_6]))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((var_12) / (arr_0 [i_3 - 1] [i_3 - 1]))) / (min((arr_0 [i_3 - 1] [i_3 - 1]), (arr_0 [i_3 - 1] [i_3 - 1]))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] [10U] = ((/* implicit */unsigned long long int) arr_2 [i_3] [i_3] [i_3]);
        var_20 += ((/* implicit */short) ((((/* implicit */int) (short)8467)) >> (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)102)), (arr_3 [i_3] [i_3 - 1])))) - (79)))));
        arr_22 [i_3] = ((/* implicit */short) -1802906343);
    }
    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) min((var_13), (var_5)))) << (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)17219))))))), (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_7 + 1])) : (((/* implicit */int) arr_31 [i_7])))))));
                    var_22 *= ((/* implicit */_Bool) min((((unsigned int) -2067922988)), (((/* implicit */unsigned int) arr_27 [i_7 - 2]))));
                    var_23 = ((/* implicit */_Bool) ((short) arr_30 [i_7] [i_8] [i_7] [i_9]));
                    var_24 = ((/* implicit */long long int) ((min((((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7 - 2] [i_8] [i_7 - 2]))))), (((/* implicit */unsigned int) arr_25 [i_7 - 2])))) << (((min(((~(var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185))))))) + (1395006544)))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_7 + 1]))))))));
    }
}
