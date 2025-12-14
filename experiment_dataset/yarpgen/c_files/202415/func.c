/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202415
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) (_Bool)0))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) -905199229934961312LL);
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 239531499022985823LL)))))) ^ (((var_11) ? (arr_7 [i_1 - 3] [i_0] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))))))));
                        var_19 -= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_12)))) >> (((((/* implicit */int) ((unsigned char) (unsigned short)4272))) - (153)))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1376685219656875855LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_8)))))));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))) << (((/* implicit */int) (_Bool)1))))), (max((arr_5 [9ULL]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (var_5))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2304472743U)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 4]))));
                        var_23 = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_2]));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_3 [i_1] [i_2] [i_5 - 2]))));
                        var_25 = ((/* implicit */unsigned char) ((_Bool) ((var_2) || (var_3))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_10)))));
                        var_27 = ((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_2]);
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_7 + 1])) > (((/* implicit */int) var_14))))) >> (((((/* implicit */int) arr_4 [i_1])) - (31619))))) / (((arr_18 [i_1 - 1] [i_7 + 1] [i_1]) ? (((/* implicit */int) arr_18 [i_1 + 2] [i_7 + 1] [i_1])) : (((/* implicit */int) (unsigned char)22))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((7010734975881183188ULL), (((/* implicit */unsigned long long int) var_12))))) || (((/* implicit */_Bool) arr_8 [i_7] [i_1 - 2] [i_2] [i_7 + 1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) 2304472726U)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))) : (arr_8 [i_8 - 1] [i_7 + 1] [i_2] [i_1 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_31 -= ((/* implicit */long long int) (unsigned char)174);
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((1509850522) >= (((/* implicit */int) (unsigned char)104))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) (unsigned char)176)), ((unsigned short)37297))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned short)56273))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        for (long long int i_11 = 2; i_11 < 9; i_11 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((((_Bool) (!(var_7)))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_12 [i_2] [i_1 - 2] [i_2] [i_2] [i_10] [i_2])))), (((((/* implicit */_Bool) var_6)) && ((_Bool)1)))))) : (((/* implicit */int) ((unsigned char) arr_24 [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11 + 2])))));
                                var_35 -= ((/* implicit */unsigned long long int) ((_Bool) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [1U] [i_0] [i_1] [i_2] [i_10] [(_Bool)1])) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_1] [i_2] [1] = ((/* implicit */unsigned short) max((((_Bool) arr_11 [i_0] [i_2] [i_2] [i_1] [5] [i_0])), ((!((_Bool)1)))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_36 = ((/* implicit */long long int) (!(((((/* implicit */int) min((arr_33 [i_0] [i_1 - 3] [i_1] [i_12]), (var_1)))) < (((/* implicit */int) (_Bool)1))))));
                    var_37 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -2147483647)), (3775015284U)));
                }
                var_38 -= ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), (arr_33 [(unsigned short)2] [i_1] [(unsigned short)9] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1 + 2]))) : (min((max((((/* implicit */unsigned int) var_4)), (4294967289U))), (((/* implicit */unsigned int) min(((unsigned short)3338), (((/* implicit */unsigned short) var_3))))))));
                var_39 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60796))) - (134217728ULL))) == (((/* implicit */unsigned long long int) arr_6 [3ULL] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(max((arr_17 [i_0] [i_0] [i_0] [i_1]), ((_Bool)1)))))) : (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1 + 2] [i_1 - 3] [i_0] [i_0] [i_1 - 1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_14 = 1; i_14 < 13; i_14 += 1) 
        {
            var_40 *= (!(((/* implicit */_Bool) arr_38 [i_13] [i_14])));
            var_41 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) < (min((arr_38 [i_13] [i_14]), (((/* implicit */unsigned long long int) var_10)))))));
        }
        var_42 *= var_11;
        var_43 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_39 [i_13] [i_13])) - (1990494553U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_13])) ? (arr_36 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (min((arr_38 [i_13] [i_13]), (((/* implicit */unsigned long long int) (unsigned short)62199)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1)))))));
    }
    var_44 -= ((/* implicit */_Bool) 338013013);
    var_45 = max(((!((_Bool)0))), (((_Bool) -358835844)));
}
