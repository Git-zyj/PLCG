/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203903
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
    var_14 += var_1;
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned short) var_5);
        var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_1 [20]), (arr_1 [(unsigned char)22]))))));
        var_17 &= ((/* implicit */signed char) var_11);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)32754)))) || (((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_1))))))))) < (var_5)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)794)) % (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) var_7))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (2912103898U)))))) : (max((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) min((arr_3 [i_0]), (arr_3 [i_0]))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_19 = ((/* implicit */int) arr_5 [i_1 + 2]);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) arr_2 [i_1])))));
        var_21 -= ((/* implicit */_Bool) arr_1 [i_1]);
        arr_10 [i_1] = ((/* implicit */long long int) arr_2 [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 6; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) arr_13 [i_3 + 1]))))))));
                            arr_21 [i_5] [i_4] [i_5] [i_5] [i_3 + 2] [i_2] &= ((/* implicit */signed char) (((~(arr_12 [i_2] [i_3 - 1]))) == (((/* implicit */int) ((unsigned char) 1700413517U)))));
                            arr_22 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 7; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_8])) - (((/* implicit */int) arr_2 [i_7])))) / (((((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1] [i_3 + 1] [i_2])) + (((/* implicit */int) var_3)))))))));
                                var_24 &= ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                } 
                arr_32 [i_2] [i_3] &= ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
