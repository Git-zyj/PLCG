/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52876
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(signed char)3] [i_0] = ((/* implicit */unsigned char) ((4310630614424282437ULL) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32231)) : ((~(((/* implicit */int) (_Bool)1)))))))));
                var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_0 [i_0]), ((_Bool)1))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((short) var_0));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) 102911702);
                    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_4))))))), (((/* implicit */int) arr_18 [i_2] [i_3 + 3] [i_4] [i_5]))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(_Bool)1])) || ((_Bool)0)))) != (((/* implicit */int) ((unsigned short) arr_17 [(signed char)1] [i_3] [i_4 + 1])))))) >> (((((/* implicit */int) arr_12 [i_2] [i_3 + 1])) - (5952))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)88))))) && (((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)1)))))));
}
