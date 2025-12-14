/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204341
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
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = var_12;
    var_21 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) > (var_15)))), ((+(var_0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8752302144136020501LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((12669875615774703821ULL), (var_12)))));
                    arr_9 [i_1] [i_1 - 1] [(short)8] = ((long long int) 33554431LL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (signed char)-48);
                                var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) min(((short)31744), (((/* implicit */short) var_9))))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_3] [i_4])) : (var_2)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (max((3230302145U), (((/* implicit */unsigned int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_25 = ((/* implicit */short) -2125941120);
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_6] [i_7] = ((((/* implicit */_Bool) ((arr_15 [i_5] [i_5] [i_6] [(unsigned short)2] [i_7] [(signed char)1]) ? (((/* implicit */unsigned long long int) -1LL)) : (((var_11) / (((/* implicit */unsigned long long int) 2358199594U))))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)31096)) ? (((/* implicit */unsigned int) -1059766138)) : (var_0)))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_8] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)105))))))) + (max((arr_0 [i_7] [i_5]), (((((/* implicit */_Bool) arr_17 [i_5] [9LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))))));
                        var_27 = ((/* implicit */long long int) var_3);
                        var_28 = ((/* implicit */unsigned char) arr_2 [i_8]);
                    }
                } 
            } 
        } 
        arr_28 [i_5] [i_5] = (-(((/* implicit */int) var_1)));
        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
        arr_29 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_5] [4] [4] [4]))));
    }
}
