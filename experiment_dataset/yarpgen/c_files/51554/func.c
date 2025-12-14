/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51554
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_1] [i_1] = arr_5 [i_0] [i_1] [i_2];
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (((+(var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))))));
                }
                /* LoopNest 3 */
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_18 [9U] [i_1] [i_3] [14LL] [i_4] [i_1] = ((/* implicit */int) ((arr_16 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_11 [i_3])))) && (((/* implicit */_Bool) arr_15 [i_0 - 1])))))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                                var_14 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                } 
                arr_19 [11ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) | (var_5))) | (arr_12 [i_0] [i_0 + 3] [i_0] [i_0 + 3])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_9))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (var_5)))), (var_1)))) ? (((/* implicit */int) min((((signed char) var_7)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))))) : (var_6)));
}
