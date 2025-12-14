/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192059
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-22704), ((short)22472))))) / (var_13)));
    var_16 = ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)22189)) : (var_6))) : (((/* implicit */int) (short)-22712)))) | (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)51850)) : (((/* implicit */int) var_2)))) << (max((((/* implicit */long long int) (_Bool)1)), (-5357891746764721903LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_2]);
                                var_18 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    arr_14 [i_5] [(unsigned char)18] = ((/* implicit */unsigned short) ((arr_9 [i_1] [i_1] [20] [i_1 + 2] [i_1 - 1] [i_0]) ? (min((var_10), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [(unsigned short)1] [20U] [i_5] [i_5 + 1] [8LL] [i_5 + 2])) ^ (((/* implicit */int) arr_9 [i_0] [i_0] [(short)5] [i_0 + 3] [i_1 - 3] [i_1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22707)) && (((/* implicit */_Bool) var_7))));
                        var_20 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = (~(((((/* implicit */_Bool) max(((unsigned short)45158), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51846))))) : (((/* implicit */int) ((arr_12 [i_1] [i_1] [10] [i_7]) != (arr_12 [(_Bool)0] [i_1] [i_1] [i_1])))))));
                        arr_20 [i_5] = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
                        arr_21 [i_0 + 2] [i_0] [i_0] [i_5] = ((/* implicit */int) ((short) arr_15 [9] [i_1 - 2] [(short)14] [i_7]));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5 + 2] [i_7])) ? (arr_18 [(_Bool)1] [(_Bool)1] [(short)10] [i_0]) : (var_4)))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_0] [i_7] [8ULL] [i_0] [i_0])), ((+(arr_12 [9U] [i_1] [i_5] [i_7])))))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((~(((/* implicit */int) (short)22487)))), (((/* implicit */int) (unsigned short)52295))))), (arr_19 [i_0] [i_5] [6U] [(unsigned short)7])));
                    arr_22 [i_0] [i_0] [i_5] = ((/* implicit */int) (unsigned short)52295);
                    arr_23 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)0))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_6)) : (arr_19 [i_0] [i_0] [i_1] [i_8]))) >> (((-5357891746764721903LL) + (5357891746764721954LL)))));
                    var_25 = ((/* implicit */unsigned short) var_13);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 - 2])) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13)))))))));
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_29 [(unsigned short)6] [i_9] [i_9] [i_0 + 1] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1 + 3] [i_9]))) : (arr_3 [(unsigned char)20])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_9] [3LL] [3LL])) << (((((/* implicit */int) var_8)) - (4024)))))) : (max((((/* implicit */long long int) var_7)), (var_13)))))));
                    var_27 = ((/* implicit */int) var_12);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((max((((unsigned int) var_12)), (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                                var_29 += ((/* implicit */short) min((3979518474U), (((/* implicit */unsigned int) (unsigned short)51841))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) max((4233992501U), (((/* implicit */unsigned int) ((signed char) max((var_13), (((/* implicit */long long int) var_5))))))));
                    var_31 = ((/* implicit */unsigned short) var_14);
                }
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1 + 2] [i_0 + 3] [i_0 - 2]))), (min((var_14), (((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [i_0 + 3] [i_0 - 2])))))))));
                arr_36 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((int) (signed char)63)) > (max((((/* implicit */int) var_5)), (1130176686)))))), (var_13)));
            }
        } 
    } 
}
