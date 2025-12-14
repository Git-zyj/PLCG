/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214453
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
    var_19 = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned long long int) -4566555542424673140LL)), (16792223740813974145ULL))), (((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28969))))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-28969)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3587))))))) + (((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (((unsigned long long int) arr_2 [(signed char)0])) : (((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1]) ? (2389554740U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((arr_2 [i_0]), (((/* implicit */long long int) ((short) (unsigned char)69)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2 + 3] [i_3] = ((/* implicit */long long int) arr_0 [i_0]);
                        var_21 += ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-29)), ((unsigned char)134))))))) ? (((/* implicit */int) (!(arr_5 [i_0] [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_16 [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */unsigned char) 12078005919901333390ULL);
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 7; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_22 ^= ((((unsigned long long int) arr_22 [i_4 + 3] [i_0 - 1])) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-105))))));
                        var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)5)));
                        var_24 += ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) ((int) -3669577824683578223LL)))), (min((1073397919), (((/* implicit */int) (unsigned char)112))))));
                    }
                } 
            } 
        } 
    }
}
