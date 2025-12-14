/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54943
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
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_11)))))))), (var_7)));
    var_19 = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) != (((/* implicit */int) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (short)25557))))) < (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) var_12);
                                arr_13 [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)0))))));
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)5] [i_2] [i_3])) ? ((~(arr_1 [i_1]))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-111)) > (2147483647))))));
                                arr_14 [i_4] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (-8507472392803930064LL) : (((/* implicit */long long int) -8192)))) % (((/* implicit */long long int) var_0)))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (max((((/* implicit */unsigned long long int) (signed char)0)), (arr_11 [i_0] [i_0] [8ULL] [9U] [i_2] [i_2 + 2]))))) ^ (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) (~(11U))));
                }
            } 
        } 
    } 
}
