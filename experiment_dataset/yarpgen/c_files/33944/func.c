/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33944
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((arr_4 [i_1]) + (790422787)))))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_4 [i_0]))))) : ((((-(((/* implicit */int) var_7)))) % (arr_4 [i_1 + 1]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [3]), (arr_1 [(short)10]))))) + (min((((/* implicit */long long int) var_10)), (var_0)))))) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_0] [i_0]))))))));
                    var_13 &= ((/* implicit */unsigned int) arr_3 [i_2 + 1] [i_1] [i_2]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % ((-(3284780937313003232LL)))))));
                    var_15 &= ((/* implicit */signed char) min((min(((unsigned short)9952), (((/* implicit */unsigned short) (signed char)25)))), (((/* implicit */unsigned short) arr_13 [i_4 + 1] [i_4] [i_4 + 2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_6 = 2; i_6 < 16; i_6 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_18 [i_6 - 1])) >> (((/* implicit */int) arr_21 [i_6 - 2] [i_6 + 2]))))));
        arr_22 [i_6 - 1] &= ((/* implicit */int) arr_18 [i_6 - 1]);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_4))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (signed char)62))));
}
