/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240071
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0 + 3] [i_0 + 3] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) -1260568257)) : (-4274603809192430970LL)))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)32758)) != (((/* implicit */int) (unsigned char)135))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) var_12)) && (arr_0 [i_0 + 2]));
                    }
                } 
            } 
            arr_13 [i_0 + 3] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((var_7) && (((/* implicit */_Bool) (short)-32765)))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_17 = arr_2 [i_5];
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) -138102343)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)56)))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((-(-3468635840806553480LL))) > (((/* implicit */long long int) arr_16 [i_0 - 2] [i_6] [i_0 - 2] [i_0 - 2] [i_6])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0] [i_0 + 2])) && (((((/* implicit */int) (unsigned char)144)) <= (((/* implicit */int) var_14))))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_0 - 1] [i_1] [i_0 + 2] [i_6] [i_6]))));
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) (~(arr_4 [i_0 + 1] [i_0 + 3])));
                            var_23 = (!(((/* implicit */_Bool) (short)32756)));
                            var_24 -= ((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_1]);
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_25 = (!(((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */int) arr_0 [i_5]);
                            var_27 -= ((long long int) 983551388);
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) var_14);
        }
        var_29 = ((((/* implicit */_Bool) -562606499)) ? (860852873) : (((/* implicit */int) (signed char)121)));
        arr_26 [i_0] = ((/* implicit */int) arr_25 [(signed char)4] [i_0] [i_0] [i_0] [(signed char)4]);
    }
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_30 *= ((/* implicit */int) (-9223372036854775807LL - 1LL));
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_9] [i_10] [i_10] [i_9 - 1]))));
            var_32 += ((/* implicit */short) 9223372036854775784LL);
            var_33 = ((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [14] [i_10]);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_36 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -2147483633)) ^ (arr_2 [i_12])))) ? ((-(((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (arr_27 [i_10])));
                        var_34 = ((/* implicit */long long int) -983551408);
                        var_35 *= ((/* implicit */signed char) (+(var_13)));
                        arr_37 [i_12] [i_12] [i_11] [i_10] [i_9] [i_12] = ((/* implicit */_Bool) var_2);
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((signed char) var_1)))));
        }
        arr_38 [i_9] = ((/* implicit */signed char) var_3);
        arr_39 [i_9] [i_9 - 1] = ((/* implicit */long long int) var_8);
        arr_40 [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) > (var_13)));
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        arr_45 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (arr_44 [i_13] [i_13]))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13]))))))) : ((((+(arr_41 [i_13]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        arr_46 [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1004737978)))))) <= (min((((/* implicit */long long int) var_14)), ((~(arr_44 [i_13] [i_13]))))));
    }
    var_37 = ((/* implicit */short) var_7);
    var_38 = ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (short)13345))));
}
