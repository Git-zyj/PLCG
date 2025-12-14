/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31095
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))) ^ (((/* implicit */unsigned int) ((int) var_4)))))) ? (min((min((var_2), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))) ? ((((!(((/* implicit */_Bool) var_3)))) ? ((+(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) var_9))))))));
                                arr_12 [(unsigned char)0] [9U] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((unsigned char) var_9))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((signed char) var_9)))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))), (min((var_10), (((/* implicit */short) var_9)))))))));
        arr_15 [(unsigned char)12] = ((/* implicit */short) var_0);
    }
    for (signed char i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            arr_22 [i_5] [i_5] [i_5 - 2] = ((/* implicit */unsigned char) ((var_0) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((int) var_9)))))));
            arr_23 [i_5] = ((/* implicit */unsigned long long int) var_7);
            arr_24 [i_5] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_10)))));
            arr_25 [i_5] = ((/* implicit */_Bool) var_1);
            arr_26 [i_5] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((max((((/* implicit */unsigned int) var_10)), (var_2))) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))));
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_9)))))))));
                    arr_34 [i_5 - 1] [i_7 + 1] [i_5 - 1] [i_7] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_3)))));
                }
            } 
        } 
        arr_35 [i_5] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (min((var_6), (((/* implicit */unsigned long long int) var_8))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (int i_11 = 3; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_46 [i_5 - 3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (max((max((((/* implicit */unsigned long long int) var_2)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))));
                        arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] |= min((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_4), (var_10)))))), ((-(((int) var_2)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_12 = 3; i_12 < 18; i_12 += 4) /* same iter space */
    {
        arr_52 [i_12 + 2] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */int) max((((/* implicit */short) var_1)), (var_10)))), ((~(((/* implicit */int) var_7)))))));
        arr_53 [i_12 + 2] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_8)), (var_2))) : (min((var_2), (((/* implicit */unsigned int) var_5))))))));
        arr_54 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
    }
    for (signed char i_13 = 3; i_13 < 18; i_13 += 4) /* same iter space */
    {
        arr_58 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2)))) ? (((var_7) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5))))));
        arr_59 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_0)))) ? (((int) var_7)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((short) (unsigned char)175))) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (_Bool)0))))));
        arr_60 [i_13] [i_13 + 2] = max(((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))))), (((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
        arr_61 [i_13] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_7))) / (((/* implicit */int) ((signed char) var_3)))));
    }
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) var_8)), (((/* implicit */long long int) ((signed char) -8136611256749968590LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * ((+(((/* implicit */int) var_9))))))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
