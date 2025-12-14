/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214572
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */signed char) ((min((((/* implicit */int) (_Bool)0)), (-1910918385))) == (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) : (var_9))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (signed char)-51))))), (3827846895U))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
                    arr_11 [i_0] [(signed char)20] |= ((/* implicit */_Bool) var_10);
                    var_15 += max(((!(((/* implicit */_Bool) min((arr_6 [(signed char)5] [i_1 - 4] [i_1 - 1]), (((/* implicit */signed char) (_Bool)1))))))), (max((var_0), (((((/* implicit */int) var_5)) <= (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((18031203182461187116ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [4LL] = ((/* implicit */unsigned char) max((min((((_Bool) var_1)), ((!(arr_18 [i_3] [i_3] [i_3] [i_3]))))), (((_Bool) var_8))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_26 [i_4] [i_4] [i_4] [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) arr_17 [i_5 - 2] [i_7]);
                                arr_27 [i_7] [i_7] [i_6] [i_6] [2LL] [(unsigned short)6] [9U] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) max((arr_0 [i_5 + 3] [i_5 + 3]), (((/* implicit */unsigned char) var_6))))) / ((-(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = -1LL;
}
