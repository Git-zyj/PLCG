/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218542
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_5 [(short)12] [i_1] [i_1]);
                var_12 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_5 [(unsigned char)19] [i_1] [(unsigned char)19])) ? (((/* implicit */int) arr_2 [i_0] [0])) : (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) max((var_10), (var_10)))))) == ((~(((/* implicit */int) arr_4 [i_1] [i_0]))))));
                arr_6 [(unsigned short)4] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))) : (min((((/* implicit */int) var_7)), (((int) arr_8 [i_2]))))));
        var_14 = ((/* implicit */long long int) min((min((arr_9 [i_2] [i_2]), (arr_9 [(_Bool)1] [i_2]))), (((/* implicit */unsigned int) var_6))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
        arr_13 [(unsigned char)11] [(unsigned char)11] = ((long long int) (-(((unsigned int) (unsigned char)4))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((_Bool) ((unsigned short) var_3))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned char) var_9)))));
                            arr_24 [i_7] [6LL] [i_5] [i_5] [i_5] [(short)3] [i_3 + 1] = ((/* implicit */int) var_4);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) ((arr_12 [i_3]) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_16 [(short)4]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_8])))))));
                            arr_27 [i_5] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) arr_18 [(unsigned char)7] [i_5] [i_4 + 2]);
                        }
                        arr_28 [i_6 + 1] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) min((max(((((_Bool)1) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_3 + 1] [i_4])), (var_4)))))), (((/* implicit */int) arr_21 [i_3] [7] [(short)10] [i_5] [i_5] [11ULL] [(unsigned char)0]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_22 [i_3] [i_3] [i_3 + 1] [(unsigned char)6] [(short)9]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)30)))));
    }
    var_20 += ((/* implicit */long long int) var_3);
}
