/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229766
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
    var_20 ^= ((/* implicit */unsigned short) var_2);
    var_21 = var_17;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_22 = ((/* implicit */_Bool) 63U);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) var_17);
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((21ULL) != (((/* implicit */unsigned long long int) var_11))))))) ^ (((/* implicit */int) var_1))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) (~(((/* implicit */int) var_8))))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) ((((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4]))))) << (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_19))))))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    arr_19 [7U] [7U] [7U] [i_5] [i_4] = ((/* implicit */unsigned short) ((signed char) ((_Bool) var_11)));
                    var_27 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 4062279893U)))))));
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(-32736286)))))) * (min((var_16), (((/* implicit */long long int) var_2))))));
                }
                var_29 = var_19;
                var_30 |= ((/* implicit */unsigned int) ((((arr_11 [8ULL]) << (((/* implicit */int) var_3)))) | ((-(arr_11 [4LL])))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (short i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_4] [i_7] [i_9 - 1] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_4])) - (((/* implicit */int) arr_12 [i_4]))))) * (var_17)));
                            arr_28 [8U] [i_0] [i_4] [(short)2] [8U] [i_4] [i_0] = ((/* implicit */unsigned int) arr_12 [i_4]);
                        }
                    } 
                } 
                var_31 = (-(((/* implicit */int) arr_16 [i_4] [i_4])));
            }
            var_32 = ((/* implicit */unsigned int) arr_6 [i_0] [12]);
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_6 [i_0] [i_4]))));
            var_34 = ((/* implicit */unsigned long long int) ((((var_16) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)3] [i_4] [i_4])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_0] [i_4] [i_4])), ((unsigned short)56839))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_35 = ((/* implicit */long long int) ((_Bool) var_18));
                        arr_38 [i_0] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) var_4);
                        arr_39 [i_0] [i_10] [i_11 - 1] [i_12 + 2] = ((/* implicit */short) ((var_3) ? (((/* implicit */int) arr_21 [i_0] [i_10] [i_11])) : (((/* implicit */int) arr_12 [i_10]))));
                    }
                } 
            } 
            var_36 += ((short) arr_11 [(_Bool)1]);
        }
        var_37 = ((/* implicit */long long int) var_3);
    }
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 1) 
    {
        arr_42 [i_13] [i_13] = ((/* implicit */_Bool) var_4);
        var_38 = ((/* implicit */_Bool) max((var_38), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1300791671039664542LL) - (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13] [i_13]))) * (53224031U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
        arr_43 [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_40 [i_13] [(signed char)2])) : (((/* implicit */int) arr_40 [i_13] [i_13])))) | (((/* implicit */int) arr_40 [i_13] [i_13]))));
        var_39 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_41 [i_13] [i_13])))));
        arr_44 [i_13] [i_13] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))));
    }
    for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_48 [i_14 + 1])))))));
            var_41 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((unsigned long long int) var_15))) && (((/* implicit */_Bool) arr_49 [i_14]))))));
            arr_50 [i_14] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
        }
        arr_51 [i_14] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_19)))));
    }
}
