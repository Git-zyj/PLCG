/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45135
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
    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned short)3246)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-((+(arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) ((int) arr_4 [i_0] [i_1] [i_1]));
            var_11 = ((/* implicit */signed char) ((unsigned short) (~(((int) arr_4 [i_1] [i_0] [i_0])))));
        }
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_8 [i_3 + 1] [i_2] [i_2]))));
                        arr_14 [i_0] &= ((/* implicit */int) (_Bool)0);
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_4 [i_0] [i_2] [i_3 - 2]))));
                            var_14 &= ((/* implicit */int) arr_9 [i_0] [i_0]);
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_9)), (arr_13 [i_0] [i_0])))) <= (((/* implicit */int) arr_1 [i_0]))))));
                            var_15 = ((/* implicit */_Bool) var_2);
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_3 [i_2] [i_2 - 1]), (var_3))))));
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_3] [i_0] [i_7]);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (-470113406606336479LL)))) || (((arr_15 [i_0] [i_2 - 1] [i_3] [i_0] [i_2 - 1] [i_3] [i_7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_7])))))))) < (((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) var_5)))))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3 - 1])))), (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3 - 2]))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_0] [i_3 + 1] [i_8] [i_2 + 2])))), ((~(((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_3] [i_3 - 2] [i_8] [i_2 + 1]))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            arr_31 [i_2] [i_3] [i_4] &= ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) / (((int) -1058108832))));
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */short) arr_23 [i_0] [i_2 - 1] [i_0] [i_0] [i_2 + 2]);
            /* LoopNest 3 */
            for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_15 [i_2] [i_2 - 1] [i_9 - 1] [i_2 - 1] [i_9 - 1] [i_10] [i_10]);
                            var_22 = ((/* implicit */unsigned char) ((int) max(((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_0] [i_9] [i_0] [i_0])))))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2 + 2] [i_2]);
        }
        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_43 [i_0] [i_0] [i_12] = ((/* implicit */int) (((-(((/* implicit */int) var_8)))) <= (min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_13 [i_0] [i_12 - 1])))), (((/* implicit */int) ((unsigned short) 2115696068)))))));
            arr_44 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((_Bool) arr_33 [i_0] [i_12]));
        }
    }
    var_25 = ((/* implicit */int) ((((min((var_6), (((/* implicit */long long int) -2115696068)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (max((((/* implicit */long long int) ((var_0) < (((/* implicit */long long int) var_2))))), (max((var_6), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_26 = (+(-1836960961));
}
