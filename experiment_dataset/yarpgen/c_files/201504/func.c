/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201504
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
    var_12 = ((/* implicit */long long int) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)11] [i_2] [i_1]))))))))));
                                var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [11ULL])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(arr_8 [i_4])))))) : (max(((+(arr_7 [i_0] [i_1] [i_3] [(unsigned char)4]))), (((/* implicit */unsigned long long int) -5530347184520334157LL)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) (-(((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)-79))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-120)) * (((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0] [i_0])))));
                    arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))))));
                }
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    var_16 -= ((/* implicit */signed char) var_6);
                    var_17 = ((/* implicit */signed char) (-(((unsigned long long int) 11ULL))));
                    arr_19 [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */int) (signed char)66)) % (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [9ULL])))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1 - 3] [i_8] [i_1 - 1] [i_1]))))))))));
                        arr_25 [i_8] [i_1] [i_1] [i_0] = (-((-(-4499568596796534695LL))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((min(((~(var_5))), (((((/* implicit */_Bool) 13282061155307836823ULL)) ? (3710773434461465940ULL) : (3710773434461465933ULL))))) >> ((~(((((/* implicit */int) (signed char)56)) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_7]))))))));
                    arr_26 [12ULL] [i_1] [3ULL] [i_0] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1] [i_1 - 2])), (var_7))));
                    var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_0] [i_0] [i_1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8360514657597969463LL)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)65535))))) : (arr_13 [i_0] [i_0] [i_1] [i_7]))))));
                    arr_27 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_10 [i_0] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1])))) || (((arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1 - 3] [i_7]) != (arr_10 [i_0] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 3] [i_7])))));
                }
                var_21 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(arr_21 [i_0] [i_0] [i_1 + 2] [i_1]))))))));
            }
        } 
    } 
}
