/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35664
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_20 &= ((/* implicit */signed char) arr_2 [i_0]);
                arr_9 [i_1] = ((/* implicit */_Bool) (-2147483647 - 1));
                arr_10 [i_1] = (!(((/* implicit */_Bool) (~(max((454023910), (((/* implicit */int) var_6))))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), ((unsigned char)240)))) ? (454023910) : (var_13)))) ? (arr_13 [i_0] [i_1] [(_Bool)1]) : (16390396427402781979ULL)));
                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)9279)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) var_5)))));
                arr_14 [i_1] = ((/* implicit */_Bool) ((signed char) arr_3 [i_3]));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) << (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 454023910)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((var_13), (((/* implicit */int) (unsigned char)135)))) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) (short)9279))));
                var_24 -= ((/* implicit */int) (!(var_3)));
            }
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((_Bool) ((arr_6 [i_0] [(_Bool)1] [i_0]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)14] [(unsigned char)5] [i_1])))))))));
        }
        for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (short)-4261);
            var_26 += ((/* implicit */signed char) (+(-1895284390)));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) : (1587862665U)));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) var_11);
                            var_29 = ((/* implicit */_Bool) max((var_29), (var_5)));
                        }
                    }
                } 
            } 
            var_30 = (-(((/* implicit */int) (_Bool)1)));
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
        {
            var_31 *= ((/* implicit */short) 18446744073709551615ULL);
            arr_35 [i_0] [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)124)) ^ (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (signed char)0))))))));
            var_32 = ((/* implicit */unsigned long long int) var_7);
        }
        /* LoopSeq 2 */
        for (unsigned char i_10 = 3; i_10 < 14; i_10 += 2) 
        {
            arr_38 [i_0] [i_0] [i_10] = ((((/* implicit */_Bool) (short)-23069)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1)));
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_17 [i_10 - 1])))) ? (((/* implicit */int) var_8)) : (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_22 [i_10 - 2] [i_10 - 2] [3] [i_10])))))))));
            arr_39 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)15)))) ? (((/* implicit */int) var_9)) : (((int) arr_12 [i_0] [i_0] [i_10 - 1] [i_0]))))) ? (((/* implicit */int) var_8)) : ((((!((_Bool)1))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_12))))));
            var_34 = ((/* implicit */int) var_15);
        }
        /* vectorizable */
        for (short i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)241))));
            arr_42 [(_Bool)1] = ((/* implicit */signed char) ((1532205106306780788ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87)))));
            var_36 = var_14;
        }
        var_37 &= ((/* implicit */unsigned char) ((unsigned long long int) 1532205106306780794ULL));
        var_38 = ((/* implicit */unsigned short) ((arr_20 [i_0]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))));
        arr_43 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((18446744073709551585ULL), (((/* implicit */unsigned long long int) (signed char)99))))))) ? (-1396861994) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) max((var_0), ((!(((/* implicit */_Bool) arr_45 [i_14]))))))) != (454023912)));
                    var_40 = ((/* implicit */unsigned long long int) -1396861994);
                }
            } 
        } 
        var_41 = ((/* implicit */short) (+(var_11)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 2) 
        {
            var_42 = ((/* implicit */unsigned char) (_Bool)1);
            var_43 = ((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_15] [i_15 - 1])) + (((/* implicit */int) arr_54 [i_15] [i_15 - 1]))));
            arr_56 [i_12] = ((/* implicit */short) ((int) var_8));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_15 - 1] [i_15 - 1])) != (((/* implicit */int) arr_55 [i_15 + 1] [i_15 + 1]))));
        }
    }
    var_45 = ((/* implicit */_Bool) (~(((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)0)))) ^ (((/* implicit */int) var_10))))));
    var_46 = ((/* implicit */signed char) ((int) var_14));
}
