/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48141
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
    var_14 = ((/* implicit */unsigned char) ((var_9) <= (min((var_4), (((unsigned int) var_5))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))) : ((-(((/* implicit */int) var_6)))))), (((/* implicit */int) var_1)))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)61), (var_7))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [11U] = ((/* implicit */unsigned int) (!((_Bool)0)));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
                                arr_14 [i_1] [i_1] [i_1] [i_1] [(unsigned char)0] &= (+(((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [(_Bool)1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)56)) == (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_5] [i_5 - 2] [(_Bool)1]))))))));
                            var_19 = ((/* implicit */_Bool) (-(((unsigned int) arr_4 [i_0] [(_Bool)1] [i_6]))));
                            var_20 = arr_10 [i_0] [i_1] [i_5];
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
}
