/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19925
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
    var_11 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-3080), (((/* implicit */short) var_7))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)-56))))) : (((/* implicit */int) max((var_6), (var_6)))))))));
    var_12 = ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_1)) % (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (short)3079)) ? (((/* implicit */int) (short)-3080)) : (((/* implicit */int) var_7)))))), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) min((var_9), (((/* implicit */short) var_6)))))))) && (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_7)), (1100915800U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-3085)) : (((/* implicit */int) var_7))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_15 = ((/* implicit */unsigned int) min((var_15), (min((min((((/* implicit */unsigned int) max((var_7), (var_7)))), (((((/* implicit */_Bool) 1565051921U)) ? (2429711502U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))), (min((max((arr_1 [(unsigned short)14]), (arr_1 [(unsigned char)18]))), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
        var_16 = ((/* implicit */unsigned long long int) min((arr_3 [i_0]), (min(((short)3071), (((/* implicit */short) arr_0 [i_0]))))));
        arr_5 [i_0] [i_0] = 536868864;
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
        var_19 = arr_2 [i_1];
        arr_9 [i_1] &= ((/* implicit */unsigned long long int) ((13826054149399615710ULL) <= (((/* implicit */unsigned long long int) arr_6 [i_1]))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) ((int) (_Bool)1));
                    arr_17 [i_2] [(signed char)0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(2008617918U)));
                    var_21 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_9)))));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned long long int) ((int) var_2));
        arr_19 [(short)2] = ((/* implicit */unsigned long long int) ((arr_1 [i_2]) | (arr_1 [i_2])));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 12; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_13 [i_6] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_20 [i_6] [i_6] [i_6 - 2]))));
                        var_23 |= ((/* implicit */unsigned int) (signed char)58);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_24 |= min((((min((var_6), (arr_11 [i_8]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7641))))) : (arr_1 [8U]))), (((/* implicit */unsigned int) (short)-5520)));
        var_25 = ((/* implicit */unsigned char) arr_24 [i_8] [(signed char)3] [i_8] [i_8] [i_8]);
        arr_29 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) && (((/* implicit */_Bool) var_1))))), (min((0U), (((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned short) arr_3 [8U])))))))));
        var_26 ^= ((/* implicit */signed char) min((min(((-(((/* implicit */int) arr_16 [i_8] [i_8] [i_8])))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_8] [i_8] [(unsigned short)10])) >= (((/* implicit */int) (short)-24133))))))), (((int) var_5))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8]))) > (max((((/* implicit */unsigned int) arr_20 [i_8] [i_8] [i_8])), (max((((/* implicit */unsigned int) var_1)), (arr_7 [i_8] [i_8])))))));
    }
}
