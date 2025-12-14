/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38303
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(arr_2 [i_0] [i_0]))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (short)-32745))))) ? (((/* implicit */long long int) arr_2 [(short)5] [i_0])) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)24015)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_1] = ((/* implicit */int) ((min((var_13), (min((var_3), (arr_6 [i_1] [i_1]))))) ? (min((6452194836205412350ULL), (((/* implicit */unsigned long long int) (-(var_9)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)14239)))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_1] [i_2])) ? (((/* implicit */int) (short)-24224)) : (((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((_Bool) var_5)) ? (var_2) : ((-(arr_7 [i_4 - 1])))));
                            arr_15 [i_1] [i_1] [i_3] [13LL] = ((/* implicit */_Bool) min((-228505002264786378LL), (min((5297239038818892134LL), (((/* implicit */long long int) (_Bool)1))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) var_4);
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max(((short)-22410), (((/* implicit */short) (signed char)56)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)22484)), ((-(min((((/* implicit */long long int) arr_11 [14] [i_5])), (var_9)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 3; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_23 [i_5] [(_Bool)0] [2] [(short)13]))));
                        arr_28 [i_5] [i_5] [i_5] [8ULL] [9] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_13 [(signed char)17] [i_6] [(signed char)4] [i_8 - 2])))) ? (((/* implicit */int) arr_11 [i_5] [i_6])) : (((/* implicit */int) (_Bool)1))));
                        arr_29 [i_8] [i_8] [(_Bool)1] [i_6] [i_5] [i_5] = ((/* implicit */long long int) arr_18 [i_5] [i_5] [i_5]);
                    }
                    for (signed char i_9 = 3; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2583611619283976130ULL))));
                        var_24 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9 + 1])))))));
                    }
                    arr_33 [i_5] [i_5] [i_5] [(_Bool)1] = (+(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-59))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    arr_34 [i_6] [i_6] = ((/* implicit */unsigned int) var_6);
                    arr_35 [i_5] [i_5] [i_5] [i_7 - 2] = arr_30 [i_7 - 2] [i_6] [i_6] [i_5];
                    var_25 = ((/* implicit */long long int) ((int) (+(arr_8 [i_5] [(_Bool)1] [i_7 - 1]))));
                }
            } 
        } 
        var_26 -= ((/* implicit */unsigned long long int) arr_26 [i_5] [(_Bool)1] [10ULL] [10ULL] [i_5]);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */unsigned long long int) var_9)) + (arr_13 [(short)14] [i_5] [i_5] [(_Bool)1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_5] [(_Bool)1] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    var_28 = ((/* implicit */int) var_10);
}
