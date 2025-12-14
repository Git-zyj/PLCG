/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213322
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
    var_18 += ((/* implicit */_Bool) 4294967295U);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_17)) : ((~(var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 269559945)) ? (5693581011467958647LL) : (((/* implicit */long long int) -13))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)199)) >> (((-1265237460) + (1265237475)))))) ? (((/* implicit */int) (short)-24639)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_1 + 1] [19U] = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) (short)6970))) <= (-6486396872659682292LL))));
            var_21 &= (+(((((/* implicit */_Bool) 12)) ? (((/* implicit */unsigned long long int) var_15)) : (18302028996969995866ULL))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [(signed char)16] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 15845656767442916786ULL)) || ((_Bool)1)));
            /* LoopNest 2 */
            for (unsigned short i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_22 -= ((/* implicit */signed char) ((short) var_1));
                        var_23 = ((((/* implicit */int) (signed char)124)) != (var_17));
                        var_24 *= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26958))) : (var_9)));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)));
        }
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 667839675U)) ? (((/* implicit */int) (unsigned char)231)) : (12)))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)-103)))) : (((/* implicit */int) (signed char)-119))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            arr_19 [i_1] = ((/* implicit */int) ((unsigned int) (_Bool)0));
            arr_20 [i_1 - 1] [i_6 + 3] = ((/* implicit */int) ((-7068707805638457104LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23971)))));
            arr_21 [(unsigned short)18] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)117)) && (((/* implicit */_Bool) var_1))));
            arr_22 [i_6] [i_6] [(unsigned short)16] = ((int) (_Bool)0);
        }
        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)92)) ? (3478405272325549498LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25586)))))));
            /* LoopNest 2 */
            for (short i_8 = 3; i_8 < 23; i_8 += 4) 
            {
                for (signed char i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_32 [i_7] [i_8 - 2] [i_7] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)15))));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            var_28 = (signed char)-93;
                            arr_36 [i_1] [(_Bool)1] [i_7] [i_8] [i_7] [(_Bool)1] [i_10 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2338)) ? (((/* implicit */int) (unsigned char)67)) : (-545924349)));
                            var_29 = ((/* implicit */int) (_Bool)0);
                        }
                    }
                } 
            } 
            arr_37 [i_1 + 1] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1230568753)) && (((/* implicit */_Bool) -1230568754))));
            var_30 = 594830463U;
        }
    }
    var_31 = ((/* implicit */unsigned char) var_17);
}
