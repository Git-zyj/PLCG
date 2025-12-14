/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48074
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_14 = ((max((((/* implicit */long long int) ((int) (unsigned char)98))), (arr_6 [i_0] [i_2]))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [3LL] [i_1] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)114)) <= (((/* implicit */int) var_9))))))))));
                    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_4 [i_2 + 1] [i_2 + 1] [i_4 + 1]);
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2] [i_2] [10ULL] [i_2])), (var_2)));
                            }
                        } 
                    } 
                }
                for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_12 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)113)) || (((/* implicit */_Bool) (unsigned char)85)))))));
                    var_19 = ((/* implicit */signed char) ((unsigned short) ((max((-1), (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned char)111)))));
                }
                var_20 = ((/* implicit */unsigned short) ((max((((unsigned int) var_0)), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)1]))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [4ULL] [i_1] [i_0])) ? (3053758145U) : (826779243U)))) ? (((/* implicit */int) arr_11 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1])))))))));
                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)57)), ((unsigned short)27634)));
            }
        } 
    } 
}
