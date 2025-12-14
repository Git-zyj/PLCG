/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192807
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
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 4; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned int) ((var_13) >= (((long long int) var_3))));
                        arr_13 [i_0] [i_0 + 2] [i_0 - 4] [i_0 - 2] = (unsigned char)0;
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */short) ((long long int) arr_10 [i_0 - 1] [i_4] [i_5 - 1] [i_6] [i_0 + 1]));
                        arr_22 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((int) (-(var_0))));
                        arr_23 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [2LL]);
                    }
                } 
            } 
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_3 [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 414611724277883510LL)))))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0 - 1] [i_4] [i_4]))) : (((/* implicit */int) var_4))));
            var_16 = max((((((/* implicit */unsigned long long int) 634401930)) / (17574556545057369641ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-41)), ((unsigned char)0)))));
        }
        /* vectorizable */
        for (signed char i_7 = 3; i_7 < 18; i_7 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((arr_8 [i_0 - 1] [i_7] [i_7] [i_0 - 1]) / (((/* implicit */unsigned long long int) (~(var_5))))));
            var_18 += ((/* implicit */_Bool) ((15804907181028894696ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))));
        }
    }
    for (long long int i_8 = 3; i_8 < 19; i_8 += 4) 
    {
        var_19 = ((/* implicit */int) var_4);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)-5259)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
        arr_30 [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 3575365858U)))))));
    }
    var_21 = ((/* implicit */short) ((min((min((var_0), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((865354566) + (((/* implicit */int) (_Bool)1))))))) >> (((var_1) + (34588385909729546LL)))));
}
