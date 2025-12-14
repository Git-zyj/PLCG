/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245515
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62967))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43826))));
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-6905540286774975135LL)))) ? (((/* implicit */int) (unsigned short)4881)) : (((/* implicit */int) (short)20263)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))))) * (var_6)));
                            var_22 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned short)24489)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24503))) : (6U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 - 1] [6U]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 6022786486634359951LL))))))));
                            arr_26 [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_5 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1410509914))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4881)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((~(arr_3 [(unsigned short)2] [i_6]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) -6022786486634359936LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5]))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) arr_19 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 - 1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
    var_25 &= ((/* implicit */unsigned short) ((var_5) << ((-(max((2U), (4294967290U)))))));
}
