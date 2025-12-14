/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210694
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = (-((((!(((/* implicit */_Bool) var_7)))) ? (4294967282U) : ((-(var_5))))));
        var_16 = ((/* implicit */unsigned char) var_5);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    var_17 *= var_14;
                    arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (((((_Bool)1) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12)))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)146))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_1] [i_2 - 1]) > (arr_3 [i_2 - 1]))))) : (3031711309U)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((((_Bool)1) ? (3367614332U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2]))))) : (max((2456820407U), (1945150922U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2456820402U))))))));
                    arr_16 [i_1] [i_2] [i_4 + 1] = max(((~((-(19U))))), (3968U));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 1073741312U))));
                    var_20 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned char)18] [i_2] [i_4]))) : (772174658U)))) ? (max((1945150916U), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    var_21 = arr_7 [i_2] [i_2];
                    arr_19 [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) var_2);
                }
                arr_20 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max(((~((-(2349816375U))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_1))), ((-(3731092189U)))))));
                var_22 ^= ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_9 [i_2 - 1] [(unsigned char)8])))), (((/* implicit */int) (unsigned char)255))));
                var_23 = ((/* implicit */_Bool) (+(((((115970856U) != (1904393803U))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2349816363U)) ? (927352962U) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1838146881U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))));
}
