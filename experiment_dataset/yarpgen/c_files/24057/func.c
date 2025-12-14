/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24057
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
    var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) < (((153429179U) << (((((/* implicit */int) var_9)) - (9213))))))));
    var_14 = ((/* implicit */int) (~(62914560LL)));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) var_8);
        arr_4 [11LL] = ((/* implicit */_Bool) min(((((_Bool)1) ? (1357228399) : (((/* implicit */int) var_0)))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)-7012))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max(((_Bool)1), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))));
                    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (arr_1 [i_0] [(_Bool)1]))) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0 + 2])) : (16418284470733779000ULL))) - (8768476049877945568ULL))))) << (((min((arr_8 [i_0 + 1] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_2)))) - (856002678LL)))));
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) 3475927619351188395LL);
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)6550))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_12))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_6] [i_6]))))) >> (((var_6) - (3477238158U))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_16 [i_8]))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (var_11))))))))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [(_Bool)1] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 2] [i_4 - 3])))) >> ((((+(((/* implicit */int) arr_2 [i_5 + 4])))) + (30602)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 13; i_10 += 1) 
                        {
                            {
                                arr_32 [i_4] [(_Bool)1] [i_6] [i_9] [i_10 - 1] = ((/* implicit */long long int) var_4);
                                var_21 = arr_23 [i_4] [i_5] [i_6];
                                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65524))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((unsigned long long int) arr_33 [12U] [i_11] [i_4])) < (((/* implicit */unsigned long long int) var_2)))))));
                    var_25 = ((/* implicit */signed char) arr_11 [i_4]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 14; i_14 += 1) 
            {
                {
                    var_26 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_16 [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 12; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_11))));
                                var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-9059881508561610730LL))) : (((/* implicit */long long int) max((arr_0 [i_4]), (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-7014))) > (((((/* implicit */_Bool) ((2634203435676880777LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4)))))) ? (((/* implicit */long long int) 415274116U)) : (max((-9011352202659798096LL), (((/* implicit */long long int) (unsigned char)0))))))));
                    var_30 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)51037)) + (((/* implicit */int) arr_11 [i_4 - 2])))) != (((/* implicit */int) min((arr_11 [i_4 - 1]), (((/* implicit */unsigned short) var_4)))))));
                    arr_49 [i_4 - 1] [i_13] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
}
