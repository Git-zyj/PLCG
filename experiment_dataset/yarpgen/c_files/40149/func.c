/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40149
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))) % (15805395013272254544ULL))))))));
                        arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((unsigned char) 15805395013272254545ULL)))) & (max((((/* implicit */int) ((unsigned short) var_4))), (((arr_0 [(_Bool)1]) ? (var_6) : (981821271)))))));
                    }
                } 
            } 
            var_11 = ((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 + 1]);
            arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-((+(arr_9 [i_0] [i_0 - 1] [i_0 + 1] [(signed char)10])))))) < (min((((/* implicit */unsigned long long int) 9U)), (2641349060437297068ULL)))));
            var_12 = ((/* implicit */short) (~(235878524U)));
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_13 |= ((/* implicit */unsigned char) (signed char)-81);
            arr_15 [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 67108863)), (2641349060437297065ULL)));
            var_14 = ((/* implicit */_Bool) ((unsigned long long int) arr_5 [16] [i_0]));
        }
        var_15 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1])))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(_Bool)1] [16U])), (var_2))) : (max((((((/* implicit */_Bool) arr_14 [13U] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))), (arr_4 [i_0 - 1] [i_0 + 1])))));
        arr_16 [i_0 - 1] [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_16 = ((/* implicit */long long int) (signed char)104);
    }
    var_17 = var_9;
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2641349060437297085ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1856448225)) < (2641349060437297078ULL))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))) < (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_19 [13ULL]))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 15805395013272254549ULL))));
        var_21 = ((/* implicit */_Bool) arr_17 [i_5]);
        /* LoopSeq 4 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            var_22 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) arr_19 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)));
            var_23 = ((/* implicit */short) arr_17 [i_5]);
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_17 [i_5])))) ? (2641349060437297065ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5])) | (((/* implicit */int) arr_20 [i_5] [i_5] [i_5])))))));
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 390509963015640126LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_22 [(_Bool)1] [i_5]) : (arr_22 [16LL] [i_6])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [4ULL]))) : (arr_19 [i_5])))));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_25 = ((/* implicit */_Bool) ((arr_22 [i_5] [i_5]) >> (((/* implicit */int) arr_18 [i_5]))));
                var_26 = ((/* implicit */short) var_6);
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 917043037U))));
            }
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_17 [i_5]) | (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (151825288987814245ULL)));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2641349060437297072ULL)) ? (arr_27 [i_5] [i_8] [i_8]) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8]))))) < (arr_32 [(_Bool)1] [(_Bool)1] [i_5] [i_8])));
            var_30 = (-(((/* implicit */int) (_Bool)1)));
            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_19 [i_5]) : (arr_32 [i_8] [i_8] [5U] [i_8]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_35 [4] = ((/* implicit */signed char) var_9);
            var_32 = ((/* implicit */_Bool) ((2641349060437297053ULL) % (151825288987814245ULL)));
            arr_36 [i_5] [i_10 - 1] = ((/* implicit */int) ((unsigned int) (unsigned char)255));
            var_33 = ((/* implicit */unsigned int) arr_17 [i_5]);
        }
        for (short i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) 3730527476U))));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 1; i_13 < 21; i_13 += 2) 
                {
                    for (int i_14 = 4; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */unsigned int) (-((-(arr_24 [17ULL])))));
                            arr_48 [i_12] = ((/* implicit */int) ((unsigned int) arr_37 [i_5] [i_11 + 1] [i_5]));
                            var_37 = arr_23 [i_11];
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned int) arr_46 [i_5] [i_11] [i_11] [i_11] [i_5]);
        }
        var_39 *= ((/* implicit */unsigned long long int) arr_30 [i_5] [i_5]);
    }
    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        arr_51 [i_15] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (max(((+(2267443588U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_15] [i_15] [i_15])) ? (var_6) : (arr_29 [i_15] [i_15] [i_15])))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)124)) || (((/* implicit */_Bool) 1749620371U)))))))));
        var_40 = ((/* implicit */int) (~(arr_44 [i_15] [i_15] [i_15] [13ULL] [i_15] [i_15])));
        var_41 = ((/* implicit */unsigned long long int) var_1);
        var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)65527), (((/* implicit */unsigned short) (_Bool)1)))))))) / ((-(arr_38 [i_15] [i_15])))));
    }
}
