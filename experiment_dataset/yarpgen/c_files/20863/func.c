/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20863
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */unsigned int) (-(128620467)));
    var_13 = 3776219465211223919LL;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((max(((-(var_0))), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)65535))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)192)), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)35235)) : (((/* implicit */int) (signed char)45))))))) ? (((long long int) min((554674788), (((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_18 += ((/* implicit */_Bool) max((((/* implicit */unsigned char) max((arr_8 [i_0] [i_1] [i_0]), (arr_8 [i_0] [i_2] [i_0])))), (((unsigned char) arr_8 [i_0] [i_1] [i_0]))));
                    }
                    var_19 += max((((((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_0])))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)58)))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [(unsigned char)10] [i_2] [i_2])), (arr_3 [i_2])))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_4)))) && (((/* implicit */_Bool) ((arr_9 [i_0]) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (_Bool)0)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_19 [i_5] [(unsigned char)12] [i_6] [i_6] = ((/* implicit */unsigned int) (+(var_7)));
                    arr_20 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_2);
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4] [i_5 - 4] [i_6 + 4] [i_4])) < (((/* implicit */int) (unsigned short)30301)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_9] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7] [i_7])) ? (var_4) : (arr_7 [i_7] [i_8])));
                        arr_32 [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) var_3))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    {
                        arr_39 [11LL] [i_8] [11LL] [i_12] = (~(((/* implicit */int) (_Bool)1)));
                        arr_40 [i_8] = ((/* implicit */_Bool) ((arr_18 [i_7] [i_8]) ? (((/* implicit */int) arr_10 [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1882654908)))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_11] [i_11] [i_12] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)30312)) ? (arr_7 [i_7] [i_8]) : (((/* implicit */unsigned long long int) 2532758608761383788LL)))))))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 16; i_13 += 3) 
            {
                arr_43 [i_7] [i_8] [i_13 + 2] = ((/* implicit */unsigned short) arr_36 [i_13]);
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        {
                            arr_48 [i_7] [i_8] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                            var_24 = (~(arr_41 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]));
                            var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 857403665)) ? (((/* implicit */int) arr_38 [i_7] [i_8] [i_13] [i_14] [i_7])) : (554674796)))));
                            var_26 += ((/* implicit */unsigned char) (+((+(1654157236U)))));
                        }
                    } 
                } 
            }
        }
        for (int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) (-(var_7)));
            arr_51 [i_7] = -3918728601224436688LL;
        }
        for (int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) (unsigned char)205);
            arr_55 [15LL] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [9LL] [9LL] [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3)))))) : ((-(4294967295U)))));
        }
        var_29 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_56 [i_7] [i_7] &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))));
    }
}
