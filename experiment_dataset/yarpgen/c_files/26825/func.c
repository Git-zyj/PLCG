/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26825
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
    var_20 = 8751203631309957766ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) 9256605038547163026ULL)))));
                arr_6 [i_0] [i_0] [3U] = ((/* implicit */short) max((var_19), (((/* implicit */unsigned long long int) var_3))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 4]))) - ((~(9256605038547163038ULL)))))));
                    var_22 = ((/* implicit */short) (-((~(arr_4 [i_2] [i_2 - 1])))));
                }
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (min(((+(9256605038547163022ULL))), (((((/* implicit */_Bool) 9190139035162388595ULL)) ? (arr_9 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))))));
                    var_24 = (i_0 % 2 == zero) ? (((/* implicit */short) ((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((arr_0 [i_0]) - (1056775298U)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) == (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))))) : (((/* implicit */short) ((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((arr_0 [i_0]) - (1056775298U))) - (538221629U)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) == (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))))));
                    var_25 |= ((((/* implicit */_Bool) ((9190139035162388590ULL) << (((((/* implicit */int) (short)20397)) - (20347)))))) ? (min((min((((/* implicit */unsigned long long int) var_0)), (9190139035162388596ULL))), (((((/* implicit */_Bool) 9190139035162388593ULL)) ? (9190139035162388573ULL) : (7093496348798634844ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(unsigned char)0])) - (((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) (unsigned short)39631)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))))))));
                    var_26 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))), (((unsigned long long int) arr_3 [i_0])))));
                }
                var_27 -= ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_1]);
                arr_11 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_18)) * (var_16)))) ? (min((((/* implicit */unsigned long long int) var_4)), (9190139035162388590ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((8277611222547444626ULL) - (8277611222547444609ULL))))))))) ? (var_8) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
            }
        } 
    } 
    var_28 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))), (9256605038547163020ULL)))) ? (6391996400816912572ULL) : (var_16));
    var_29 = ((/* implicit */_Bool) var_0);
}
