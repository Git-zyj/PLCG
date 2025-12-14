/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228682
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
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_18))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-7323399394596659599LL)))), (((((/* implicit */_Bool) 439493715849389045LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)169))))) : (min((((/* implicit */unsigned long long int) var_4)), (3949023903382841656ULL)))))));
    var_22 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) 14497720170326709985ULL))) ? (((/* implicit */unsigned long long int) ((-6029158198962251665LL) % (-6339437974346103963LL)))) : (((14497720170326709985ULL) << (((var_6) - (6278706688929067217LL))))))), (((/* implicit */unsigned long long int) (-(max((16LL), (((/* implicit */long long int) (unsigned char)183)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        arr_11 [(unsigned char)8] [4ULL] [i_2 - 1] [i_3 + 1] |= ((long long int) ((8091949997516476901ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3 - 2]))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_6 [i_2] [i_1] [i_2]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_15 [i_4] [(_Bool)1] [i_1] [i_1] [i_1] [i_0] = arr_4 [i_1];
                            var_24 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
                        }
                        arr_16 [i_1] = ((/* implicit */_Bool) (~(10354794076193074714ULL)));
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (var_9)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 6; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [4LL] [i_5 - 2] [(_Bool)0] [i_5] [i_6 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_6 + 3])) ? (arr_20 [i_5] [i_2] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 16LL))));
                                arr_23 [i_1] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_5 - 3] [i_6 - 1])) : (((/* implicit */int) (unsigned char)14))));
                                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)245))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(arr_2 [i_0]))));
        arr_25 [i_0] = (((_Bool)0) ? (((arr_0 [i_0]) ? (var_15) : (((/* implicit */unsigned long long int) -5205413206707887674LL)))) : (((unsigned long long int) var_10)));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (10354794076193074716ULL)));
    }
    for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    arr_34 [i_7 - 1] [i_7 - 1] [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_16)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_12))));
                        var_28 = ((/* implicit */long long int) (_Bool)0);
                        arr_37 [i_10] [i_10] [i_9] [i_10] = ((arr_28 [i_10 + 1]) == (((((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_8] [i_10])) ? (-9223372036854775790LL) : (-4423982005624556558LL))));
                        var_29 = ((/* implicit */long long int) 14497720170326709986ULL);
                        arr_38 [i_7] [i_7] [i_9] [i_7] |= ((/* implicit */long long int) 8091949997516476898ULL);
                    }
                    var_30 += ((/* implicit */_Bool) arr_28 [i_8]);
                    var_31 = min((arr_29 [i_8]), (((/* implicit */unsigned long long int) arr_32 [(_Bool)1] [i_8] [i_8] [i_9])));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (long long int i_12 = 3; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)245)))), (var_15)))));
                                arr_43 [i_11] [i_8] [9LL] |= (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_30 [i_7 + 2])) / (((/* implicit */int) arr_30 [i_7 + 1]))))));
        var_33 = var_13;
        arr_45 [i_7 + 1] = ((/* implicit */unsigned char) (-(4934059690640104123LL)));
        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
    }
}
