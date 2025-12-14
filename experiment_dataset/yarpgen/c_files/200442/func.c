/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200442
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) var_6);
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5724679868523215416LL) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_17))))) != ((-(11168591490870878023ULL))))) ? ((-(5724679868523215416LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(var_6)))))) ? (7278152582838673592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_22 = arr_6 [i_1];
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (7278152582838673593ULL)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_24 = max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), ((-(arr_2 [i_1]))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [(signed char)13])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (unsigned short)28237))))))));
            arr_10 [i_1] [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) / (arr_8 [i_1] [i_3] [i_3]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) var_11);
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_1] [i_4]), (((/* implicit */unsigned int) arr_12 [i_1] [i_4]))))) ? (max((((/* implicit */int) var_9)), (var_2))) : (((/* implicit */int) max(((short)-4378), (((/* implicit */short) arr_6 [i_1]))))))))));
            arr_14 [6U] [i_4] = (~(((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | ((~(var_7))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((((/* implicit */int) (unsigned short)16753)) - (((/* implicit */int) arr_11 [i_1]))))))) ? (var_14) : (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)151), (((/* implicit */unsigned char) (signed char)108)))))) - (var_8))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_28 &= ((/* implicit */unsigned short) arr_9 [i_5]);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_15 [i_5])))) - (((/* implicit */int) arr_11 [i_6]))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6 + 2] [i_1])) ? (((/* implicit */long long int) arr_19 [i_6 - 3] [i_6 - 2] [i_6] [i_6])) : (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8LL] [i_1] [i_6 + 1]))) * (var_0)));
                arr_24 [i_1] [i_5] [i_6 - 1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_8 [i_1] [i_5] [(signed char)0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [(signed char)0] [i_5] [i_6 - 1])) : (((/* implicit */int) var_13))))) : (arr_8 [i_6 - 1] [8] [i_6 - 2]));
            }
            arr_25 [i_1] [i_1] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_15 [i_1]))))));
            arr_26 [i_1] [5ULL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_5] [i_1])))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((var_1) > (var_1))))));
        }
        arr_27 [1LL] |= ((/* implicit */short) arr_8 [i_1] [i_1] [i_1]);
    }
    var_30 -= ((/* implicit */signed char) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
}
