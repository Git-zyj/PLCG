/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200830
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
    var_14 = var_10;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((max((arr_0 [i_0]), (((/* implicit */long long int) ((((-4) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32738)))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-12) : (((/* implicit */int) (unsigned short)38543)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_2 - 2])) || ((_Bool)1))) ? (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2] [i_2 - 2])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_6 [i_0] [i_2 - 1] [i_2 - 2] [i_2 + 1]))))));
                    var_16 = ((/* implicit */_Bool) 1486997531U);
                    var_17 = ((/* implicit */unsigned short) ((unsigned int) ((min((((/* implicit */unsigned int) (unsigned short)38549)), (922148153U))) == (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))));
                    var_18 = ((/* implicit */signed char) max(((~(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38543)) + (((/* implicit */int) (unsigned short)26989)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) var_6);
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((/* implicit */int) ((signed char) var_7))) : ((~(((/* implicit */int) arr_7 [i_3])))))) & (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) -2659812515996020826LL)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)27)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_12 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)8645)))))))) && ((!(((/* implicit */_Bool) arr_11 [i_0]))))));
            arr_13 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) & (((/* implicit */int) arr_7 [i_0])))))));
        }
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0]))))))));
    }
}
