/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34251
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) 12698815366836078144ULL);
                var_18 = ((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) 3306806413U);
                            var_19 += ((/* implicit */unsigned short) arr_0 [i_4]);
                            var_20 = ((/* implicit */_Bool) (+(arr_6 [i_2] [i_2])));
                            var_21 = ((/* implicit */long long int) var_3);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_16);
                            var_22 = ((short) (-(arr_6 [i_2] [(unsigned char)3])));
                            arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = var_6;
                        }
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((~((~(((/* implicit */int) var_14)))))) : (((int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_2]))));
                        var_24 = ((/* implicit */unsigned short) arr_5 [(signed char)11] [i_2] [8ULL]);
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_2] [i_0]);
                        var_26 *= ((/* implicit */_Bool) (~((~(3306806413U)))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_7 + 1] [i_7 + 1] [i_7 + 4] [i_7])) ? (min((((/* implicit */long long int) 3306806413U)), (-8824233794663796279LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 8789699754098213553LL)))))))));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-7852291039400470920LL), (var_5))))));
                        var_30 = ((/* implicit */short) ((signed char) (~(var_6))));
                    }
                    arr_27 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) 546766604U)))));
                    var_31 &= ((/* implicit */unsigned int) (-(var_9)));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 1] [2] [i_10]))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((long long int) 8789699754098213533LL)))));
                    var_34 = (-(((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_1])));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) var_13);
}
