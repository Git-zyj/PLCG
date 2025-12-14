/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33099
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) 1);
        var_17 &= ((/* implicit */unsigned int) var_16);
        var_18 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((1), (3)))), (arr_1 [i_0])));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)18))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_14 [i_2] [i_1] = ((/* implicit */_Bool) var_9);
                    arr_15 [i_1] = ((/* implicit */unsigned short) min((arr_0 [i_3]), (var_9)));
                }
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */_Bool) (-(var_6)));
        arr_18 [i_4] &= ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_4 - 1])), (3)))) ? (min((((/* implicit */long long int) arr_2 [i_4 - 1])), (var_5))) : (((/* implicit */long long int) (-(((/* implicit */int) var_12))))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 4; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(max((arr_8 [i_5 - 4] [i_5 - 3]), (((/* implicit */long long int) var_12)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_25 [i_4 + 1] [i_4 + 1] [i_5 - 1] [i_6] = ((/* implicit */signed char) var_7);
                arr_26 [i_5] = ((/* implicit */unsigned short) arr_23 [(short)0]);
                arr_27 [i_4 - 2] [i_4 - 2] [(signed char)8] [(_Bool)1] = ((/* implicit */_Bool) arr_5 [i_5]);
            }
        }
        /* vectorizable */
        for (unsigned short i_7 = 4; i_7 < 11; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_22 -= (+(var_7));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)175))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) 17834132246921047206ULL))));
                            arr_37 [i_4] [i_8] [i_9] [i_9] [1U] [(_Bool)1] = ((/* implicit */short) var_7);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 1) 
                    {
                        {
                            arr_45 [i_11] [(_Bool)0] [i_12] = ((/* implicit */unsigned short) arr_6 [i_4 + 1] [i_13 - 3]);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_14 = 4; i_14 < 11; i_14 += 3) /* same iter space */
        {
            arr_48 [i_4] [i_14 - 3] = (~((-(((/* implicit */int) var_3)))));
            var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_4] [i_4 - 2]))), (var_9)));
            var_27 = min((((/* implicit */int) ((short) var_2))), ((~(((/* implicit */int) arr_12 [i_4 - 2])))));
        }
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_5))));
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_5))));
}
