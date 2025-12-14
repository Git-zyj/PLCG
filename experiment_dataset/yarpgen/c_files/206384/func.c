/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206384
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) || ((!(((/* implicit */_Bool) arr_1 [i_0]))))))), (arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((short) (_Bool)1));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1])))))));
        var_13 = arr_5 [i_1];
        var_14 = ((/* implicit */unsigned short) (-(var_1)));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] = ((arr_6 [i_2]) + (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)3840)))) / (max((((/* implicit */int) arr_3 [i_2])), (var_4)))))));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_0 [i_1 - 1]))));
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_4)))));
            arr_11 [i_1] = (~(((long long int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
            var_16 = ((/* implicit */signed char) (short)12592);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */int) (~((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))) : (6026777332051917615LL))) * (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_3])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
            {
                var_18 = ((/* implicit */long long int) (short)-11930);
                var_19 = ((/* implicit */signed char) min((((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 2]))) ^ (((unsigned int) arr_14 [i_1] [i_3] [i_1] [i_1])))))));
            }
            arr_18 [i_3] [i_1] [i_3] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3] [i_1 - 1]))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_20 = (i_5 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 7481687659992818319LL)) ? (6026777332051917641LL) : (6026777332051917615LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_1))))))) ^ ((((((~(((/* implicit */int) arr_22 [i_5])))) + (2147483647))) << ((((-(arr_25 [i_7] [i_5] [i_1] [i_5]))) - (1113033482169389782ULL)))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 7481687659992818319LL)) ? (6026777332051917641LL) : (6026777332051917615LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_1))))))) ^ ((((((~(((/* implicit */int) arr_22 [i_5])))) + (2147483647))) << ((((((-(arr_25 [i_7] [i_5] [i_1] [i_5]))) - (1113033482169389782ULL))) - (2849958431068633677ULL))))))));
                        arr_27 [i_5] = ((/* implicit */long long int) max((((/* implicit */int) ((var_6) == (((/* implicit */long long int) arr_19 [i_5]))))), ((-(((/* implicit */int) arr_13 [i_7] [i_1 + 2] [i_1]))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_22 [12]))));
        }
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8] = ((((/* implicit */long long int) arr_19 [i_8])) + (6026777332051917649LL));
        var_22 = ((/* implicit */unsigned char) var_1);
        var_23 = ((/* implicit */_Bool) arr_8 [i_8 + 2] [i_8 + 2] [i_8]);
    }
    for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) || (((/* implicit */_Bool) var_0))))) | (((/* implicit */int) ((((/* implicit */int) arr_32 [i_9] [i_9])) <= (((/* implicit */int) arr_32 [i_9] [i_9])))))));
        var_25 = ((/* implicit */_Bool) -7481687659992818290LL);
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_38 [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_11 - 1])))) ? (((/* implicit */int) max((((/* implicit */short) arr_34 [(signed char)0] [i_11 - 1])), (arr_1 [i_11 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 2] [i_11 - 1])) != (-1448597507))))));
                    var_27 = var_0;
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) ((unsigned int) (-9223372036854775807LL - 1LL)));
    var_29 &= (((((!(((/* implicit */_Bool) 7481687659992818297LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (var_5)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) var_6))))))) : (max((var_0), (((/* implicit */int) (_Bool)1)))));
}
