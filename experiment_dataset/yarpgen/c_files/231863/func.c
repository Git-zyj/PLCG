/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231863
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
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-((~(var_18))))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
            {
                arr_9 [i_2] = ((/* implicit */signed char) (-((+(var_16)))));
                arr_10 [i_2] [i_2] = ((/* implicit */signed char) arr_0 [i_1]);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_8) : (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 2]))));
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-89)) & (((/* implicit */int) var_7))));
            }
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (+(9255016095747885842ULL)));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_14)))) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123)))));
            }
            arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
            arr_16 [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)13)) ? (arr_8 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) var_2)))) & (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [(unsigned char)18]))));
        }
        arr_17 [15ULL] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)112)))), (max((var_4), (((/* implicit */short) (signed char)98)))))))));
    }
    for (short i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_24 = (-(max((-2018157351), (((/* implicit */int) (unsigned char)2)))));
        arr_22 [i_4] = ((/* implicit */long long int) ((_Bool) ((31U) - (((/* implicit */unsigned int) -1923524929)))));
        /* LoopSeq 3 */
        for (short i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_21 [i_4 + 1]))) && (((/* implicit */_Bool) (-(((/* implicit */int) max((arr_20 [i_4]), ((signed char)-83)))))))));
            arr_26 [i_4] = ((/* implicit */unsigned short) ((((min((-1923524901), (((/* implicit */int) (signed char)-112)))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (short i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
        {
            arr_30 [i_6] [i_4] [i_6 + 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_5 [i_4 + 2]))));
            arr_31 [i_4] [i_6] [i_4] = ((/* implicit */long long int) arr_18 [i_4 + 2]);
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_34 [i_4] [12] = ((/* implicit */_Bool) -6967146003624445628LL);
            var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)73)), (((arr_12 [i_4] [i_4] [i_4] [i_4 - 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)15)))))))));
            arr_35 [i_4] [i_4] [(unsigned char)9] = ((/* implicit */int) min(((~(6346875475797818132LL))), (((/* implicit */long long int) (-(arr_12 [i_7] [i_4 + 2] [i_7] [i_4 + 1]))))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_46 [i_4] [i_4] [(signed char)13] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)32760)), (((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (var_11) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) (-(((int) (signed char)104))))) : (min((((((/* implicit */unsigned int) -2018157349)) + (arr_12 [i_4] [i_7] [i_4] [i_10 + 2]))), (((/* implicit */unsigned int) (unsigned char)0))))));
                            arr_47 [i_4] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_45 [i_4] [i_4 + 1] [i_10 + 1] [i_4] [i_4] [i_10])), (arr_12 [(unsigned char)18] [i_4 + 1] [i_10 + 1] [i_10]))))));
                        }
                    } 
                } 
            } 
        }
    }
}
