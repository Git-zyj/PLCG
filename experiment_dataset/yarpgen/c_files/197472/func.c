/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197472
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            arr_4 [i_0] [i_1 + 1] = arr_3 [i_0];
            var_14 ^= ((/* implicit */unsigned char) 812215646U);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] = ((unsigned int) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) ^ (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min(((unsigned char)134), (arr_5 [i_0] [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3] [13U] [i_4]))))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_4])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2147483648U)) ? (194575700U) : (3482751650U))) : ((+(3482751649U)))))) ? (((((/* implicit */_Bool) arr_11 [i_3] [(unsigned char)6] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3482751639U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) max((arr_1 [i_3]), (var_8)))) : (((((/* implicit */_Bool) 2262280336U)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_1))))))));
                        }
                        arr_15 [i_0] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0))))) ? ((-(min((((/* implicit */unsigned int) (unsigned char)222)), (arr_8 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2793258168U))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_19 [i_0] [i_0] = min((min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)178))))), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) != (((((/* implicit */_Bool) var_7)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_0])))))))));
            var_16 = ((/* implicit */unsigned char) arr_11 [i_0] [i_5] [i_5]);
        }
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_22 [i_0] [i_0] [i_6] = (-(((unsigned int) arr_16 [i_0] [i_6])));
            arr_23 [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) ((unsigned char) var_5))) ? (var_7) : (arr_8 [i_0]))));
            var_17 = ((/* implicit */unsigned char) 3271495491U);
        }
        arr_24 [i_0] = var_10;
    }
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned int i_9 = 4; i_9 < 22; i_9 += 3) 
            {
                for (unsigned char i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_13))));
                        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7 + 2] [i_9 - 2]))) : (arr_25 [i_7 + 2]))), (255U)));
                        arr_36 [i_10] [i_8] [i_9 + 3] = 4135032399U;
                        var_20 *= max((((/* implicit */unsigned int) ((unsigned char) arr_30 [i_7 + 3]))), (1501709122U));
                    }
                } 
            } 
        } 
        arr_37 [i_7] [i_7 + 2] = ((/* implicit */unsigned char) arr_35 [i_7] [i_7] [8U] [i_7 + 3] [i_7 + 3] [i_7 + 3]);
        var_21 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))));
    }
    var_22 = var_10;
}
