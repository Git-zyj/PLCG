/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36686
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
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_3)) >> (((arr_0 [i_2]) + (510898083))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1812149660045685913LL)) ? (18) : (((/* implicit */int) (unsigned short)29942)))) < (((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 57941219))) & (((/* implicit */int) var_12))));
                        arr_17 [i_0] [(unsigned short)9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */int) arr_3 [i_1] [i_2 - 1] [i_5]))))))) ? ((-((~(9062292258446454621LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_1] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 2]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [(signed char)14] [i_0] [i_0] [i_2] [(short)14] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (4084441033339505158LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)11))))) ? ((~(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_5)))))) + (23186)))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (2879417945U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        arr_22 [i_2 + 2] [i_2 + 2] [i_1] [4U] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        arr_23 [i_0] [i_0] [(unsigned short)0] [(unsigned short)0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)33442)) >> (((((unsigned int) var_2)) - (3662800475U)))));
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        arr_27 [i_2] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned char) ((19012417U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_20 = ((unsigned short) var_9);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (unsigned short)38275);
}
