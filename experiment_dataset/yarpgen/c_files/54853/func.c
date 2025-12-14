/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54853
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_11 += ((/* implicit */signed char) arr_0 [i_0] [i_0 + 1]);
                        var_12 = ((/* implicit */long long int) arr_5 [i_1]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_11 [i_3] [i_0] [i_3] [i_0] [i_0 - 1] = ((long long int) arr_0 [i_4] [i_2]);
                            var_13 = ((/* implicit */signed char) (-(((arr_10 [i_3] [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_3]) / ((+(var_9)))))));
                            var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (var_4)));
                            var_15 = min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126)))))))), ((+((((_Bool)1) ? (var_1) : (var_1))))));
                            var_16 = ((/* implicit */_Bool) var_9);
                        }
                        var_17 &= min((((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)12178)) : (((/* implicit */int) (_Bool)1))))))), (min((min((var_4), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))));
                        var_18 |= ((/* implicit */_Bool) min((((/* implicit */int) ((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_8)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
                        var_20 = (+(var_1));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((arr_10 [i_1] [(signed char)16] [i_2] [i_5 - 1] [i_6 + 1] [i_5] [i_6 + 1]) >= (var_1)));
                            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 3]))));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_5])))))))));
                    }
                    var_24 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (33030144LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    var_25 = var_2;
    var_26 = ((/* implicit */unsigned short) var_5);
    var_27 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 &= min((((/* implicit */long long int) ((unsigned short) var_2))), (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [9LL]))) - (var_8))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [(unsigned short)14]))))))));
        var_29 = ((/* implicit */unsigned short) ((long long int) (((_Bool)1) && ((!((_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    {
                        arr_26 [i_10] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */int) (!((_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))));
                        arr_27 [i_8] [i_8] |= ((/* implicit */long long int) (~((-((+(((/* implicit */int) (_Bool)1))))))));
                        var_30 = ((/* implicit */long long int) (_Bool)1);
                        var_31 = ((/* implicit */long long int) (unsigned short)6763);
                    }
                } 
            } 
        } 
    }
}
