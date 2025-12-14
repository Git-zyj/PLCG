/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210791
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) max((arr_1 [i_0]), (((/* implicit */int) var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)19355)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_3] [8LL] [i_3] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) 543531183)));
                        arr_14 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                        arr_15 [(unsigned short)9] [i_1] [i_2] [i_2] [i_2] = -543531190;
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_19 [i_2] = (signed char)69;
                            arr_20 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_6))) ^ (((/* implicit */int) (unsigned char)9))))), ((~(max((arr_9 [i_0] [i_1] [i_4] [i_1]), (((/* implicit */long long int) 1689994145U))))))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_24 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 1])) ? (var_4) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 1])) - (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))))));
                            var_14 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (short)-1)), (((long long int) 543531185)))), (((/* implicit */long long int) min((arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned short) (unsigned char)255)))))));
                        }
                    }
                } 
            } 
            arr_25 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(signed char)12] [i_1])))))))) ? (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (var_4)))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_1)))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned char)9] [i_1] [i_0] [i_0]))));
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 2])))));
        }
    }
    var_17 = ((/* implicit */unsigned short) (signed char)-61);
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_28 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (_Bool)1)), (543531156))))) && (((/* implicit */_Bool) max((-7361858781956211783LL), (((/* implicit */long long int) 256U)))))));
        arr_29 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_10)))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_18 = ((/* implicit */signed char) arr_26 [i_6]);
            var_19 = ((/* implicit */signed char) min((var_19), (((signed char) ((unsigned int) max((arr_32 [i_7] [i_7]), ((_Bool)1)))))));
            arr_33 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((4294967055U), (((/* implicit */unsigned int) var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_31 [i_6])) + (852350643U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (1001183051)))) : (((11782337580553545273ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) (signed char)-4)), (((((/* implicit */_Bool) (unsigned short)37608)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6]))) : (9100597686030274225ULL)))))));
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_30 [i_6] [i_6]), (arr_30 [i_6] [i_6])))) << (((((/* implicit */int) (unsigned char)77)) - (72)))));
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_36 [i_8])) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) (signed char)7)))) >= ((-(((/* implicit */int) arr_34 [i_8]))))))), (((signed char) ((((/* implicit */_Bool) var_5)) ? (arr_35 [i_8]) : (arr_36 [i_8]))))));
        arr_37 [i_8] = ((/* implicit */_Bool) ((((_Bool) arr_35 [i_8])) ? (max((arr_35 [i_8]), (arr_35 [i_8]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (arr_35 [i_8]))))));
    }
}
