/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238402
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_7);
                var_12 -= ((/* implicit */unsigned int) (+(max((min((((/* implicit */int) (signed char)-51)), (-1051952891))), (((/* implicit */int) (signed char)51))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [i_2] [i_2])) + (((/* implicit */int) var_0))))));
        var_13 = var_4;
        var_14 = ((/* implicit */_Bool) var_4);
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) == (arr_6 [i_2])));
        var_15 = ((/* implicit */unsigned int) ((short) arr_6 [i_2]));
    }
    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_16 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) == (-5004478628243473285LL))));
        var_17 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_3] [i_3 + 2]))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_9))) : (((unsigned long long int) -1599854289)))), (((/* implicit */unsigned long long int) 3842495853U))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) max((((((_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_3])))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (var_4) : (var_10))))), (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1])), ((((_Bool)0) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_11 [i_3])))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] [3] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (max((((/* implicit */int) ((signed char) var_1))), ((+(((/* implicit */int) (_Bool)0))))))));
                        var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(-2760886437460164308LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (5004478628243473285LL))), ((-(arr_17 [i_5 - 1] [i_5 - 1] [i_4 - 2])))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_20 [i_3] [i_4] [i_6] [i_7]))), (max((var_1), (arr_20 [i_3 - 1] [i_3] [i_3] [i_3])))))) ? ((-(max((var_5), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)50), ((signed char)67)))))));
                            arr_26 [i_3] [i_6] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_3] [i_4])))) ? (max((arr_18 [i_4] [i_6]), (min((1775246210758893806LL), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_0 [i_3 - 1] [6ULL])) < (var_4)))))));
                            arr_27 [i_3] [i_4] [i_5] [i_6] [i_6] [(short)12] [i_7] = ((unsigned int) (signed char)-68);
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_3] [i_5] [i_8]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 1599854289)) >= (3842495853U)));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(1535556654677913808LL))))));
                            var_23 = ((/* implicit */unsigned char) arr_21 [i_3] [i_3] [i_3] [i_3]);
                        }
                        arr_30 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 264241152)), (var_9)));
                    }
                } 
            } 
        } 
    }
}
