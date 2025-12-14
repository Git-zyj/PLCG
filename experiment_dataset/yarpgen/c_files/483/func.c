/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/483
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (452837908U)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : ((+(((/* implicit */int) arr_5 [i_0] [i_0])))))) : (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) % (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [(signed char)10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_3] [(unsigned char)9] [6LL] [(signed char)14]))) : (3412568169360048405LL))), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))) ? ((~(var_12))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)47), ((unsigned char)16)))))));
                                var_16 = arr_9 [i_0] [i_1] [i_1] [12ULL] [i_3] [i_3];
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((min((((unsigned long long int) (short)6300)), (((/* implicit */unsigned long long int) (+(arr_0 [(unsigned char)1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 + 2] [i_0])) <= (((/* implicit */int) arr_4 [i_2] [(unsigned char)0])))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (short)-14503);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-32681)), (var_4)));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((signed char) (unsigned char)163))))))))));
}
