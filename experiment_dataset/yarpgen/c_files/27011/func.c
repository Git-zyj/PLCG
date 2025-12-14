/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27011
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
    var_13 += ((/* implicit */short) ((unsigned short) max((((((/* implicit */int) (signed char)73)) ^ (((/* implicit */int) var_10)))), ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) var_10)) + (126))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) % ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0])), (arr_7 [i_0] [i_1] [i_2]))))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) / (5645744881069674399LL)))) ? (max((-1558755784), (((/* implicit */int) (short)32767)))) : (((((/* implicit */int) (_Bool)1)) % (-904157746))))))));
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0])))))));
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((arr_9 [i_0] [i_1 - 1] [i_1] [i_2 - 2]), ((-2147483647 - 1))))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_9 [i_2] [i_0] [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_7 [i_0] [(signed char)0] [i_2 + 1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-32767)), ((unsigned short)65527)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_4]))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_6 [(unsigned short)3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
