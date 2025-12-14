/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208329
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
    var_16 = (+(((/* implicit */int) (((+(((/* implicit */int) (unsigned char)26)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [12ULL] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_4 [i_2 + 1] [i_1] [i_2 + 1])), (var_0)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_7)))) ? (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 1])) : (((1777719374) & (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) : (((/* implicit */int) (unsigned char)97))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) -1);
                                var_19 += ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 + 1] [i_4 - 1] [i_4 - 1])) < (((/* implicit */int) arr_5 [i_2 - 1] [i_4 + 3] [i_1]))))) / (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_5 [i_2 + 1] [i_4 - 1] [i_1])))));
                                var_20 = ((/* implicit */_Bool) max((var_20), ((!((((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) 828610168))))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((unsigned int) var_10))), (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) -334884796)) : (arr_14 [i_4 + 2] [(signed char)12] [(unsigned char)9] [i_2 + 2] [i_1] [12]))))) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4294967295U)) ? (var_15) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_0))));
}
