/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208569
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((arr_4 [(_Bool)1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))) != (((((/* implicit */_Bool) (unsigned short)7886)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)2))))));
                    var_15 = ((/* implicit */_Bool) var_2);
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = (unsigned short)7;
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) (signed char)40)))) | (((/* implicit */int) ((unsigned short) arr_4 [i_4] [i_1] [i_0])))))), ((+(((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [i_1] [(signed char)15] [(signed char)15] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned short)20162)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) var_9))));
}
