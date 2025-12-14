/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243550
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] = var_3;
                var_10 = ((/* implicit */unsigned int) min((var_10), (var_8)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~(arr_3 [(unsigned short)8] [(unsigned char)4] [i_2]))))));
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (unsigned char)126))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                arr_15 [i_0] [9LL] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14)) >> (((min((5595256136376150578ULL), (((/* implicit */unsigned long long int) (unsigned char)129)))) - (104ULL)))));
                                var_14 *= ((unsigned int) arr_0 [i_0 + 1]);
                            }
                        } 
                    } 
                }
                var_15 = (!(((/* implicit */_Bool) ((arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [17U])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */short) (-((~(-650447469)))));
                            var_17 *= ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)106)))))))))));
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) (unsigned char)126))), (var_2)));
}
