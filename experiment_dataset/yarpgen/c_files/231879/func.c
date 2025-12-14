/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231879
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) arr_0 [(unsigned short)19])))))));
        arr_3 [i_0 + 4] &= ((_Bool) ((((/* implicit */_Bool) -1876042980)) ? (1212791210U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((~(2878309864U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        var_13 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_5))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1)))))) : (3082176085U))) : (var_1)));
    }
    for (long long int i_2 = 2; i_2 < 7; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 7; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_2] [5U] [i_3 - 1] [i_4])) ? (arr_7 [i_2 - 2] [i_3 - 3]) : (arr_10 [4]))) < (var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)44070)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_5 [i_2 + 2]))))))))));
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) var_6)), (arr_7 [i_2 - 2] [i_2])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 6; i_5 += 3) 
        {
            for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_6))))))), (((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_2))))) : (((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_7)))))))))));
                    var_17 += ((unsigned int) ((long long int) var_3));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            arr_25 [i_7 - 1] [1] [(signed char)0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_7 + 1])) && (((/* implicit */_Bool) arr_20 [i_2 + 1] [(signed char)2]))))))), ((~(((/* implicit */int) arr_2 [i_2 + 2] [i_7]))))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) 1416657419U);
                            arr_32 [i_2] [i_8] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) min((var_10), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) arr_31 [i_2 - 1] [(unsigned short)1] [i_8] [i_9]))));
                        }
                    } 
                } 
            } 
        }
        arr_33 [(signed char)3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_7))), (max((var_1), (((/* implicit */unsigned int) arr_4 [i_2 + 2] [i_2 - 2]))))));
    }
    /* LoopNest 3 */
    for (long long int i_11 = 4; i_11 < 14; i_11 += 1) 
    {
        for (signed char i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                {
                    arr_44 [i_12] [i_12 + 1] [i_13] = (signed char)-116;
                    var_19 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */long long int) (-(max((1212791218U), (var_0))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_1);
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (signed char)-60))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (3082176055U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_2)))))))));
}
