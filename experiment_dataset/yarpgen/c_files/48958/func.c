/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48958
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
    var_13 ^= ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_2 [i_0] [i_0]), (((arr_3 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1]))))))), ((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2203)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_9 [13LL] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_3)), (arr_6 [i_0] [i_1] [i_1] [i_2])));
                    var_16 = ((/* implicit */int) var_1);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_7 [(signed char)1] [(signed char)1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_11);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14226)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (7788408871531562859ULL)));
                            }
                        } 
                    } 
                }
                var_19 *= ((/* implicit */unsigned short) arr_11 [i_1]);
                var_20 *= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (((long long int) (unsigned char)144))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 6047341056602431448ULL))))), (var_4)));
}
