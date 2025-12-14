/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47294
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
    var_14 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)63))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3978247768U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)189)) || (((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((arr_10 [i_1] [i_1] [i_3]) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))))))) < (((unsigned int) ((long long int) var_9)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) (-((((_Bool)1) ? (arr_8 [i_0] [i_0] [i_1 - 2] [i_0]) : (((/* implicit */int) var_5))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 853350190U)) ? (3441617105U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))))))) : (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)57)) - (((/* implicit */int) var_11))))) : (min((8748278U), (((/* implicit */unsigned int) var_11))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_4] [i_1 + 4] [i_0] [i_0] [i_0]));
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_19 = ((/* implicit */short) ((arr_21 [i_1 - 2] [i_1 - 2] [i_7]) ? ((~(((/* implicit */int) arr_21 [i_1 + 3] [i_7] [(unsigned short)5])))) : (((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 - 3] [i_1 - 3] [(_Bool)1]))))))));
                    var_20 = ((/* implicit */short) (unsigned char)198);
                }
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    var_21 ^= ((/* implicit */short) arr_8 [i_0] [i_0] [(short)14] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 2) 
                    {
                        for (short i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */short) max((arr_0 [i_8]), (((/* implicit */unsigned long long int) (+(arr_9 [i_1] [i_1 - 3] [i_1 + 3] [i_9 - 2]))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1 + 3] [i_1 + 3] [i_9] [i_1 + 3])) << (((/* implicit */int) var_2))))) * (((((unsigned int) (_Bool)0)) >> (((((((/* implicit */_Bool) var_6)) ? (3368658379062836178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14573))))) - (3368658379062836164ULL))))))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_8] [i_8] = ((/* implicit */int) (+(((arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 3]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_2))))) : (min((var_13), (var_6)))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1240305313347502490ULL)) ? (1348900215U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))))))) : (((/* implicit */int) arr_15 [i_0] [i_1 - 3]))));
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_34 [2U] = ((/* implicit */unsigned int) (~(-1155721545)));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) var_12)) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1 + 3] [i_1] [(unsigned short)9]))) / (var_8))))))));
                    arr_35 [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))) > (5733570481370790514LL)));
                }
                for (int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    arr_38 [i_1] = ((/* implicit */unsigned char) min((min((-507639931), (((arr_8 [i_0] [i_0] [i_0] [i_0]) - (arr_8 [i_0] [i_1] [i_12 + 2] [i_12 - 2]))))), (((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */short) arr_11 [15U] [15U] [15U] [i_12]);
                    arr_39 [i_0] [i_0] [i_12 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_4))) == (((((/* implicit */_Bool) 2682617459143032451ULL)) ? (((/* implicit */int) arr_23 [i_1 + 1])) : (((/* implicit */int) arr_23 [i_1 - 1]))))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-55)) & (((/* implicit */int) ((arr_32 [i_0] [i_1 + 1] [i_1 + 2] [i_1 + 4]) <= (((/* implicit */unsigned long long int) 1155721514))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) (unsigned short)25162);
    var_28 = ((/* implicit */long long int) 1789829395U);
}
