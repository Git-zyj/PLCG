/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221047
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned char) arr_4 [i_0]))) | (((((/* implicit */int) (unsigned char)114)) & (((/* implicit */int) arr_2 [i_1] [i_0] [i_3])))))), ((~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_1))))))));
                        arr_10 [i_0] [i_0] = (i_0 % 2 == 0) ? (((unsigned char) ((unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_3])) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) - (200))))))) : (((unsigned char) ((unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_3])) >> (((((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) - (200))) + (163)))))));
                        arr_11 [(unsigned char)0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) & (((/* implicit */int) (unsigned char)30))))) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0])))) : ((~(((/* implicit */int) var_1)))))) != (((/* implicit */int) (unsigned char)136))));
        arr_13 [i_0] [i_0] = ((unsigned char) (unsigned char)174);
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        arr_16 [(unsigned char)4] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)138))) ? (((/* implicit */int) arr_14 [(unsigned char)6])) : (((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
            {
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    {
                        arr_25 [i_4] [i_4] = ((unsigned char) arr_8 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [(unsigned char)10]);
                        arr_26 [i_5] [i_5] [i_5] [i_4] = ((unsigned char) arr_7 [i_4] [i_6] [i_6 - 1] [i_4]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned char i_10 = 4; i_10 < 10; i_10 += 3) 
                {
                    {
                        arr_33 [i_4] [i_9] [i_8 - 3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_17 [i_4 - 3] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_9])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_1 [i_4]))))));
                        arr_34 [(unsigned char)4] [i_8] [i_9] [i_10] [i_4] [i_4 + 1] = arr_17 [i_4] [i_4] [i_4];
                        arr_35 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_4]))));
                        arr_36 [(unsigned char)7] [i_8 - 1] [i_9] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4])) && (((/* implicit */_Bool) arr_15 [i_10 - 2] [i_8 - 2]))));
                    }
                } 
            } 
        } 
    }
    var_14 = (unsigned char)230;
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_3))) <= (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)116)))))) ? (((/* implicit */int) ((unsigned char) max((var_4), ((unsigned char)157))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_7))))));
}
