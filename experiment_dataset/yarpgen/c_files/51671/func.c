/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51671
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-631241964) / (var_7)))) ? (min((2147483647), (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))))), (arr_0 [i_0]))))));
        var_19 = ((/* implicit */_Bool) ((((((min((((2147483647) << (((((-1927720332) + (1927720333))) - (1))))), ((~(2147483647))))) + (2147483647))) + (2147483647))) >> ((((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (2147483641) : ((-2147483647 - 1)))))) - (-2147483643)))));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (+(((arr_5 [i_1 - 2]) ? (((((/* implicit */_Bool) (unsigned short)46425)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_0 [i_1 + 1])))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((_Bool)1), (var_0)))), (min((((/* implicit */unsigned int) var_3)), (var_8)))))) ? ((-(((/* implicit */int) max((var_0), ((_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26952))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((2040599609) > (((/* implicit */int) min(((unsigned short)59040), (((/* implicit */unsigned short) arr_10 [i_1 + 1] [i_1 - 2])))))));
            var_22 = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
            var_23 = min((((/* implicit */unsigned int) (-(var_3)))), (((unsigned int) (_Bool)0)));
            arr_11 [i_1] = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned short)2802))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (3518528206U)))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                var_24 -= ((/* implicit */int) (signed char)-107);
                arr_16 [i_1] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_0))))))));
                var_25 = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (min(((signed char)-32), ((signed char)48)))));
            }
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((((((/* implicit */int) var_14)) - (428549883))) / (((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_3])), ((signed char)33))))))));
        }
    }
    var_26 = ((((/* implicit */int) var_13)) % (max((max((((/* implicit */int) (signed char)-31)), (-428549883))), (((/* implicit */int) min(((signed char)-68), ((signed char)-91)))))));
}
