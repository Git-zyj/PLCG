/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2597
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
    var_15 ^= ((/* implicit */int) (-((~(((((/* implicit */_Bool) -8901835505599704887LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))) % (var_0))))));
                arr_5 [i_0] = (!(((/* implicit */_Bool) (unsigned char)203)));
                var_17 = var_12;
                arr_6 [i_0 - 2] [i_0] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 218056805U)) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_3 = 4; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_18 += ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_2 - 1]))), (((/* implicit */unsigned long long int) min((5924880270769058732LL), (((/* implicit */long long int) 4294967292U)))))));
            var_19 -= var_14;
            arr_13 [i_2] = ((_Bool) ((arr_7 [i_2] [i_2 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 1])))));
            var_20 = ((/* implicit */_Bool) var_13);
        }
        for (int i_4 = 4; i_4 < 15; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned short)41335))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)0))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) % (max((arr_10 [i_4 - 1]), (((/* implicit */long long int) (unsigned short)65528))))));
        }
        for (int i_5 = 4; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((/* implicit */unsigned long long int) 4294967294U)), (13605937208674702513ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4176797721249687355LL)) ? ((((_Bool)1) ? (1U) : (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_14 [i_2])))))))));
            var_25 = ((/* implicit */unsigned char) (!((_Bool)1)));
        }
        for (int i_6 = 3; i_6 < 14; i_6 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_26 += ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_25 [i_2 + 2] [i_2 + 3] [i_6 + 2] [i_6]))));
            }
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_2 [i_6 + 1] [i_2 - 1]))));
        }
        var_29 *= ((/* implicit */unsigned long long int) var_10);
        var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1331330880U), (((/* implicit */unsigned int) arr_24 [i_2 - 1]))))) ? ((+(min((((/* implicit */int) var_2)), (arr_15 [i_2] [i_2]))))) : ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_26 [i_8 - 1])))) / (((/* implicit */int) (unsigned char)2))));
        var_32 -= ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_8 + 4]), (((/* implicit */short) arr_23 [i_8] [i_8] [i_8 - 1]))))) - (((/* implicit */int) min((arr_3 [i_8 + 1]), (arr_3 [i_8 - 1]))))));
    }
    var_33 -= ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)47))))), (max((((/* implicit */long long int) var_8)), (4242759045377614977LL)))))));
}
