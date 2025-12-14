/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201485
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
    var_12 = ((/* implicit */signed char) (~(max((((/* implicit */int) var_0)), (((int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_5);
                                arr_13 [i_3] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_3])))) << (((((((((/* implicit */int) var_6)) ^ (var_10))) + (2122852604))) - (8)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) (((-((~(var_10))))) ^ ((~(((/* implicit */int) ((0) == (620285704))))))));
                        var_15 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_8 [i_5 + 1] [i_2 + 1] [i_0] [i_0 + 3] [i_0]))))));
                    }
                    var_16 &= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_2))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) | (((/* implicit */int) (unsigned short)49488)))) ^ ((~(((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_23 [i_1] &= ((signed char) ((((/* implicit */int) arr_2 [i_0] [i_2] [(unsigned short)17])) / (var_4)));
                                arr_24 [i_6] [i_2] [i_1] |= ((/* implicit */int) ((unsigned short) var_5));
                                var_17 = 1492000066;
                                var_18 = ((/* implicit */signed char) ((((int) max((-1492000067), (((/* implicit */int) arr_8 [i_7] [i_6] [i_2] [i_1] [(signed char)5]))))) & (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
