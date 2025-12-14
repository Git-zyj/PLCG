/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243822
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)2048))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (-(arr_6 [i_1] [i_1 + 1] [i_1])));
                                arr_13 [i_0] [i_0] [i_1] = ((_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 3]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_1] [i_1 + 3] [i_0] [16] [i_0]);
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) var_7))))) >= (((/* implicit */int) var_9)));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_5 [i_2]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((max((((/* implicit */long long int) ((_Bool) var_3))), (((((/* implicit */_Bool) var_4)) ? (arr_15 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))))))), (max((arr_15 [i_6] [i_5]), (0LL)))));
                arr_22 [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */int) ((unsigned short) (_Bool)1))) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)39))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_25 [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (unsigned char)45);
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68)));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_0)))), (((/* implicit */int) min(((unsigned char)45), (((/* implicit */unsigned char) (signed char)-56))))))))))));
                }
                var_24 = ((/* implicit */long long int) (unsigned short)26405);
                var_25 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_26 *= ((/* implicit */short) var_9);
}
