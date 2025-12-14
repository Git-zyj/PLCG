/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48709
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
    var_20 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) arr_3 [i_0 + 1]);
                        var_22 *= ((((((/* implicit */int) (unsigned short)65535)) + (723972203))) > (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (unsigned char)8))))));
                        arr_11 [i_3] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (2147483647)));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 = ((/* implicit */long long int) 2281583240212695199ULL);
            var_25 = ((/* implicit */signed char) min((16165160833496856395ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_7)))));
        }
        for (unsigned short i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            var_26 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
            var_27 = ((/* implicit */_Bool) var_7);
            var_28 -= ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) 268802123)) ? (arr_0 [8] [i_5 + 1]) : (((/* implicit */long long int) var_10)))))));
            var_29 = ((-268802113) * (((/* implicit */int) var_14)));
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 10; i_6 += 3) 
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_6 - 4] [i_6 - 2] [i_6 - 4]);
            arr_20 [i_0] [i_6] [3LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_6 - 4])) ? (17861472262651812671ULL) : (((/* implicit */unsigned long long int) -1025270540))));
            arr_21 [i_0] = ((((/* implicit */_Bool) -2162604200606913276LL)) ? (arr_3 [i_0 - 2]) : (((/* implicit */int) (short)-31306)));
        }
        arr_22 [(unsigned char)2] = ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [(signed char)5])) : (max((((/* implicit */int) ((unsigned char) var_2))), (arr_17 [(short)8] [i_0 - 2] [i_0 - 1]))));
        arr_23 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]);
    }
    var_30 = ((/* implicit */unsigned char) (+(268802108)));
}
