/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238702
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [(unsigned char)6]))));
                                arr_16 [i_2] [i_3] [i_2] [i_2] [14LL] [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) var_0));
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_3 [i_2] [i_0] [i_0])))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2])))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_22 [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((5897143870716100266LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6616)))))) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) 1624645539))))) : (((/* implicit */int) (unsigned char)97))))) * (5897143870716100266LL)));
                        var_12 = ((/* implicit */short) ((int) max((var_2), (var_4))));
                    }
                    for (int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6])) != (((/* implicit */int) arr_14 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1])))));
                        var_14 = (~(((/* implicit */int) (unsigned char)113)));
                        var_15 *= ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_16 |= ((_Bool) var_11);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_0 [i_0]))))));
                        arr_29 [i_0] [(short)17] [i_2] [i_2] = ((/* implicit */long long int) (~(max((arr_7 [i_1]), (arr_7 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_6);
}
