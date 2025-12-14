/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233564
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = arr_4 [i_1];
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((long long int) arr_5 [i_1 + 2] [i_1 + 2] [i_0 + 1])));
                            var_19 = (!(((/* implicit */_Bool) arr_7 [i_3] [i_1] [3U])));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (_Bool)1))))))) || ((!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_4 [i_0]))))))));
                        }
                    } 
                } 
                var_20 = ((((((/* implicit */int) ((short) (unsigned char)9))) * (((/* implicit */int) (unsigned short)57344)))) / (((((/* implicit */_Bool) (signed char)120)) ? (2147483647) : (((/* implicit */int) (signed char)-9)))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)));
    var_22 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 7768708588152481219LL)))));
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((var_2), ((signed char)8)))) ? (((int) var_1)) : ((-(((/* implicit */int) var_5)))))));
}
