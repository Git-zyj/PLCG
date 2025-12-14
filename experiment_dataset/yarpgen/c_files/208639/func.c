/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208639
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) (unsigned short)27820)) < (((/* implicit */int) (short)31480)))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))));
                var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [20] [i_1] [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_0 - 2] [i_1]))))) ? (((/* implicit */int) ((unsigned short) var_17))) : (((/* implicit */int) ((signed char) arr_3 [(signed char)14] [(signed char)14] [i_1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (551989505)));
                                var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)63630)))));
                                arr_15 [i_0] [(signed char)8] [(short)13] [i_1] [i_0] [i_4] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_3])), (var_10)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48664)))) : (((((/* implicit */_Bool) -1004873800063639665LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_6 [i_4] [i_4] [i_4] [i_0]))))) : (((/* implicit */int) arr_14 [i_1] [i_1] [(_Bool)1] [(unsigned char)5])))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_1] [i_0])))) | (((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3] [i_0 - 3])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((_Bool) ((unsigned short) var_17))), ((!(((/* implicit */_Bool) ((var_1) ? (70367670435840LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_25 = ((/* implicit */int) var_1);
}
