/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26264
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_0 [i_0 - 1]))) ? (var_3) : (max((((/* implicit */int) (signed char)-102)), (65536)))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_14))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)17603))))) || (((/* implicit */_Bool) (signed char)104))))) : (((/* implicit */int) (signed char)-127))));
        arr_8 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_0 [i_1 - 1]))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65511))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_1])), ((unsigned char)125)))) : (min((-1848576649), (((/* implicit */int) (unsigned short)65520))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_16 [i_3] = ((/* implicit */signed char) min((max((arr_12 [i_4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)17))))))), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_15))))))));
                        arr_17 [i_3] = ((/* implicit */signed char) ((int) max((((int) var_12)), ((-(((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        arr_25 [i_5] [i_5] = ((((/* implicit */_Bool) var_12)) ? (((arr_24 [i_6 + 1] [i_6 + 1] [(unsigned short)6] [(unsigned short)6]) >> (((arr_24 [(unsigned char)9] [i_6 - 1] [(unsigned char)9] [(unsigned char)9]) - (216421785))))) : (((((_Bool) (unsigned short)2813)) ? ((+(((/* implicit */int) (unsigned short)28)))) : (((((/* implicit */int) (signed char)104)) + (((/* implicit */int) (unsigned short)28)))))));
                        arr_26 [i_1 - 2] [i_1] [i_1] [(unsigned char)0] = ((/* implicit */_Bool) min((((arr_0 [i_1 + 1]) ? (((/* implicit */int) (unsigned short)46122)) : (((/* implicit */int) (signed char)103)))), (((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        arr_27 [i_1 - 2] [i_1 + 1] = ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
    }
    var_16 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [10] [i_8] [i_8] [i_11] [(signed char)15] = (-(((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65518)))) + (((/* implicit */int) var_0)))));
                                arr_43 [i_8] [i_8] [i_12] [i_12] [i_12] = ((/* implicit */signed char) max((min((((/* implicit */int) ((_Bool) (unsigned char)131))), (var_5))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
                                arr_44 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = (~(((/* implicit */int) var_1)));
                            }
                        } 
                    } 
                    arr_45 [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))));
                    arr_46 [i_8] [i_9] = ((/* implicit */int) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 14; i_14 += 1) 
                        {
                            {
                                arr_53 [i_8] [i_8] [i_9] [i_8] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_9] [i_14] [i_14 + 1] [i_14 + 2] [(signed char)0] [i_9])) ? ((-(((/* implicit */int) arr_11 [i_8] [(signed char)13] [i_13] [(unsigned char)15])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_9]))))));
                                arr_54 [i_8] [i_8] [i_10] [i_13] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_41 [i_14] [i_14 + 2] [(unsigned short)6] [i_14 + 1] [i_9])), (arr_34 [i_10] [i_14 + 1] [i_9])))) ? ((-(((((/* implicit */_Bool) arr_10 [i_14 + 2] [i_13] [i_10])) ? (((/* implicit */int) arr_34 [(unsigned short)2] [10] [i_9])) : (((/* implicit */int) arr_51 [i_8] [(signed char)0] [i_9] [(signed char)12] [i_9])))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != (var_3))))));
                                arr_55 [8] [i_9] [i_10] [i_13] [i_14] [i_10] = ((/* implicit */unsigned char) arr_22 [i_10]);
                            }
                        } 
                    } 
                }
                arr_56 [i_9] = (-((~(arr_6 [i_9] [i_9]))));
                arr_57 [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_32 [i_9]), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) var_7))))) ? (((/* implicit */int) arr_40 [(unsigned char)2] [(unsigned char)2] [i_8] [i_9])) : (arr_33 [i_8] [i_9])))));
            }
        } 
    } 
    var_17 = ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)10038))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) (signed char)-119)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_3))))) : (((/* implicit */int) var_0)));
    var_18 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_4)))))));
}
