/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209035
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) arr_2 [i_0] [i_4]);
                            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (short)-29089))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)18937)) || (((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_3] [i_4]))))) >> ((((+(-8971795680476476245LL))) + (8971795680476476266LL)))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_24 = (~(((/* implicit */int) arr_12 [(signed char)15] [i_5] [i_5 - 2])));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_18 [i_7] = ((/* implicit */int) ((((long long int) 7526298950149935993ULL)) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [i_1] [i_1] [i_1])))));
                            arr_19 [i_0] [i_0] [i_5] [i_6] [i_7] = arr_16 [i_0] [(_Bool)1] [i_0] [18LL] [i_7] [i_0];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            arr_25 [i_9] [i_8] [i_5] [i_1] = (+(arr_22 [i_0] [i_0] [i_0] [(unsigned short)9] [i_9] [i_9] [i_9]));
                            arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (-((+(((/* implicit */int) (short)-18938))))));
                            var_25 = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            }
            for (long long int i_10 = 2; i_10 < 24; i_10 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        {
                            arr_34 [i_11] = ((/* implicit */int) (-(var_6)));
                            arr_35 [i_0] [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) * (0LL))))));
                            var_26 = ((/* implicit */unsigned int) ((arr_5 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]) - (((/* implicit */long long int) var_1))));
                        }
                    } 
                } 
                var_27 -= ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)210));
                arr_36 [i_0] [i_1] [i_10 - 2] [17U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0])) || (((/* implicit */_Bool) var_16))))) + ((+(((/* implicit */int) var_4))))));
            }
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-18938))));
        }
        arr_37 [i_0] [6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    }
    for (unsigned long long int i_13 = 4; i_13 < 21; i_13 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_0)))) || (((/* implicit */_Bool) var_17))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned int) (+(((/* implicit */int) (short)18956))))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)10)), (((((/* implicit */_Bool) var_10)) ? (arr_45 [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */int) (unsigned char)248))))))) ? (((unsigned long long int) (-(((/* implicit */int) arr_27 [i_16] [i_15] [i_14]))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_43 [i_13] [i_13])) ? (-1113514561985088583LL) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min(((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_32 [i_13 - 2])))), (((/* implicit */unsigned long long int) var_3)))))));
                        arr_47 [i_14] [i_14] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_15 [i_13]))))))));
                    }
                    var_33 = ((/* implicit */_Bool) (unsigned short)0);
                    var_34 = ((/* implicit */unsigned int) 1572981388);
                }
            } 
        } 
        arr_48 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13 - 3] [i_13] [i_13] [i_13] [i_13 - 3] [i_13]))) : (((unsigned int) arr_42 [i_13] [i_13] [i_13 - 3]))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 2; i_17 < 20; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_9 [i_13] [i_13] [i_13] [i_13 + 1] [i_18]), (((/* implicit */unsigned int) arr_39 [i_13 + 1]))))), (((arr_22 [i_17 + 1] [i_17 + 1] [i_17] [i_17] [i_17] [i_17] [i_17]) & (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_19))))))))))));
                    arr_53 [i_13 - 2] [i_13 - 2] [i_13 - 2] [(unsigned char)20] = ((/* implicit */int) ((unsigned int) (-(arr_1 [i_13 + 1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 4; i_19 < 21; i_19 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_20 + 1])) ? (((/* implicit */long long int) arr_31 [i_20 + 1])) : (arr_23 [i_19 - 4] [i_19 - 3] [i_19 - 1] [i_19 - 3] [i_19 - 2])));
            arr_59 [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3522740181U)))) ^ (var_14)));
            var_38 = ((/* implicit */long long int) var_3);
        }
    }
    var_39 = ((/* implicit */short) var_15);
}
