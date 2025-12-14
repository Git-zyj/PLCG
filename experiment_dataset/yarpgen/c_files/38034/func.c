/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38034
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
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3542894136U), (3542894139U)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))) : (((/* implicit */int) arr_1 [i_0 - 2] [i_1])))) : (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_11 = arr_9 [i_2 + 2];
                            arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_3] [i_3] = (~((~(arr_6 [i_0 - 3]))));
                            var_12 = ((((/* implicit */int) (((+(3542894117U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2])) >> (((((/* implicit */int) var_2)) - (55598))))))))) <= (((((/* implicit */_Bool) 3542894136U)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_15 [i_0] [i_5] [i_4 - 1] [i_4 - 1] [i_0]);
                            var_14 = (!(((/* implicit */_Bool) (+(3542894159U)))));
                            arr_17 [i_5] = arr_10 [8] [8];
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned short) var_10))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 6; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) 562949953421311LL);
                                arr_24 [i_0] [i_0] [i_6 + 3] [i_6 + 3] [i_7] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)21295)), (3542894115U))))));
                                arr_25 [i_8] [i_7] [i_6 + 3] [i_1] [i_0] = min(((-(((/* implicit */int) arr_8 [i_6 + 1] [(_Bool)1] [i_8] [i_8] [i_8])))), (var_3));
                                var_17 = ((/* implicit */_Bool) arr_1 [3] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) var_0);
}
