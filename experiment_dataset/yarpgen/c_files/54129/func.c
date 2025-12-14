/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54129
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
    for (int i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_3)))));
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_4 [i_2]))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2]))))))));
            arr_8 [i_1] = ((/* implicit */short) var_8);
            var_22 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_1] [8U]))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) * (67108863ULL)));
            arr_13 [8LL] [i_3] [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_4 [i_1]))))));
            var_24 += ((/* implicit */unsigned char) arr_0 [i_1]);
        }
        arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [18])) == (((/* implicit */int) var_5))))) : (((/* implicit */int) (short)17605))));
        /* LoopSeq 4 */
        for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            arr_18 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1]);
            arr_19 [i_1] [i_4 - 1] = ((/* implicit */unsigned char) arr_12 [i_1] [i_4]);
            arr_20 [i_1] [i_1] [i_4 + 1] = (~(min((max((((/* implicit */unsigned long long int) var_4)), (arr_10 [i_4] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17626))) + (arr_15 [i_1] [i_4 + 3])))))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_23 [i_1] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (-1LL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_1 [i_1]))));
                var_26 = arr_9 [i_1] [(unsigned char)4] [i_1];
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        arr_34 [i_1 - 1] [i_5] [i_5] [i_7] [i_7] [i_1] = ((((/* implicit */long long int) max((((int) 58515754)), (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 3]))))) + (-1LL));
                        arr_35 [i_1] [i_5] [(unsigned char)9] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((min((23ULL), (((/* implicit */unsigned long long int) (unsigned char)151)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)17626)) && (((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1 - 1]))))))))) << (((((((/* implicit */unsigned long long int) var_18)) ^ (((var_15) >> (((((/* implicit */int) arr_24 [i_1])) - (77))))))) - (1698070200553674958ULL)))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */int) arr_24 [i_9 - 2])) : (var_17))))))));
            var_28 = arr_33 [i_1] [i_1] [14] [i_1] [i_1] [i_1 - 2];
        }
        for (long long int i_10 = 4; i_10 < 20; i_10 += 2) 
        {
            arr_42 [i_10] [i_10] [i_1] |= ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_10 + 1])), (min((((int) var_16)), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_16))))))));
            arr_43 [i_1] [i_1] = ((/* implicit */unsigned char) -58515765);
        }
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_11])) && (((/* implicit */_Bool) var_7))))))))));
            arr_46 [i_1] [i_1] [i_1 - 3] = ((/* implicit */short) ((signed char) 58515754));
        }
        for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 4) /* same iter space */
        {
            arr_51 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((long long int) max((((/* implicit */unsigned int) var_2)), (arr_37 [(unsigned char)7] [(unsigned short)12])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_12 + 1] [i_12] [i_12] [i_12] [i_12] [i_1])))));
            arr_52 [i_1] = ((/* implicit */_Bool) (((+(arr_10 [i_1 - 3] [i_1]))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_25 [i_1]))))))));
            var_30 = ((long long int) ((arr_10 [i_1 - 2] [i_1 - 2]) * (arr_10 [i_1 - 3] [i_12 + 1])));
        }
        for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned char) (+((~(((-320651126161666762LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
            var_32 -= ((/* implicit */signed char) var_9);
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) -58515766))) <= (((/* implicit */int) (unsigned short)40397))))))))));
            arr_55 [i_1] [i_1 - 1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)17605)), (arr_25 [i_1]))) << (((((((/* implicit */_Bool) 109381261165000785LL)) ? (arr_16 [i_1]) : (arr_29 [i_1] [i_1] [i_13]))) - (5639027220914994555ULL)))))) ? (3968454187993389355LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(var_7))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)17605)), (arr_25 [i_1]))) << (((((((((/* implicit */_Bool) 109381261165000785LL)) ? (arr_16 [i_1]) : (arr_29 [i_1] [i_1] [i_13]))) - (5639027220914994555ULL))) - (15318565492844175161ULL)))))) ? (3968454187993389355LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(var_7)))))))));
        }
        for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((arr_22 [i_1] [i_14] [i_14]), (((/* implicit */short) arr_11 [4U] [(unsigned short)5])))))) ? ((-(-58515777))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)17621))) | (-7383857125015913664LL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_30 [(unsigned char)7] [(unsigned char)7] [i_14 - 3] [i_14] [i_14])))))))));
            arr_59 [i_1 - 3] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_41 [i_1 - 1] [i_14]))))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_6 [i_1] [i_14])) & (((/* implicit */int) arr_24 [i_14 + 1]))))))));
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned short i_17 = 4; i_17 < 17; i_17 += 4) 
                    {
                        {
                            arr_69 [i_17] [i_1] [i_17] [i_17] [20LL] = min((((/* implicit */unsigned long long int) ((_Bool) (~(var_12))))), (var_13));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_15] [i_16])) < (var_17))))) | (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_15] [18ULL]))))))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)185)))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_36 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 2) 
    {
        for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            {
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (min((((/* implicit */long long int) arr_65 [i_19])), (-3994011501981173525LL)))))) ? (((((/* implicit */_Bool) arr_6 [i_18] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_19])) + (((/* implicit */int) arr_0 [i_19]))))) : (((unsigned int) arr_75 [i_18])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_18] [i_18])) * (((/* implicit */int) arr_33 [i_18] [(_Bool)1] [(short)0] [7] [(short)0] [i_18 - 1]))))))))));
                arr_76 [i_18] = ((((max((18446744073709551615ULL), (arr_26 [i_18] [i_18] [i_18] [i_18]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) 2831215756226074689LL)));
                arr_77 [3ULL] [3ULL] [(signed char)1] = ((/* implicit */signed char) (-((+(max((((/* implicit */unsigned long long int) var_10)), (arr_58 [i_19])))))));
            }
        } 
    } 
}
