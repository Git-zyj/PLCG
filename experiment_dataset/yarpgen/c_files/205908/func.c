/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205908
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) -576460752303423488LL)))) ? (((/* implicit */int) arr_5 [(unsigned short)9] [(signed char)8] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (arr_4 [(signed char)12] [i_1] [i_2])))))), (((/* implicit */int) (short)-4126)))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((arr_3 [i_0]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)4109)) : (((/* implicit */int) (signed char)0)))))));
                        arr_10 [i_0] [i_1] [0LL] [i_3] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                        arr_11 [17LL] [i_1] [i_0] [17LL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4126)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [3ULL]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_2] [11ULL])))));
                        arr_16 [i_0] [i_0] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-4126)))))));
                        arr_17 [(unsigned char)4] |= ((/* implicit */unsigned long long int) arr_9 [i_1] [(signed char)10] [i_2]);
                        arr_18 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-10508))));
                        arr_19 [6] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */int) var_6);
                        arr_23 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]);
                        arr_24 [i_0] [i_5] [(unsigned char)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [6] [i_2])) ? (arr_7 [i_0] [i_1] [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_0] [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_28 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0])));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) arr_25 [i_0] [i_6] [i_2] [i_1]);
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0])) ? (arr_20 [i_0]) : (arr_20 [i_0])));
                            arr_32 [i_7] [i_7] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_27 [i_0] [i_1] [i_6] [i_7]));
                            arr_33 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(arr_2 [i_1])));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16838)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_2 [i_1])))) ? (((/* implicit */int) (unsigned short)47818)) : (((((/* implicit */int) (short)4113)) % (-134217728)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))) > (arr_26 [i_2] [i_0])));
                            arr_37 [i_6] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */long long int) arr_36 [i_0] [i_0] [4] [6LL]);
                        }
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_40 [i_9] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_6]))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (short)4113))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8064)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32594))) : (-7710654675201925248LL)));
                        arr_41 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_25 [1] [i_2] [i_1] [i_0]))));
                    }
                    arr_42 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_2])))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [17])) ? (arr_35 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */int) (signed char)127))))), ((~(813750916833499866ULL))))) - (17632993156876051742ULL)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) var_6);
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_8)) ? ((~(-7710654675201925270LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    var_29 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)4125))))));
}
