/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21848
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
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (var_0)))))));
    var_16 += min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((long long int) var_4)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 401918620)) ? (((long long int) ((unsigned int) (unsigned char)5))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 += ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (-((((_Bool)1) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_1 [10LL] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) arr_4 [(short)7] [i_1]);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) (~(35184367894528LL)));
            arr_8 [11LL] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-11149), (((/* implicit */short) arr_6 [i_2] [i_1])))))) <= (((arr_3 [i_1] [20]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_5 [i_1] [i_1]))))));
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21706)) >> (((((/* implicit */int) arr_10 [i_1] [i_3] [(unsigned char)20])) - (6879)))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)48460))), (((/* implicit */unsigned short) ((unsigned char) -960040190))))))));
            arr_13 [i_1] = (unsigned char)183;
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        arr_20 [i_1] [i_1] = max((min((((/* implicit */short) (_Bool)1)), ((short)-30667))), (min((arr_18 [i_4] [i_4 + 2] [i_4] [i_4 + 2] [(short)3] [i_4 + 1]), (((/* implicit */short) arr_17 [i_1] [i_3] [i_1] [i_4 + 2])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) -960040212);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_6] [i_9] [(unsigned char)9] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)48460))));
                        var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_6] [i_6])) & (((/* implicit */int) arr_11 [i_6] [i_6] [i_6])))) != (((/* implicit */int) arr_21 [i_6]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (short)-11171);
        arr_30 [i_6] = (i_6 % 2 == zero) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) var_7))))) << (((((((/* implicit */_Bool) 142751680)) ? (arr_24 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [12LL]))))) - (150587875758262280LL))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) var_7))))) << (((((((((/* implicit */_Bool) 142751680)) ? (arr_24 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [12LL]))))) - (150587875758262280LL))) + (2761650370186893104LL)))));
        arr_31 [i_6] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_6 [i_6] [i_6])) <= (((/* implicit */int) arr_26 [i_6] [10LL])))));
    }
    for (short i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        arr_35 [(unsigned short)1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_16 [i_10] [i_10 + 1]))), (((((((/* implicit */int) arr_9 [i_10 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_10 - 1])) + (18005)))))));
        var_24 = ((/* implicit */short) ((int) 960040190));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_10 [i_10 + 1] [i_10 - 1] [i_10])) - (6882)))))) ? (((/* implicit */int) max((arr_10 [i_10] [i_10] [i_10]), (arr_10 [(unsigned short)6] [11ULL] [(unsigned char)20])))) : (((((/* implicit */_Bool) arr_10 [i_10 - 1] [i_10] [i_10])) ? (((/* implicit */int) arr_10 [5] [i_10] [i_10])) : (((/* implicit */int) arr_10 [i_10] [i_10] [11ULL])))))))));
        arr_36 [(signed char)11] [(signed char)11] = ((/* implicit */_Bool) arr_15 [i_10] [1ULL] [1ULL]);
        arr_37 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_10] [i_10]))))), ((+(var_1))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_33 [i_10] [i_10])))), ((-(((/* implicit */int) var_9)))))))));
    }
}
