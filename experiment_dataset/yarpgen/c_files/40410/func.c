/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40410
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */int) ((((/* implicit */int) (short)20389)) > (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (var_4)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+((-2147483647 - 1)))))));
                    arr_9 [(short)4] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)20389))))) && (((/* implicit */_Bool) max((arr_1 [i_1 - 2] [i_1 - 1]), (arr_1 [i_1 - 2] [i_1 + 1]))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) -1828784424933398559LL)) ? (((/* implicit */int) (short)20389)) : (((/* implicit */int) (unsigned char)241)))));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_0 [i_0])), (1967837688U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3494758348U))))))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -823039649)) ? (1803604125) : (((/* implicit */int) (unsigned char)255))))))) || (((/* implicit */_Bool) 2327129606U)))))));
                        arr_14 [i_0] [i_0] [i_1] [i_4 - 1] = ((/* implicit */unsigned long long int) 132120576U);
                        var_23 = ((/* implicit */short) max((var_13), (var_13)));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) - (((/* implicit */int) (signed char)14))))) ? (((((/* implicit */_Bool) (short)-20387)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [15LL] [15LL] [i_2]))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)0] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) == (((/* implicit */int) arr_11 [i_0])))))) == (arr_7 [i_0] [i_1] [i_2 - 1] [(short)8])))) : (((((/* implicit */_Bool) min((2749775195U), (((/* implicit */unsigned int) arr_11 [7]))))) ? (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_11 [i_4])))))))))));
                        var_25 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 3])))))) | ((~(-1828784424933398545LL)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5] &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20387)))))) == (2679369082U))) && (((/* implicit */_Bool) arr_3 [i_5] [(unsigned char)7] [i_5]))));
        var_26 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_16 [i_5] [i_5]))))));
        var_27 -= (-(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) : (var_3))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49554)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)20386))))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20377))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 15U)) || (((/* implicit */_Bool) arr_0 [i_5]))))) : (((/* implicit */int) (unsigned char)39))))) >= ((~(var_4)))));
    }
}
