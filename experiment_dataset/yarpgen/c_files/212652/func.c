/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212652
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
    var_20 &= ((/* implicit */signed char) var_8);
    var_21 *= ((/* implicit */signed char) (+(4294967295U)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_22 = ((((_Bool) 2U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : ((~(((4294967284U) ^ (17U))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_23 ^= ((/* implicit */long long int) min((9501355690505942189ULL), (((/* implicit */unsigned long long int) 5384222127988694613LL))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_9))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((long long int) var_5))))) ? (((/* implicit */int) ((arr_1 [i_1 - 1]) <= (arr_1 [i_1 + 3])))) : (((((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 2] [i_4 + 2])) - (arr_5 [i_1 + 3] [i_3] [i_4])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) ((max((((/* implicit */long long int) arr_11 [i_0] [i_1 + 2] [(_Bool)1] [i_6])), (var_18))) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        arr_20 [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_1 [i_5]);
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) -212361276292256239LL)), (4053924437961583170ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_1] [i_0] [i_6]) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_5] [i_6])) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [20U])))))))))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1LL)))))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_23 [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(arr_7 [i_0] [(signed char)18] [(signed char)18] [i_0])))))) + (((long long int) min((var_6), (((/* implicit */long long int) arr_11 [i_0] [i_7] [i_0] [i_7])))))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */int) var_19)) == (var_15)))));
            arr_24 [i_0] [i_7] = ((/* implicit */int) 2U);
        }
        var_30 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_14)) ? (arr_2 [22LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2387248108U))))))))));
    }
    for (short i_8 = 4; i_8 < 7; i_8 += 3) 
    {
        arr_27 [i_8 - 3] = ((/* implicit */unsigned long long int) arr_8 [i_8] [i_8] [i_8] [i_8]);
        var_31 |= ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) - (14680064)));
    }
    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((7368872526782506356LL) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
}
