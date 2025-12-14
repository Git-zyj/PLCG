/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49731
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) max((3818257176U), (((/* implicit */unsigned int) arr_4 [i_0])))))) | (((/* implicit */int) min((min((arr_4 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned short) arr_3 [i_0])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(min((476710120U), (476710125U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140))))) : (((((/* implicit */_Bool) (short)15021)) ? (-1369699008) : (((/* implicit */int) (unsigned short)11457)))))) << ((((~(((((/* implicit */int) arr_4 [i_2])) | (((/* implicit */int) arr_8 [(signed char)7])))))) + (32591)))));
                arr_12 [(short)5] [i_3] = ((/* implicit */short) ((unsigned short) (signed char)-60));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_16))))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [1U])) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (10137529497840839804ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4])))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((476710120U), (arr_20 [i_4] [i_5])))) ? (((/* implicit */int) arr_18 [i_7] [i_7] [i_7])) : (((/* implicit */int) (!(arr_18 [i_4] [i_4] [i_4]))))))) + (max((((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned int) 1369699017)) : (arr_22 [i_4] [i_5] [(signed char)7]))), (((/* implicit */unsigned int) arr_0 [(signed char)5]))))));
                        }
                    } 
                } 
                arr_23 [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) -1369698986)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((10993450902632886380ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned int) arr_10 [i_4] [i_4])), (arr_22 [i_4] [i_4] [i_4]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
