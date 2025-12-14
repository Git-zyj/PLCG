/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35968
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(-5978142238996334566LL)))), (var_4)));
    var_17 |= 3200025667338219330ULL;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 2097151))))))));
                var_19 += ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) <= (((3200025667338219327ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ? (((11250865011588051322ULL) + (15246718406371332285ULL))) : (15246718406371332286ULL)));
                arr_4 [i_0] [i_0] = var_15;
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_20 ^= (+(max((((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)0] [(_Bool)0] [i_0])), (var_2))));
                    var_21 = ((/* implicit */unsigned char) ((signed char) ((_Bool) (signed char)77)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) var_9))))) | ((-(((/* implicit */int) arr_0 [i_0]))))));
                                arr_13 [i_4] [i_3] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((!(arr_7 [i_0] [i_0] [i_0] [i_0]))), (min((arr_6 [i_0] [i_3] [i_0]), (var_1)))))) | ((-(((/* implicit */int) arr_11 [i_3] [i_0] [i_3] [(unsigned char)2]))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_3))));
                                var_24 += ((/* implicit */_Bool) ((unsigned short) arr_2 [i_4]));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) var_3);
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48808))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_0])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_2 [i_0]))));
                        var_27 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_8] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-68);
                            var_28 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_5 [(_Bool)1] [i_5] [(_Bool)1])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((_Bool) var_0));
                            var_30 *= arr_10 [i_0] [i_0] [i_1] [i_1 - 1] [i_7];
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3))))) ? (((long long int) 3200025667338219304ULL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-81)))));
                            arr_32 [i_0] [i_0] [i_7] [i_0] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_32 += (~(arr_18 [i_1 - 1] [i_1 - 1] [6] [6U]));
                        }
                        var_33 = ((/* implicit */long long int) var_1);
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-6927324795720720795LL)))) + (max((max((15246718406371332285ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (-(arr_35 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_39 [(_Bool)1] [i_10 + 1] [i_11] [i_0] [i_11] [i_0] [i_0] |= ((/* implicit */unsigned short) arr_18 [i_11] [i_10] [i_5] [i_11]);
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_12))));
                            arr_40 [i_0] [i_10] [i_5] [i_1] [i_0] = ((/* implicit */_Bool) (~(((arr_14 [i_10 - 2] [i_10] [i_10 + 1] [i_10]) - (((/* implicit */int) arr_37 [i_11] [i_11] [i_11] [i_10] [i_10 - 1] [i_0]))))));
                            var_37 = ((/* implicit */unsigned int) arr_31 [i_0] [i_1] [i_0] [i_10] [i_11]);
                        }
                        arr_41 [i_0] [0LL] [i_5] [i_0] &= ((/* implicit */unsigned short) ((arr_24 [i_0] [i_1] [14ULL] [6LL] [i_1]) ? (max((-543215073), (((/* implicit */int) ((var_15) && (var_15)))))) : (((/* implicit */int) var_8))));
                    }
                    var_38 = ((/* implicit */long long int) (~(arr_31 [i_1] [i_5] [i_0] [i_1] [(unsigned char)0])));
                }
            }
        } 
    } 
}
