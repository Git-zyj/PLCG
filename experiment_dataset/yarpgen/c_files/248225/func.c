/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248225
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)255)))) / ((-2147483647 - 1)))))));
    var_20 = ((/* implicit */_Bool) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65521)) && (((-1702450256) > (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))))));
                    arr_7 [i_1] [i_1] [i_2] = min((arr_0 [i_0]), (arr_0 [i_2]));
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) (!(arr_1 [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        arr_14 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_3])))) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3 - 1] [i_3])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)62642))))))));
                        arr_15 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 2] [i_3 - 1])) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) var_7))))));
                        arr_16 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])))));
                    }
                }
            } 
        } 
    } 
}
