/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204793
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) (-(2ULL))));
                var_11 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [(unsigned char)1] [(unsigned short)12] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
                            var_12 = ((/* implicit */unsigned int) arr_9 [i_3]);
                            var_13 = -1;
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)26166)), (arr_10 [i_0] [i_1] [(_Bool)1] [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (arr_0 [i_0]))))))))) : (arr_9 [i_0])));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((-12), (-18))) - (649887382)))) ? (16865160740446619707ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)173)), (0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_5 - 1]))) ? ((+(((/* implicit */int) arr_0 [i_5 + 1])))) : (((/* implicit */int) (!(arr_0 [i_5 - 1]))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_19 [i_5 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_5 - 1]), (arr_8 [i_5 + 1]))))) : (min((arr_9 [i_4]), (arr_19 [i_5 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_26 [(signed char)11] [(signed char)11] [(signed char)11] [13U] [i_7] [(_Bool)1] = ((/* implicit */int) (_Bool)1);
                                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                                arr_27 [i_4] [i_4] [i_4] [(short)3] [i_4] = ((/* implicit */unsigned short) min((10U), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) arr_19 [i_4]);
                    arr_28 [i_4] = ((/* implicit */unsigned char) 4256096209491388155LL);
                }
            } 
        } 
    } 
}
