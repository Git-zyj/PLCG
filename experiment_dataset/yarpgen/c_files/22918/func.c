/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22918
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) min((var_19), (arr_0 [i_0] [i_1]))))));
            arr_5 [i_1] = ((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) min((max((var_19), (2147483647))), (((/* implicit */int) var_14)))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_8 [i_0] [1LL] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1]))))) + (((((/* implicit */int) ((7884349523319128208LL) <= (var_18)))) ^ (((/* implicit */int) arr_1 [i_0] [i_2]))))));
            var_21 += ((/* implicit */signed char) (+(((268435456) & (-268435456)))));
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((var_19), (((/* implicit */int) arr_2 [i_0] [i_2]))))))) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_4])) : (((((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_12 [i_0 - 2] [12LL] [i_3 + 2])))) + ((~(((/* implicit */int) arr_9 [i_4]))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3] [0LL]))))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_3] [i_5])))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_4 [i_0 - 1])), (-3730039195872324359LL))) - (min((((/* implicit */long long int) arr_4 [i_0])), (3730039195872324358LL)))))) ? ((((-(((/* implicit */int) var_14)))) - (((((/* implicit */int) (signed char)-6)) - (((/* implicit */int) var_11)))))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) min(((_Bool)1), (var_3)))))))))));
            var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_1 [i_0] [i_6])))))));
        }
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) arr_0 [i_0] [i_7]);
                        arr_24 [i_0] [i_7] [i_8] [i_0] [i_8] [i_9] = ((/* implicit */signed char) min(((+(((/* implicit */int) min((arr_19 [i_0] [i_7]), (((/* implicit */signed char) (_Bool)1))))))), (((((/* implicit */_Bool) -443519575)) ? (((/* implicit */int) (signed char)127)) : ((+(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((-268435477), (268435456)));
    }
    var_27 = (_Bool)1;
    /* LoopSeq 2 */
    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_28 = ((/* implicit */long long int) (_Bool)0);
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (((arr_26 [i_10] [i_10]) ^ (arr_26 [i_10] [12]))))))));
        arr_27 [i_10] [i_10] = ((/* implicit */long long int) min(((~(-1568879348))), ((+(((/* implicit */int) arr_25 [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_30 *= ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 3529513681818312941LL))))), (arr_18 [i_11] [i_11])))) || (min((((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_11] [i_11])) || (((/* implicit */_Bool) 268435477)))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_11] [i_11] [i_11])))))));
        arr_30 [i_11] [(_Bool)1] = ((/* implicit */long long int) arr_25 [i_11]);
        var_31 *= ((/* implicit */_Bool) min((-414753953), (((/* implicit */int) (signed char)-1))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) -2030393052);
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_33 += ((var_18) > (((/* implicit */long long int) (~(-1)))));
                            var_34 = ((/* implicit */signed char) (_Bool)1);
                            arr_43 [10LL] [i_11] [i_12] [i_12] [11] [i_14] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_11] [i_12] [i_13] [i_14])), (var_18)))) && (((/* implicit */_Bool) var_9)))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_47 [i_11] [(signed char)8] |= ((/* implicit */_Bool) arr_40 [i_13]);
                            arr_48 [i_12] [i_12] [i_13] [5] [(_Bool)1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((((/* implicit */int) var_11)) >> (((var_2) + (5566907755386566625LL))))), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_44 [i_11] [i_12] [i_13] [i_13] [i_14] [i_16])))))))) + (min((((/* implicit */long long int) (_Bool)1)), (var_17)))));
                            arr_49 [i_11] [i_12] [i_13] [i_14] [(_Bool)1] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))) - (((/* implicit */int) ((var_0) > (arr_16 [i_11] [i_14]))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_36 [i_12])))) << (min((((/* implicit */long long int) arr_31 [i_11] [i_12] [i_16])), (max((3529513681818312937LL), (((/* implicit */long long int) (signed char)(-127 - 1))))))))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */int) arr_28 [i_12])) > (var_19))))));
                            var_37 = ((((var_2) - (((/* implicit */long long int) 268435478)))) <= (((/* implicit */long long int) arr_17 [i_11] [i_11] [i_14])));
                        }
                        arr_52 [i_12] [i_12] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_12 [i_11] [i_12] [i_13]) || (arr_12 [i_11] [i_11] [i_13])))) & (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_12 [i_12] [i_13] [i_14]))))));
                    }
                } 
            } 
        } 
        var_38 -= ((/* implicit */long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_25 [i_11]))));
    }
}
