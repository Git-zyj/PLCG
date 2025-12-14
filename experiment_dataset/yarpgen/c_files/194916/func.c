/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194916
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
    var_15 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_12)) : (var_9)))) && (var_12)))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))) > (-113028877))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_16 = (!(((/* implicit */_Bool) 113028870)));
        var_17 -= ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) max(((+(((/* implicit */int) ((signed char) var_10))))), (((((/* implicit */_Bool) (signed char)13)) ? (((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_1)))) : (max((((/* implicit */int) arr_3 [i_1])), (-1681091616)))))));
        var_18 = ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (128))));
        var_19 = max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((signed char) arr_3 [i_1]))))), (max((max((941765725), (((/* implicit */int) (signed char)118)))), ((~(arr_2 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-95)) + (2147483647))) >> (((1048572) - (1048563))))) == (((/* implicit */int) ((_Bool) arr_6 [i_2]))))))));
        var_21 = ((/* implicit */signed char) arr_5 [i_2]);
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_22 += ((/* implicit */signed char) ((((/* implicit */int) arr_5 [1])) == (var_2)));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (_Bool)1)) : (1048560)))));
                        var_24 = (((_Bool)1) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-3)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_2] [i_3 - 2] [(_Bool)1]))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_16 [i_4] [i_3])) ? (var_9) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_6])))))))));
                        arr_18 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-15)) != (((/* implicit */int) (signed char)113))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_27 += (((~(((/* implicit */int) arr_17 [i_2] [i_3] [(_Bool)1] [i_7])))) != (((((/* implicit */int) (signed char)-12)) | (((/* implicit */int) (signed char)-52)))));
                        var_28 = ((int) ((-18) < (1274647291)));
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)48))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_24 [(_Bool)1] [(_Bool)1] [i_4] [i_2] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_22 [i_2] [i_3] [i_4])))));
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 13; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */int) (((-(((/* implicit */int) arr_21 [i_2] [8] [i_4] [i_8])))) >= (((((/* implicit */_Bool) var_8)) ? (arr_23 [i_2] [(_Bool)1] [i_8] [i_9]) : (((/* implicit */int) arr_22 [i_3] [i_3] [13]))))));
                            arr_28 [i_2] [i_4] [i_2] = ((signed char) arr_12 [i_4] [i_2] [i_2] [i_8]);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [9] [i_3 + 1] [i_3] [i_3 - 3])) ? (((/* implicit */int) arr_20 [(signed char)13] [i_3 - 1] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_17 [i_3] [i_3 - 1] [i_3] [i_3 + 1]))));
                        }
                    }
                    var_32 = ((/* implicit */_Bool) (+(-1128812852)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-106))))))));
                                var_34 = ((/* implicit */signed char) arr_12 [i_2] [i_2] [i_10] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */int) (signed char)16);
    }
    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        var_36 -= ((/* implicit */signed char) (_Bool)1);
        var_37 = ((((arr_38 [i_12]) ? (var_6) : (arr_37 [i_12] [i_12]))) ^ (((int) -662838357)));
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_12] [i_12]))))) ? (-1048573) : (min(((-(((/* implicit */int) arr_36 [i_12] [i_12])))), (((880160405) & (((/* implicit */int) arr_36 [(signed char)17] [(signed char)17]))))))));
        arr_39 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) (signed char)-124)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_12))))) ? (var_2) : (((int) ((signed char) 11952237)))));
        var_39 = ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)112))))) || (((/* implicit */_Bool) ((arr_37 [i_12] [i_12]) & (arr_37 [i_12] [i_12]))))))) != (max((-1274647302), (((/* implicit */int) (signed char)22)))));
    }
}
