/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200595
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
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) -393383026))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) var_3);
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_16 = var_13;
                    arr_14 [i_0] [i_0] [3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0 - 1] [i_0]) == (((/* implicit */unsigned long long int) var_3)))))) : (arr_1 [i_0])));
                    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)239))));
                    var_19 = ((/* implicit */signed char) max(((+(max((arr_1 [i_0]), (((/* implicit */long long int) var_7)))))), (arr_0 [i_0])));
                }
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (arr_10 [i_4 + 3] [i_0] [i_4 + 1])));
                                arr_23 [i_6] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (560090170) : (((((/* implicit */int) (unsigned char)13)) << (((((/* implicit */int) var_10)) - (25))))))), (((/* implicit */int) var_5))));
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) 1442449031417133603LL);
                                var_23 = var_9;
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18149))) : (arr_32 [i_0 - 4] [i_0 - 2] [i_0] [i_0 - 3] [i_7 + 1]))) - (18137ULL)))));
                                var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [(unsigned short)11] [(unsigned short)11] [i_8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24376)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-108))))) : (arr_1 [i_0]))), (((/* implicit */long long int) min(((unsigned char)60), ((unsigned char)204))))));
                            }
                        } 
                    } 
                } 
                arr_36 [11] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) min((((var_1) >> (((((/* implicit */int) arr_34 [i_0 - 4] [i_0 - 4] [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0])) - (171))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_1] [i_0] [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_0] [i_0 + 2] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
