/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199881
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
    var_13 = ((/* implicit */unsigned int) ((var_10) << ((-(((((/* implicit */int) var_8)) / (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_15 = ((/* implicit */signed char) max(((+(arr_4 [i_0] [(unsigned char)12] [i_1 + 1]))), (((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) var_7);
                        var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)9])), (var_6)))));
                    }
                } 
            } 
            var_18 *= ((((/* implicit */unsigned int) min((arr_4 [i_0] [i_1 - 1] [i_1]), (((/* implicit */int) var_7))))) - (arr_1 [8ULL] [i_1 + 2]));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) (+(arr_5 [1] [i_5] [6LL])));
                    var_20 = ((/* implicit */unsigned char) ((((var_2) >> (((/* implicit */int) var_8)))) + (((/* implicit */unsigned long long int) arr_17 [i_6 - 1] [i_6 - 1] [i_6]))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_21 = (-(arr_2 [i_6 - 1]));
                                var_22 &= ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) var_9);
        var_24 = ((/* implicit */int) (~(arr_26 [i_4])));
    }
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        var_25 = (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_12)))))));
        var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_29 [i_9])) < (var_0))))) & (max(((-(7615898249303358071ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1703751717U)), (8386075600147493546LL)))))));
    }
    var_27 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 4 */
    for (unsigned short i_10 = 4; i_10 < 11; i_10 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_12))));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) min((var_29), ((~(((/* implicit */int) arr_3 [i_12] [i_12]))))));
                            var_30 *= ((/* implicit */unsigned char) var_2);
                            var_31 = ((/* implicit */int) ((((/* implicit */int) arr_40 [i_11 - 1] [i_11 - 1])) >= (((/* implicit */int) arr_8 [i_10 - 3] [i_10] [i_11 + 1]))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) arr_36 [i_10] [i_10] [i_11]);
            arr_42 [i_10] [i_11] = ((/* implicit */signed char) var_0);
        }
        for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            var_33 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1781)) + (((/* implicit */int) (_Bool)1))))) * (var_10))) > (((var_10) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
            arr_47 [0ULL] [i_15] [0ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -3449834986299229991LL)) || ((_Bool)1)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10 - 1] [(_Bool)1] [i_10 - 1]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_10))))))));
        }
        arr_48 [i_10] [i_10] = ((/* implicit */short) (-(arr_23 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10 - 1] [i_10] [i_10])));
    }
    for (int i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned char) var_0);
        var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)11)) % (((/* implicit */int) (signed char)82))))), (arr_49 [i_16] [i_16])));
    }
    for (int i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) arr_52 [i_17]);
        var_37 *= ((/* implicit */short) (!(var_7)));
    }
    for (int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            var_38 = ((/* implicit */signed char) arr_49 [i_18] [i_18]);
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    {
                        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3449834986299229985LL)) || ((_Bool)0)));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_19] [i_19])) && (((/* implicit */_Bool) arr_49 [i_18] [i_19])))))) == (arr_49 [i_18] [i_19])));
                    }
                } 
            } 
        }
        arr_62 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((arr_55 [i_18] [i_18]) % (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_49 [i_18] [i_18])))));
    }
}
