/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189658
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
    var_20 &= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_21 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (max((((unsigned int) (unsigned short)3)), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3)))))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_0))));
                var_24 = var_0;
                var_25 *= ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((33554431) == (-33554445)))))) : (((/* implicit */int) (unsigned char)18))));
            }
        } 
    } 
    var_26 = var_8;
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_10 [i_2] [i_2] [i_2] = (((+(((/* implicit */int) var_12)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((var_2) | (((/* implicit */int) (!(var_16)))))))));
            arr_11 [6] = ((/* implicit */unsigned int) var_9);
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4 - 1] [i_6] [i_6] = ((/* implicit */_Bool) var_4);
                            arr_21 [i_6] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_4)))));
                        }
                    } 
                } 
            } 
            arr_22 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_2))))))));
            var_29 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 33554430)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (137438953471ULL))))), (((/* implicit */unsigned long long int) ((var_19) * (((/* implicit */long long int) ((33554442) / (var_2)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 4; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_31 [i_2] [i_7] [i_8] [i_9 - 1] [i_10 + 2] = ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), (((((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (var_14)))) * (-33554441)))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_16))));
                        }
                    } 
                } 
            } 
        }
        arr_32 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (18446743936270598119ULL)));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) 33554420))));
        arr_33 [i_2] = ((/* implicit */unsigned long long int) var_9);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = ((((/* implicit */int) (!(var_11)))) == (((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (_Bool)0)))));
        arr_38 [7LL] [7LL] = ((/* implicit */unsigned int) var_11);
    }
}
