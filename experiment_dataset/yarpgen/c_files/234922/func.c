/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234922
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
    var_15 = ((/* implicit */long long int) ((max((((_Bool) var_1)), ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned short) var_7)))));
    var_16 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_1)))))), ((-(((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) << (((((/* implicit */int) var_7)) - (227)))))) ? (var_0) : (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_4 [i_0] [i_1] [i_2]))));
                    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    arr_7 [i_2] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_2)))));
                                arr_14 [(unsigned char)16] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) var_13);
                                arr_15 [i_3] [i_3] [i_1] [(unsigned short)3] [i_3] [i_2] = ((/* implicit */signed char) ((unsigned char) var_2));
                                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_5)) : (arr_0 [(_Bool)1])))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)12))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) * (1208004214U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7])))))))))));
                    }
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)3] [i_5] [i_6] [i_6]))) > (3086963085U))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (signed char)(-127 - 1)))))) : (((int) 16583331858179643782ULL)))))));
                }
            } 
        } 
    }
}
