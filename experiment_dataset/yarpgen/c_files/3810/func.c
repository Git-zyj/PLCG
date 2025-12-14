/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3810
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
    var_11 = ((/* implicit */short) ((((unsigned int) (!(var_9)))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((((/* implicit */int) (short)-14783)) % (((/* implicit */int) (short)-32)))))))));
    var_12 -= ((/* implicit */short) (-((~(((/* implicit */int) var_8))))));
    var_13 |= ((/* implicit */unsigned char) var_2);
    var_14 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)46930))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2541))) | (arr_2 [i_0]))))), (((unsigned long long int) var_2))));
        var_16 = ((/* implicit */long long int) max((11262751119249313212ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21)) ? (((/* implicit */int) (short)43)) : (((/* implicit */int) (short)(-32767 - 1))))))));
        var_17 = ((unsigned long long int) (short)32756);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_18 += ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-50)) * (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */int) (short)32767)) : (var_0)))) : (((var_2) * (((/* implicit */unsigned long long int) -506063051)))))) * (min((((/* implicit */unsigned long long int) ((short) var_9))), ((+(var_3))))));
        var_19 |= ((/* implicit */int) (+(((((/* implicit */_Bool) (+(var_0)))) ? (arr_2 [(unsigned char)14]) : (((/* implicit */unsigned long long int) -2021953013347242327LL))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (short)28);
        arr_7 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) 947232152560783754ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_2 [(unsigned short)12])))))) ? (((/* implicit */unsigned long long int) ((int) arr_2 [(short)6]))) : (((arr_2 [8U]) | (arr_2 [(short)6])))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] = (short)3584;
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)-13245)) ? (5443715678541278431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32))))))));
        var_21 -= ((/* implicit */unsigned char) -1);
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_22 &= ((/* implicit */_Bool) arr_18 [i_3] [i_4]);
                    var_23 = ((/* implicit */long long int) (short)3584);
                    var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9727800944084943801ULL)) ? (((/* implicit */int) (short)13256)) : (((/* implicit */int) (_Bool)0))))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_25 -= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_6] [i_7])))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_7]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3])))))));
                }
            } 
        } 
    }
}
