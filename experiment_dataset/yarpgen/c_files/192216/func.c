/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192216
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
    var_19 = ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) 5775321119192904041LL)), (var_4))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_8))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((short) 24ULL)))))) : (((long long int) ((long long int) var_16)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned int) (short)20802))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(min((((/* implicit */long long int) (short)18842)), (var_13)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_21 -= ((/* implicit */short) min((((((/* implicit */_Bool) (short)20802)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [10ULL])))), (((/* implicit */int) min((arr_2 [(unsigned short)2]), (arr_2 [(unsigned short)6]))))));
            arr_8 [i_0] [1] [i_0] = ((/* implicit */long long int) min((min(((-(arr_0 [i_0] [i_0]))), (((/* implicit */int) (short)20802)))), (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [(_Bool)1])))));
        }
        for (short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            var_22 *= ((/* implicit */short) arr_5 [i_2 - 2] [(_Bool)1] [i_2 - 1]);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (var_4)));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) -1270072321)), ((-(var_16)))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2 - 3] [i_2 - 3]))))) ? (max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (unsigned short)19428)))))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)-1610))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_25 = ((unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_17))))), (var_18)));
                            arr_23 [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3] = ((/* implicit */_Bool) ((unsigned long long int) (-(((unsigned long long int) var_6)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) max((arr_9 [i_0] [i_2] [i_3]), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_20 [i_0]))))))));
                            arr_27 [i_0] = ((/* implicit */_Bool) max(((+(arr_11 [i_2 - 2] [i_2 + 1]))), (var_5)));
                            arr_28 [i_0] [i_2 - 1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            var_27 = ((/* implicit */long long int) (-(min((min((var_16), (((/* implicit */unsigned int) (short)30606)))), (((/* implicit */unsigned int) ((unsigned short) arr_15 [i_2] [i_0] [i_2])))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            arr_31 [i_0] [i_2] [i_0] [9LL] = ((/* implicit */unsigned int) var_5);
                            arr_32 [i_0] [i_2] [(signed char)16] [i_4] [i_0] = ((/* implicit */short) (unsigned short)59390);
                        }
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (short)1610)))))) ? (((unsigned long long int) (~(((/* implicit */int) (unsigned char)51))))) : (((/* implicit */unsigned long long int) arr_11 [i_4] [i_3]))));
                            arr_37 [i_0] [i_2] [i_2] [i_2] [i_0] [i_8] = var_12;
                        }
                    }
                } 
            } 
            arr_38 [i_0] [i_2] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [i_0])))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            arr_41 [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_20 [i_0]));
            var_28 &= ((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [0ULL]);
            var_29 = arr_1 [i_9 - 1] [i_9 + 1];
        }
    }
    var_30 = ((/* implicit */long long int) var_16);
    var_31 = ((/* implicit */long long int) var_0);
}
