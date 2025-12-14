/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37088
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)99)), (var_14)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)3)) - (((/* implicit */int) arr_2 [(unsigned char)10] [i_1])))) + (((/* implicit */int) arr_2 [(short)16] [i_1 - 3]))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [(_Bool)1] [i_1 - 2])));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0])) ? (arr_7 [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_1] [i_1] [i_1] [i_1])));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_4] [i_4 + 1] [i_1 - 2]))));
                                var_23 = ((/* implicit */signed char) (+(arr_4 [i_1 + 2] [i_1])));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) | (arr_7 [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 1])));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) : (((((/* implicit */_Bool) -199785553)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)65532))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)106)) * (((/* implicit */int) (unsigned char)189))));
        var_27 = ((/* implicit */unsigned char) arr_5 [i_0]);
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_1 [(signed char)20] [(signed char)20])) - (((/* implicit */int) arr_3 [i_5] [(_Bool)1] [i_5]))))));
        var_29 = ((/* implicit */unsigned char) var_6);
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65508)) <= (((/* implicit */int) (unsigned short)65533))));
}
