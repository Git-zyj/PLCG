/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205495
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
    var_10 = ((/* implicit */unsigned long long int) ((((((var_9) && (var_9))) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)55842)))))) && (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_0))))))));
    var_11 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_4)))))) > (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) var_0)), (var_3)))))));
    var_12 = ((/* implicit */long long int) (signed char)43);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (~((((~(1067748605U))) << ((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (33)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) / (max((((/* implicit */unsigned long long int) (unsigned short)9694)), (arr_4 [i_2] [(unsigned char)13] [16ULL]))))))));
                                arr_11 [i_0] [i_0] [10ULL] [i_0] [i_0] = ((max(((+(arr_4 [i_1 + 1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))) == (((var_3) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1] [i_0]))) ^ (var_6)))))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (+((~((+(var_6)))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned char) arr_7 [i_2]))))))))));
                }
            } 
        } 
    } 
}
