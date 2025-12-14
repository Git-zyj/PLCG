/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208416
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
    var_15 = ((/* implicit */signed char) ((_Bool) (((+(((/* implicit */int) var_5)))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) - (71LL))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 4; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned long long int) arr_3 [i_3]);
                        arr_9 [i_0] [i_3 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    }
                } 
            } 
            arr_10 [i_0] [i_0] [i_1 + 2] = var_1;
            arr_11 [i_0] [i_0] = ((/* implicit */short) var_14);
        }
        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_1)))) : (((int) arr_3 [i_4 - 1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_21 [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_11)))))) ? (((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))) - (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) arr_3 [i_0])))))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */short) var_4);
                        }
                        var_18 = ((/* implicit */short) (-(((var_4) / (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_4)))))));
                        arr_23 [i_0] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_20 [i_0] [i_4 + 1] [i_5] [i_5] [i_6] [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_5))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_5] [i_0] [i_4 + 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_4 [i_6])) : (18010000462970880LL))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) || (((/* implicit */_Bool) (+(arr_7 [i_0]))))))) & (((int) ((var_9) << (((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */int) ((unsigned int) min((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_0)) + (40))))), (((((/* implicit */int) arr_6 [i_0] [i_0])) - (((/* implicit */int) var_5)))))));
                            var_21 &= ((/* implicit */signed char) (-(((var_12) / (arr_12 [i_0] [i_10] [i_11])))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */short) ((unsigned long long int) var_4));
        }
        arr_36 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (-(var_9)))))));
    }
    var_23 = ((/* implicit */short) var_9);
}
