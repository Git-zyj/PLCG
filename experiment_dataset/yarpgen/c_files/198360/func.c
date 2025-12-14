/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198360
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
    var_20 += ((/* implicit */short) (~((-(((((/* implicit */_Bool) 18404209617594702266ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [5U] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? ((+(arr_6 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (+((~(arr_5 [5U] [12U] [i_0]))))))));
                    var_22 += ((/* implicit */short) (-((+((-(((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (~((~((((_Bool)1) ? (((/* implicit */int) arr_11 [11ULL] [i_1] [i_1] [6])) : (((/* implicit */int) var_9))))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (short)-30967)) : (((/* implicit */int) arr_13 [i_0] [3U] [4ULL])))) : ((-(((/* implicit */int) arr_2 [i_1] [i_1])))))))))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) (-((~(arr_6 [i_1] [i_2] [i_1] [(short)0])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : ((~((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = (~(127530668458379665ULL));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)0))))))) : ((~(125829120U)))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_24 [i_0] |= ((/* implicit */_Bool) (-((+((+(((/* implicit */int) (short)29637))))))));
                        arr_25 [i_0] [i_6] [(unsigned short)1] [i_7 - 3] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)29059))))));
                    }
                } 
            } 
        }
    }
}
