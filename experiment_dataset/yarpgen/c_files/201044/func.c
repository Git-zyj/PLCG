/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201044
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
    var_15 = ((/* implicit */unsigned short) (+(((unsigned int) ((_Bool) var_7)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */signed char) ((_Bool) var_14));
                    var_17 += ((/* implicit */signed char) var_8);
                    var_18 += ((/* implicit */_Bool) ((long long int) arr_0 [i_0]));
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_11)))));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned short) var_5)));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)111)) : (-1571024529)))) : (-8170482835320262866LL)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) ((short) var_7))) : (((int) arr_7 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))));
                        arr_18 [i_3] [(unsigned short)12] [i_5] [i_5] [i_7] [i_7] [i_3] = ((/* implicit */short) (-((-(((/* implicit */int) var_14))))));
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_21 [(unsigned char)8] [i_4] [i_5] [(unsigned short)2] [i_8] &= ((int) (unsigned short)34628);
                        arr_22 [i_3] [(_Bool)1] [i_5] [i_3] [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5] [(signed char)17] [i_5 + 2] [i_5 - 2]);
                    }
                    var_23 = ((/* implicit */short) (-(((unsigned int) var_4))));
                    var_24 = ((/* implicit */_Bool) arr_15 [i_3]);
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) var_12)) ? (-1571024529) : (((/* implicit */int) (signed char)-107))))));
                }
                arr_23 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), ((~(arr_0 [i_5 + 3])))));
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned short) var_2)), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_11))));
        }
        var_27 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((_Bool) var_11)))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned int) (+(1571024528)));
        var_28 = ((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9]);
        var_29 *= ((/* implicit */unsigned short) var_8);
        /* LoopSeq 1 */
        for (short i_10 = 3; i_10 < 17; i_10 += 1) 
        {
            var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) (-(arr_27 [i_10 + 2] [i_9]))))), (((unsigned short) max((var_13), (((/* implicit */short) var_9)))))));
            var_31 = ((short) (+((-(((/* implicit */int) var_9))))));
        }
    }
}
