/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201647
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
    var_17 = var_7;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52350))))) != (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)13186)) == (((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [(unsigned short)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13177))))) ? (((/* implicit */int) (unsigned short)21400)) : ((+(((/* implicit */int) (unsigned short)65535))))));
                                var_19 += ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) arr_4 [i_1] [i_4])))), ((~(((/* implicit */int) (unsigned short)0))))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)52350))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)52365)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) >= (((/* implicit */int) var_13))));
                    var_21 = var_13;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)65303))))));
                                arr_20 [i_0] [i_0] [i_1 - 3] [i_2] [i_5] [i_6] = (unsigned short)36302;
                                arr_21 [i_1] [i_1] &= min(((unsigned short)31261), (max((max(((unsigned short)65535), ((unsigned short)31261))), (min((arr_8 [i_6] [(unsigned short)2] [i_2] [i_1] [(unsigned short)0] [i_0]), (var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
