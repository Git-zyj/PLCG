/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51977
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) ? (2880112675U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((_Bool) (-(((((/* implicit */_Bool) -1749618871)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (-1749618872)));
                arr_8 [(unsigned char)0] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_2)), (max((((((/* implicit */_Bool) (unsigned char)0)) ? (-7937827496554239128LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)2])) ? (arr_3 [(unsigned char)9]) : (arr_1 [(_Bool)0]))))))));
                arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_5 [(unsigned short)4] [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_21 [i_2] [(signed char)20] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_1))));
                    arr_22 [i_4] [(unsigned short)0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [(unsigned short)5] [(signed char)0])) || (((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                arr_31 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] = (((-(((/* implicit */int) arr_23 [i_6])))) & (((/* implicit */int) (signed char)-1)));
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    arr_35 [5] [(short)10] [i_7 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_17 [i_5] [i_6]), (arr_17 [i_6] [i_5])))) + (2147483647))) << (((/* implicit */int) max((max(((short)-6477), (((/* implicit */short) (signed char)(-127 - 1))))), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [13U]))) >= (arr_11 [i_7])))))))));
                    arr_36 [i_5] [i_6] [i_7 + 1] = ((/* implicit */unsigned int) var_10);
                    arr_37 [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -8553359594993342884LL))))), (((((((((/* implicit */int) (signed char)-15)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)8160)) - (8140))))) >> (((((/* implicit */int) (unsigned short)120)) - (101)))))));
                }
                arr_38 [i_5] [i_5] [i_6] &= ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) (short)-23199)))) ? (((/* implicit */int) arr_30 [i_6])) : (min((var_0), (((/* implicit */int) var_3))))))));
            }
        } 
    } 
}
