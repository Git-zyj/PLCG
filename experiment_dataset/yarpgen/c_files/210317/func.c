/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210317
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 += ((/* implicit */int) ((((/* implicit */int) (short)-6516)) > (((/* implicit */int) (short)23539))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_14 |= ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_1 + 1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 4] [i_1 - 1] [i_1 + 3] [i_1 + 3])) > (((/* implicit */int) var_8))))) : ((~(arr_4 [i_0] [i_0]))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) var_4);
                    }
                } 
            } 
            var_15 = ((/* implicit */_Bool) arr_0 [i_0] [i_1 + 4]);
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (+(arr_6 [i_1 + 1] [i_1] [i_1] [i_0]))))) > (((int) max((arr_7 [i_0] [i_1 + 3] [i_0] [i_0]), (((/* implicit */unsigned short) var_8))))))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned int) ((((/* implicit */int) min(((unsigned short)29511), (((/* implicit */unsigned short) (_Bool)0))))) > ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]))))))))));
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) -1);
            var_19 ^= ((/* implicit */int) min(((short)6528), (((/* implicit */short) (signed char)38))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            var_20 = arr_15 [i_5] [i_5] [i_0];
            var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((-(arr_1 [i_0]))) > (arr_11 [i_0] [i_0] [i_0])))), (((((arr_12 [i_0] [i_5]) > (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (arr_11 [i_0] [i_5] [i_5]))))) : (var_5)))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) > (((unsigned int) (_Bool)1))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_4 [i_0] [i_6]))));
        }
        var_24 |= ((/* implicit */short) var_2);
        var_25 = min(((+(((/* implicit */int) ((_Bool) arr_1 [(signed char)2]))))), (((/* implicit */int) ((arr_0 [i_0] [i_0]) > ((+(((/* implicit */int) (short)23539))))))));
    }
    var_26 = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
    var_27 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) ((_Bool) (-2147483647 - 1)));
                    arr_28 [i_7] [i_7] [i_9] |= ((/* implicit */unsigned short) min((min((var_0), (var_7))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_2 [i_9] [i_9] [i_7]))))))));
                    arr_29 [i_7] [i_9] [i_7] [i_7] |= (+(((/* implicit */int) ((((/* implicit */int) (short)-9272)) > (((/* implicit */int) (signed char)127))))));
                }
            } 
        } 
    } 
}
