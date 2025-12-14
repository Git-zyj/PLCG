/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223181
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
    for (int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_3 [i_0] [8U] = ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-47))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [(unsigned short)15] = ((/* implicit */long long int) arr_7 [i_1] [i_2]);
            arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) arr_7 [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))))));
        }
        for (short i_3 = 3; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (unsigned char)219)) - (219)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))) : (min((((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_7 [i_1] [i_1])) - (55462))))), (((/* implicit */int) (signed char)50))))));
            var_15 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [(unsigned short)8] [(unsigned char)12])) ? (((/* implicit */int) max(((unsigned short)61941), (arr_6 [i_1 - 1] [i_1 - 3])))) : (((((/* implicit */int) (signed char)89)) ^ (((/* implicit */int) var_7))))))));
            var_16 = ((/* implicit */short) arr_6 [i_1] [i_3 + 2]);
            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1])))) ? (min((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)58887)) : (((/* implicit */int) arr_7 [(unsigned char)11] [i_3 + 2])))), (((/* implicit */int) ((unsigned short) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_3] [i_3 - 3])) : (((/* implicit */int) arr_5 [i_1 - 1]))))))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 + 2]))))) << ((((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 1])))) + (26685)))));
        }
        for (short i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-30121))))));
            var_20 = ((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1]);
        }
    }
    /* LoopNest 3 */
    for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_26 [i_5 + 1] [i_5 + 1] [i_5 + 1] = ((/* implicit */int) arr_15 [i_5] [i_6 + 1] [i_7]);
                    arr_27 [i_5] [i_6 - 2] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5 + 2])) || (((/* implicit */_Bool) ((unsigned int) var_0))))))));
                }
            } 
        } 
    } 
}
