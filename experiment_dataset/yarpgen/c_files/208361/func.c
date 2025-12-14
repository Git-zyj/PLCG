/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208361
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
    var_17 &= var_11;
    var_18 &= ((/* implicit */int) (((~(max((((/* implicit */unsigned long long int) (short)-175)), (var_4))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (((~(1403106240))) == ((-(((/* implicit */int) (short)-1))))));
        arr_4 [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_1 [i_0 - 1])))), ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_20 += ((/* implicit */_Bool) (((((~((~(((/* implicit */int) arr_1 [i_1])))))) + (2147483647))) << ((((((((~(((/* implicit */int) (unsigned short)47418)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)25803)))) + (25807))) - (3))))) - (2147436228)))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_22 = (~(4194303));
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_9)))) == ((-((+(((/* implicit */int) var_16))))))));
            arr_12 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)8191), (((/* implicit */unsigned short) max((arr_1 [(unsigned char)15]), (((/* implicit */short) var_9))))))))));
        }
        arr_13 [(_Bool)1] [(unsigned short)2] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (short)4485))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = (~((-(4062512438145669001LL))));
        arr_18 [i_3 - 1] [i_3 - 1] = ((/* implicit */short) (-(((/* implicit */int) ((max((5093905536769388725ULL), (((/* implicit */unsigned long long int) (signed char)87)))) > ((-(15703788150206315846ULL))))))));
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        arr_21 [i_4] [i_4] = max(((~(112766077U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_11))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) ((18446744073709551615ULL) >> (((((/* implicit */int) var_6)) - (105)))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) (-(6289771515553643649ULL)));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_4 - 1]))));
                            arr_33 [i_4 + 1] [i_4 + 1] [i_5] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (+(var_2)));
                            arr_34 [17] [17] [i_5] [i_5] [17] [i_5] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50187))));
                            var_25 = ((/* implicit */int) (+(arr_26 [i_5 + 4] [i_7 + 1] [i_8 + 1] [i_5])));
                        }
                    } 
                } 
            } 
            var_26 += (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)1))))));
        }
    }
    var_27 = ((/* implicit */_Bool) (-(min(((+(var_12))), ((-(((/* implicit */int) var_11))))))));
}
