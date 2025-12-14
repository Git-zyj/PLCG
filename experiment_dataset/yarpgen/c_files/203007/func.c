/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203007
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) var_6);
            var_19 *= (signed char)32;
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (min(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)90)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))) : (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [(unsigned char)11] [i_3]))))));
                    }
                } 
            } 
        }
        arr_10 [i_0] = ((/* implicit */unsigned char) (-(arr_9 [i_0] [(signed char)18] [i_0] [i_0])));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_17)) ? (var_12) : (var_18)))))), (var_10))))));
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) var_13);
        var_24 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)34711)))) - (((/* implicit */int) ((_Bool) var_7))))), (((/* implicit */int) ((_Bool) (_Bool)0)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) arr_11 [i_4]))));
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_26 -= ((/* implicit */long long int) (signed char)32);
            var_27 = arr_11 [i_5];
            arr_18 [(unsigned char)14] = ((/* implicit */signed char) var_11);
            arr_19 [i_4] [i_5] = ((/* implicit */short) var_9);
            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_3) : ((~(((/* implicit */int) var_17))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_20 [i_4] [i_4] [14ULL])) ? (((/* implicit */int) (unsigned char)14)) : (var_3))), (((/* implicit */int) min((var_17), (((/* implicit */signed char) var_0))))))) - (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((_Bool) 2596756066067498899ULL)))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_30 = ((/* implicit */int) var_10);
                        arr_30 [i_4] [i_7] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) ((max((826676719), (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-32)))))));
                        var_31 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-103)), (arr_25 [i_7] [i_7])))) ? (((/* implicit */int) arr_22 [(signed char)7])) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_8 - 1])))));
                    }
                } 
            } 
            arr_31 [17] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) arr_14 [i_4])), (((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */int) arr_12 [i_4] [i_4]))))))), (min((((/* implicit */long long int) var_5)), (arr_28 [(signed char)15] [i_7] [i_7] [i_7] [i_7])))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_27 [i_4] [(_Bool)1] [(_Bool)1]))) ? ((((_Bool)1) ? ((~(((/* implicit */int) var_6)))) : (((int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_4] [i_7] [i_7]))))))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_4] [i_4] [(_Bool)1] [i_4] [i_10] [i_10])) ? (((/* implicit */int) arr_29 [(_Bool)1] [i_4] [16ULL] [i_4] [i_4] [i_10])) : (((/* implicit */int) arr_21 [i_10]))));
            arr_34 [i_4] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
            var_34 *= ((/* implicit */long long int) (_Bool)1);
        }
        var_35 += ((/* implicit */int) arr_22 [i_4]);
    }
    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (unsigned char)152))));
}
