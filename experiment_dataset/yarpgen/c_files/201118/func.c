/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201118
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
    var_17 -= ((/* implicit */int) max((max((var_2), ((-(11344730850268017876ULL))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_15)), (67092480U))), (((/* implicit */unsigned int) ((unsigned char) -370303601))))))));
    var_18 = ((/* implicit */unsigned long long int) (-(((370303601) << (((-1317857856) + (1317857856)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) -370303602);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)65535)), (3630037604U))))));
        var_21 -= ((/* implicit */unsigned short) arr_1 [i_0] [15LL]);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
            var_23 = ((/* implicit */unsigned short) ((signed char) ((var_4) ? (arr_7 [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2 + 1] [i_2 + 1]))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_24 ^= ((/* implicit */long long int) var_6);
            arr_11 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) -370303602);
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((-370303601), (-1317857856))))));
            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) arr_0 [(unsigned char)9]))))) ? (var_1) : (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_9 [i_3])))))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_7 [i_1] [i_3]), (((/* implicit */long long int) arr_3 [i_3] [i_1]))))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_28 = ((/* implicit */short) arr_2 [i_1]);
            var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1]))))));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_30 = ((/* implicit */long long int) (~(max((arr_17 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_6 [7ULL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))))))))));
            var_31 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_5]))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [1ULL]))) + ((-(arr_10 [i_1] [i_5] [i_1]))))), (((/* implicit */unsigned int) var_9)))))));
            arr_18 [4ULL] [i_1] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-11012)), (var_9)))) : (((/* implicit */int) var_5))))), (min((arr_6 [i_1] [i_5]), (3462921758676242137LL)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)253))))));
                    var_33 = ((/* implicit */int) var_3);
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned int) min((3021895684236648241ULL), (((/* implicit */unsigned long long int) 370303591))));
        arr_26 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((int) (unsigned short)21005)), (((/* implicit */int) ((unsigned char) 0ULL)))))) ? (((((/* implicit */_Bool) max((-239922496), (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) 2975414023U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1]))))) : (((/* implicit */unsigned int) -370303602))));
    }
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 370303599)) ? (1317857838) : (((/* implicit */int) (_Bool)0)))))));
}
