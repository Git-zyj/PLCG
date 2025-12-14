/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234354
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4261811253U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)19]))))) : (max((max((4294967295U), (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned int) ((_Bool) (short)-6677)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) (short)7769)) * (((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_0])))) & (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [i_3])))));
                            arr_14 [(signed char)11] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_12 [(short)7] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [(_Bool)1])) / (((/* implicit */int) arr_12 [i_1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 2]))))));
                            var_18 = (i_0 % 2 == 0) ? (((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 0LL)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) : (33156049U)))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((_Bool) (short)501))))))) : (((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 0LL)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) : (33156049U)))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((_Bool) (short)501)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) == (max((4261811242U), (((/* implicit */unsigned int) (short)511)))))))) < (min((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4261811253U))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (33156056U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22276))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                arr_20 [i_4] = ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_4])) == (((/* implicit */int) var_10))))) : (((/* implicit */int) var_12)));
                var_20 &= ((/* implicit */long long int) ((_Bool) (_Bool)1));
            }
        } 
    } 
    var_21 = var_8;
    var_22 = ((/* implicit */signed char) ((unsigned char) min((((390142227958434460LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)106))))), (((/* implicit */long long int) var_13)))));
}
