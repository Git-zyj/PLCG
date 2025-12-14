/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21621
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
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 9223372036854775800ULL)) ? (-5906890873353357056LL) : (((/* implicit */long long int) 984280123)))))))));
                                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_10)) : (var_5))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (5906890873353357055LL))))));
                            }
                        } 
                    } 
                    arr_13 [(unsigned char)17] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [10])) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)43999)) - (((/* implicit */int) arr_4 [13ULL] [14ULL]))))) ^ (var_8))) : (((long long int) (unsigned short)57384))));
                }
            } 
        } 
    } 
    var_16 = var_9;
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3188563804346866493LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned char)76)))) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-25207))))))));
    var_18 = ((/* implicit */unsigned short) (-(var_10)));
}
