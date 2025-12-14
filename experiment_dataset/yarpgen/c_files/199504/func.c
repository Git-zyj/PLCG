/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199504
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 |= ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) (signed char)121))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_4] [i_4])) : (389580945))) : (((/* implicit */int) (unsigned char)213)));
                                arr_13 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-42)) > (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1] [i_0 + 3]))))) > (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_11 [i_3] [i_2 + 1] [i_1 + 1] [i_1 + 2] [i_3])))))));
                            }
                        } 
                    } 
                } 
                var_12 |= ((/* implicit */signed char) ((unsigned short) ((min(((_Bool)1), ((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28617))) * (var_9)))))));
                arr_14 [i_1] [i_0] |= ((/* implicit */unsigned int) (short)28633);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), ((short)-28618)))) ? (((/* implicit */int) min((arr_8 [i_1 - 1]), (arr_8 [i_1 + 1])))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1 - 1]))))));
                            var_14 |= ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_6)))) ? (4206205848282139781ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_4)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
