/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205472
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_0))))) : (arr_2 [i_0 + 1]));
        arr_5 [i_0] = ((/* implicit */signed char) (((-(arr_2 [i_0 + 1]))) | (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_0)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (var_0)));
        arr_8 [(signed char)11] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)85)), (((((/* implicit */_Bool) var_6)) ? (arr_1 [3LL] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))))) ? (min((arr_1 [i_1] [i_1 + 1]), (arr_2 [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)3)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 -= ((/* implicit */long long int) var_0);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (-(-8966496011023008190LL)));
                        var_18 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-20)))) == (((/* implicit */int) ((_Bool) var_9)))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((_Bool) (unsigned char)40)))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-21)) > (((/* implicit */int) (unsigned char)99)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 -= ((/* implicit */unsigned char) (((+(var_8))) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_6] [i_2 + 1])))));
            arr_23 [i_2] [i_2] [i_2] |= ((((/* implicit */_Bool) ((signed char) arr_3 [i_2 - 1] [i_6]))) ? (((((/* implicit */_Bool) (signed char)21)) ? (arr_2 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_10 [i_7]);
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)231)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-14))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                }
                var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(arr_15 [i_2 - 1]))))));
            }
            var_27 = ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
        }
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_2))))))))));
        var_29 *= ((/* implicit */signed char) ((arr_15 [i_2 - 1]) > (arr_15 [i_2 - 1])));
        var_30 += (_Bool)1;
    }
    var_31 = ((((/* implicit */int) (signed char)3)) > ((~(((/* implicit */int) max((var_9), (((/* implicit */signed char) var_10))))))));
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_6)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))));
}
