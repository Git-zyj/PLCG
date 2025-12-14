/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212977
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
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40620)))))) ? (((var_12) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)12)) + (((/* implicit */int) (unsigned char)186)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_18 = (-(((/* implicit */int) (unsigned char)220)));
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) 1589896086))))))), (((((((/* implicit */_Bool) 1751592099)) && ((_Bool)0))) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_3])) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_11)))))))));
                        var_20 = (+(((/* implicit */int) var_7)));
                        arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-28517))));
                    }
                } 
            } 
        } 
        arr_10 [(unsigned short)8] [i_0 + 1] |= ((/* implicit */unsigned int) var_9);
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0 - 1] [i_0] [i_0] [11LL] [i_0] = ((/* implicit */signed char) min(((~(var_3))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 2]))) != (min((3552435978U), (var_2))))))));
                                arr_23 [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_6] [i_7] = ((/* implicit */unsigned int) ((long long int) -1611209433));
                            }
                        } 
                    } 
                    arr_24 [i_5] = ((/* implicit */unsigned int) -1589896086);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_31 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (short)7680))))))));
                                arr_32 [i_0] [i_4 - 1] [i_4 + 2] [i_5] [i_4 - 1] [(_Bool)1] [i_9 + 3] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_19 [i_4 - 3] [i_4 + 1] [i_4 - 4] [i_4 - 4] [i_4 + 1])) && (((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 - 3] [4U] [i_4] [i_4 - 3])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (var_1) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) 3920644204U))))));
                                arr_33 [i_0] [i_0 - 1] [2U] [i_0] [i_0 + 2] [(_Bool)1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_9 - 1])) : (((/* implicit */int) arr_29 [(unsigned short)12] [i_4] [i_4 + 2] [i_4] [6] [(unsigned short)12]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((short) (-(1589896060))));
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
        arr_36 [i_10] = (((!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-23)), (var_3)))))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (1589896086) : (((/* implicit */int) (signed char)60)))) : ((+(((/* implicit */int) (signed char)-24)))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                {
                    arr_41 [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) arr_37 [i_10]);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) (+((-(arr_35 [i_11] [9])))))) < (max((((var_10) ^ (arr_40 [i_10] [i_12]))), (((/* implicit */long long int) (~(0U))))))));
                    var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((int) var_12))) ? (arr_34 [i_10]) : (((/* implicit */unsigned int) -1589896086))))));
                }
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 1589896077))))))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) max((arr_28 [(unsigned char)7] [i_14] [16] [2] [2] [i_14] [i_14]), (((/* implicit */int) (signed char)-10))))) && ((!(((/* implicit */_Bool) 12)))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) -1083238242231790839LL);
        arr_52 [19U] [19U] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) var_8)), (min((-7828600346941862073LL), (((/* implicit */long long int) (unsigned char)159))))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) var_15)) + (1211094681U)))))));
}
