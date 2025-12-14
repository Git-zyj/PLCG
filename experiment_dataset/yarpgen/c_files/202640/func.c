/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202640
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
    var_14 = var_12;
    var_15 = ((/* implicit */unsigned long long int) max((3121631671834662253LL), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) | (4294967295U))))));
        var_17 = ((/* implicit */unsigned short) (~(var_7)));
        var_18 = var_4;
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) var_10))))))))));
            arr_8 [i_1] [i_1] [i_2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((var_3), (((/* implicit */unsigned int) var_12))))))) * (max((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)1823))))), (var_7))));
            arr_9 [18ULL] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(-1LL)))) < (min((var_11), (((/* implicit */unsigned long long int) var_1))))))), (min((var_1), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (4294967279U))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) max((3359759497U), (((/* implicit */unsigned int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30844)) ? (1994069676U) : (((228275324U) << (((-1LL) + (14LL))))))))));
                            var_22 -= ((/* implicit */_Bool) (-(max((4095LL), (((/* implicit */long long int) var_8))))));
                            arr_19 [i_1] [i_1] [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_0);
                        }
                        arr_20 [i_1] [i_1] [i_4] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1586974368U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_23 *= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))), (max((14LL), (4095LL)))))) && (((/* implicit */_Bool) var_7)));
                        var_24 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_25 [i_1] [i_3] [i_7] [i_3] [i_3] = 3061717767U;
                    }
                } 
            } 
            arr_26 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        }
        arr_27 [i_1] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)41927))), (((/* implicit */unsigned short) min((((_Bool) (unsigned short)65524)), ((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */unsigned short) (_Bool)1);
        arr_31 [i_9] [i_9] = ((/* implicit */_Bool) var_5);
    }
}
