/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192161
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) (signed char)127);
        var_13 |= ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((var_0) * (((/* implicit */int) (unsigned char)0)))) * (var_0)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_14 *= var_8;
                                var_15 = ((/* implicit */int) min((var_15), ((+(var_4)))));
                                arr_12 [i_2] [(unsigned short)10] [i_2] = ((/* implicit */int) var_5);
                                var_16 = ((/* implicit */int) (((-(arr_2 [i_4]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((1729382256910270464ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 4] [i_2 - 1] [7] [i_1] [i_1])))))))));
                                arr_13 [i_2] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)127)) - (((/* implicit */int) arr_3 [i_2] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] |= ((/* implicit */short) ((((((var_9) ? (var_5) : (((/* implicit */unsigned long long int) -25)))) ^ (((/* implicit */unsigned long long int) arr_0 [i_0])))) | (18446744073709551615ULL)));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) || (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) > ((((_Bool)1) ? (var_10) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((arr_8 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)1)))))))));
        var_18 += var_5;
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) ((var_11) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_7)))))));
        var_19 = arr_17 [i_5];
        var_20 += ((/* implicit */unsigned int) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) ((var_9) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255)))))));
    var_23 *= ((/* implicit */signed char) (_Bool)0);
    var_24 += ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_6))))));
}
