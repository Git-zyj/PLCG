/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236722
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
    var_17 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_12)))) + (2147483647))) << (((((/* implicit */int) var_9)) - (1)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max(((-(arr_7 [i_2] [i_1 - 1] [i_2 - 2] [i_3 + 2]))), (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_16)) | (((/* implicit */int) arr_9 [i_4] [i_2])))))))));
                                arr_16 [i_0 - 1] [i_2] [i_2] [i_2] [i_3 + 1] [i_3] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) >= (arr_6 [i_2 - 1] [i_0] [i_0])))), (min((((arr_5 [i_4]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) var_3)))))));
                                arr_17 [i_1 + 3] [i_1 + 3] [11U] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_4 [i_1]))) >> (((var_14) >> (((((/* implicit */int) arr_9 [i_2] [i_1])) - (17231))))))) > (((((/* implicit */_Bool) min(((unsigned short)61528), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1389554028U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned int) arr_11 [(_Bool)1] [i_1] [i_2] [7U])), (var_14)))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(arr_1 [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) == (var_14));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21641))) != ((~(arr_22 [i_5]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_5] [i_5])), (arr_22 [i_5]))))));
        arr_23 [(_Bool)1] [(_Bool)1] = arr_21 [i_5];
    }
    var_21 &= ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) < (var_14));
}
