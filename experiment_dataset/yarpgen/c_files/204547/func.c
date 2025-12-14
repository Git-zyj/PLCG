/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204547
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_9) | (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((var_6) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [(_Bool)1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (arr_1 [i_0])))))));
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_6))));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_12 = ((/* implicit */short) var_9);
                    var_13 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned char)0]), (((/* implicit */short) arr_0 [i_0] [i_1])))))))));
                    var_14 = (~(((/* implicit */int) (signed char)-18)));
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_15 &= ((/* implicit */unsigned int) ((long long int) var_9));
        arr_14 [i_4] = ((/* implicit */short) arr_3 [(signed char)19] [i_4] [(signed char)19]);
        arr_15 [i_4] [i_4] = arr_6 [i_4];
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_6] [6ULL] [i_7]))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_7))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_5)) - (82)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((var_9) >= (arr_26 [(signed char)6] [i_6] [i_6] [i_5])))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_3))))))));
                                var_18 -= ((/* implicit */short) ((((/* implicit */int) arr_25 [i_5] [i_5] [i_7] [i_8 - 3])) == (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) max((arr_27 [i_5] [i_5] [i_5]), (arr_7 [(short)18] [(short)8] [i_8] [18ULL])))) : (((/* implicit */int) var_10))))));
                                arr_30 [i_5] [i_9] [i_9] &= ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_5] [i_5]))));
                                var_19 = ((/* implicit */unsigned int) (~(min((((unsigned long long int) arr_13 [i_5])), (((/* implicit */unsigned long long int) var_9))))));
                                arr_31 [6ULL] [(unsigned short)10] [i_7] [6ULL] [(signed char)4] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)221))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */int) var_6)), (var_9)))))) : (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_6] [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_9 [i_5] [i_6] [i_7])) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (((long long int) arr_21 [i_6] [i_7]))));
                                var_22 -= ((/* implicit */unsigned int) ((min((((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_5)))), ((-(((/* implicit */int) var_6)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_20 [i_5] [(short)9]), (((/* implicit */int) max((arr_23 [i_5] [i_5]), (((/* implicit */unsigned char) var_6))))))))));
        var_24 = ((/* implicit */_Bool) var_3);
    }
    var_25 = var_8;
}
