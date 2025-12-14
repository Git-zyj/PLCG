/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226083
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = (+(((/* implicit */int) (signed char)-84)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] [i_1 - 2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_14);
                        arr_11 [i_0] [i_0] [i_2] [14] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_2 [i_2])))))))));
                        arr_12 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-23866))))) & (arr_3 [i_0] [i_2] [i_0])));
                        arr_13 [i_2] [i_2] = min((arr_2 [i_0 + 2]), (((/* implicit */long long int) (((+(((/* implicit */int) var_13)))) - (((((/* implicit */int) (short)32767)) | (((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                    arr_14 [i_1 + 1] [8U] |= ((/* implicit */unsigned char) var_3);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)23866)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (signed char)0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */signed char) ((arr_16 [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) 12893696205435643245ULL))))));
        arr_18 [i_4] = (-((((!(((/* implicit */_Bool) arr_8 [i_4])))) ? (((/* implicit */int) (unsigned char)92)) : ((+(var_12))))));
        var_20 -= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_8)) : (2130706432)))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
            {
                {
                    arr_25 [i_5] = ((/* implicit */short) ((71154217) / (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7])) ? (var_12) : (((/* implicit */int) var_8))))) + (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned int) 1023)) : (1086662063U))));
                }
            } 
        } 
        arr_26 [i_5] = ((/* implicit */int) var_6);
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_0 [i_8] [i_8]) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned char)4] [i_8] [i_8] [(unsigned char)4])))))))), (((((/* implicit */_Bool) (-(6027379166032676754ULL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)231))) : ((+(var_2)))))));
        arr_30 [i_8] [i_8] = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_9)))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_8])) ? (var_12) : (var_12))))))));
    }
}
