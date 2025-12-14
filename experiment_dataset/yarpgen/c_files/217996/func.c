/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217996
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
    var_17 ^= ((/* implicit */unsigned short) (~(((long long int) ((long long int) var_14)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_2] [i_0 + 2] [(_Bool)1])) == ((+(((/* implicit */int) (short)-175)))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(signed char)14])) : (((/* implicit */int) ((unsigned short) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [(signed char)0] [(unsigned short)11] [(unsigned short)11] [i_1] [i_1])))))))));
                            var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_6 [(_Bool)1])))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0 + 1] [i_3] [i_0] [i_0])) & (((/* implicit */int) (unsigned short)14830))))) : (((9598061867394265521ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19)))))))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_9 [i_3])))));
                            arr_13 [i_0] [i_3] [12ULL] [i_1] [i_0] = ((/* implicit */unsigned short) min((((short) ((9598061867394265535ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))), (((short) arr_0 [i_0] [i_0 - 2]))));
                            var_21 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_1] [i_0 + 2] [i_0 + 1] [i_0] [i_0]))) ? (8848682206315286106ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12461))) : (3939316447U)))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0 + 1]))))))))));
                var_24 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [(unsigned short)13])) * (((/* implicit */int) arr_10 [i_0] [(short)15] [i_0 - 2] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65499)) ? (8848682206315286109ULL) : (((/* implicit */unsigned long long int) -5041044199258977003LL))))))))));
                var_25 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [15U])) + (((/* implicit */int) arr_6 [(short)1]))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)9])))) : (((/* implicit */int) arr_7 [i_0 + 3] [i_0] [i_0 + 3])))));
            }
        } 
    } 
}
