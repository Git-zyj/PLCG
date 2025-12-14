/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50118
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (max((((/* implicit */unsigned int) (unsigned char)241)), (2827550840U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((_Bool) (+(var_10))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : ((~(((/* implicit */int) (unsigned char)15))))));
                    var_20 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [(unsigned char)10] [i_0]);
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (-169834957) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1] [i_0])))) | (255)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)97))))) ? (((/* implicit */int) arr_0 [(short)22])) : (arr_3 [(unsigned short)2] [(unsigned short)2]))))));
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) arr_10 [i_3]);
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_3] [i_4] = ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_4] [i_3])));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_25 [i_3] [i_5] [i_4] [4LL] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [(_Bool)0] [i_6] [(unsigned char)7]))) : (4401715485083860678LL)))));
                        var_22 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (short)17738)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14157)))))));
                        arr_26 [i_3] [i_4] [i_5] [i_5] [14LL] = (!(((((/* implicit */int) (unsigned char)14)) != (((/* implicit */int) (unsigned short)2198)))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) 1080789056U);
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_7]))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_7] [2U])) ? (((/* implicit */int) arr_6 [i_4] [i_3])) : (((/* implicit */int) var_13))));
                arr_29 [i_3] [i_7] [i_7] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_6))) >> (((((/* implicit */int) ((signed char) (short)-11894))) + (130)))));
                arr_30 [i_7] [i_7] = ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_4] [i_7])) ? (((/* implicit */int) arr_23 [i_3] [i_4] [i_4] [i_7])) : (((/* implicit */int) (short)0)));
            }
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            arr_39 [(short)1] [i_10] = ((/* implicit */_Bool) arr_17 [i_9] [i_9]);
                            arr_40 [i_3] [i_3] [(_Bool)0] [i_10] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)11893))))));
                            arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) ((arr_1 [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                arr_42 [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1467416455U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_4 [i_4] [i_3]))))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_12 [11ULL])))) : (((int) 8586123094731430550ULL))));
            }
            for (long long int i_11 = 2; i_11 < 14; i_11 += 2) 
            {
                arr_46 [i_3] [i_11 + 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_3] [i_4] [i_11 + 2] [i_11])) * (((/* implicit */int) arr_11 [i_3]))))) : (((unsigned int) (signed char)77))));
                arr_47 [i_11] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20923))) ^ (arr_1 [i_11 + 1])));
            }
        }
        for (short i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            var_26 -= ((/* implicit */short) ((signed char) (unsigned short)65535));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 1467416455U))));
        }
        for (short i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_32 [(short)7] [i_3] [i_13]))));
            var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_32 [2U] [2U] [i_3])) : (((/* implicit */int) (unsigned short)42298))))) ^ (var_16)));
            var_30 = ((/* implicit */long long int) ((arr_38 [i_3]) % (var_4)));
        }
        arr_55 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_21 [i_3] [i_3]));
        arr_56 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_4)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])));
        var_31 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_32 [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)213)));
    }
}
