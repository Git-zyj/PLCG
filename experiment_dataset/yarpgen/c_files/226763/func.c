/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226763
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) 67108864U);
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1 - 3] [i_2] = (!(((/* implicit */_Bool) 4227858432U)));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_6 [i_0] [i_1 - 1] [i_2]))));
                    arr_11 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((-1860422909153076573LL), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (arr_3 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (int i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5 - 1] = ((/* implicit */unsigned short) ((unsigned int) 67108864U));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 412779757U)) ? (((/* implicit */unsigned long long int) 67108864U)) : (((((/* implicit */_Bool) (signed char)-103)) ? (((((/* implicit */_Bool) 4227858432U)) ? (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5 + 3])) : (var_3))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((4227858432U) - (4227858428U)))))))))))));
        arr_22 [i_5 + 2] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_11)))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? ((+((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) (unsigned short)37439))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) (_Bool)0);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((arr_23 [i_6] [i_6 + 1]) * (arr_23 [i_6 + 3] [i_6 + 2]))))));
        arr_26 [i_6] = ((/* implicit */signed char) var_5);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_7))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_34 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */_Bool) (-(((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                        arr_35 [i_6] [i_7] [i_8] [i_9] [i_6] = ((/* implicit */short) var_1);
                    }
                } 
            } 
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) && (arr_33 [i_6] [i_6] [i_7 + 1] [i_6] [i_6 + 1])));
        }
    }
    for (long long int i_10 = 2; i_10 < 24; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */_Bool) -1521882785);
        arr_39 [i_10] = ((/* implicit */unsigned char) arr_36 [i_10] [i_10]);
        arr_40 [i_10] = ((/* implicit */unsigned long long int) var_15);
    }
    var_25 = ((/* implicit */unsigned int) (!(((_Bool) (!(((/* implicit */_Bool) var_3)))))));
    var_26 = ((/* implicit */unsigned int) max((var_26), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) > (2633017243U))))));
}
