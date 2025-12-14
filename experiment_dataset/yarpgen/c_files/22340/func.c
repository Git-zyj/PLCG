/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22340
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
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)118)));
        var_17 = ((/* implicit */short) (-(max((arr_0 [i_0 + 1]), (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)7)) ? (((var_3) ^ (((/* implicit */int) var_14)))) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((var_16), (var_13))))));
        var_19 = ((/* implicit */signed char) min(((_Bool)1), (var_6)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_20 -= ((/* implicit */_Bool) (+(var_4)));
            var_21 = ((/* implicit */signed char) max((var_21), (arr_5 [i_0 + 1] [i_0 + 1])));
        }
    }
    for (int i_2 = 3; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) arr_1 [i_2 - 1])))))));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (((int) (!(arr_1 [i_2])))))))));
    }
    for (int i_3 = 3; i_3 < 15; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_3) >= (arr_0 [i_3 - 3]))))));
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3] [7U])) ? (max((arr_20 [i_3] [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 1] [i_3]), (((/* implicit */unsigned int) var_2)))) : (((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (arr_16 [i_3 + 1] [i_3 + 1]))))));
                                var_27 = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 += ((/* implicit */short) var_1);
    }
    for (int i_8 = 3; i_8 < 15; i_8 += 3) /* same iter space */
    {
        arr_29 [i_8 - 2] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (max((arr_4 [i_8 - 3] [i_8 - 3] [i_8]), (((/* implicit */unsigned long long int) 2066575163U))))))) ? (((/* implicit */unsigned long long int) var_15)) : (max((max((((/* implicit */unsigned long long int) arr_25 [i_8] [i_8] [0] [15LL])), (var_4))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    arr_36 [i_8] [i_9] = ((/* implicit */short) ((int) ((unsigned long long int) var_12)));
                    arr_37 [1] [1] [1] [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) 10101490273796258939ULL)))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((int) arr_9 [i_8])))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                    var_31 |= ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) (!(arr_1 [i_8])))) : (((/* implicit */int) ((2066575148U) != (((/* implicit */unsigned int) arr_22 [i_8 - 2] [i_9] [i_10])))))))) || (((var_13) && (((/* implicit */_Bool) ((arr_2 [i_10]) | (((/* implicit */long long int) 0))))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) (-(((unsigned long long int) ((unsigned long long int) 331272042)))));
}
