/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234604
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 |= ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max(((-9223372036854775807LL - 1LL)), (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) 2147483644)) : (((((/* implicit */_Bool) (short)4)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (unsigned short)6157);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (var_8))))))));
                    var_20 = ((/* implicit */short) var_15);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_8))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) var_1)) : ((-2147483647 - 1)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) (~((~(arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_24 -= ((/* implicit */unsigned long long int) ((2147483642) > (2147483637)));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_25 = -2147483645;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) arr_11 [i_4 + 1] [i_0]);
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_3] [i_5])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_5] [i_4 + 1] [i_3] [i_0]))) : ((-(-2147483627)))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((max((var_9), (-2147483634))) ^ (((/* implicit */int) var_12))))) ^ ((((+(var_11))) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            arr_21 [i_0] [i_0] [i_0] = arr_16 [i_0] [(unsigned short)3] [i_0] [i_6 + 1];
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                for (signed char i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (max((((/* implicit */int) (signed char)-66)), (2147483618))) : (((/* implicit */int) (unsigned short)44541))));
                        var_30 *= ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
            arr_27 [i_0] [i_6] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) 1214664509)), (var_8)));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44548)) ? ((+(((/* implicit */int) ((signed char) arr_9 [i_6 + 1] [i_0] [i_0] [i_0]))))) : ((+(max((-2147483641), (2147483645)))))));
        }
    }
    var_33 = ((/* implicit */unsigned char) var_12);
    var_34 = ((/* implicit */unsigned short) var_5);
}
