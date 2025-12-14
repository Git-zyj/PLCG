/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197283
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
    var_16 &= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((((/* implicit */_Bool) 1U)) ? ((+(912833746U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned short)41247)) : (((/* implicit */int) arr_3 [i_0]))))))) : (((unsigned int) arr_3 [12LL]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)24269))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) arr_3 [i_2 - 2])))))))));
                            arr_12 [i_3] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_2 + 1])))), (min((((/* implicit */int) (signed char)27)), ((-(((/* implicit */int) arr_3 [i_0]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (signed char)19);
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_5 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((signed char)48), ((signed char)-27)))))))));
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_5 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
}
