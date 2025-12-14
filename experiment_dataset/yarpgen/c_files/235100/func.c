/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235100
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((max((17512206749195935969ULL), (((/* implicit */unsigned long long int) -4500026250758720118LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? ((-(arr_0 [i_0]))) : (arr_1 [i_0]))))));
        var_19 -= min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) 1784775478)) ? (((/* implicit */int) (unsigned short)8074)) : (((/* implicit */int) (unsigned short)3))))));
        var_20 += ((/* implicit */unsigned char) min(((+(((arr_1 [(unsigned char)16]) - (-1LL))))), (((/* implicit */long long int) (((~(arr_0 [i_0]))) >= (var_13))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 213443115)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8920138740169993539LL)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (arr_0 [i_1])))))), (max((((unsigned long long int) 8398703018756969378LL)), (max((((/* implicit */unsigned long long int) 32767)), (18042124572598038186ULL)))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_21 += ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)126))))), (((long long int) arr_8 [i_1] [i_2] [i_4]))))));
                        var_22 = ((/* implicit */int) 4056237544158121812LL);
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */int) ((unsigned long long int) min((arr_14 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_23 [i_7] [i_7] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 12549299055445611432ULL))) ? (((long long int) arr_20 [i_1] [i_1] [i_1] [i_7])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15)))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(var_1))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [(_Bool)1]))))) ? (((long long int) arr_20 [i_6] [i_5] [0] [(unsigned short)13])) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [(signed char)1] [(unsigned char)6])))));
                        var_26 = ((/* implicit */long long int) var_15);
                    }
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) min((var_27), ((unsigned short)65535)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((6992843061739888493LL), (((/* implicit */long long int) (signed char)-68)))), (((/* implicit */long long int) ((1663110638) / (((/* implicit */int) (unsigned short)32779)))))))) ? (17512206749195935952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_26 [i_1] [i_5] [i_6] [i_1]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_29 *= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned char)26)))));
                        var_30 = ((/* implicit */unsigned short) 934537324513615656ULL);
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-((~(-8920138740169993539LL))))))));
                    }
                    arr_29 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) != (((((/* implicit */_Bool) (unsigned char)255)) ? (8920138740169993524LL) : (var_14))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) ((signed char) (+(var_17))));
}
