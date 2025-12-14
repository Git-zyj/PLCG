/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41085
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
    var_17 = (+((-(((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */int) var_7);
    var_19 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) (unsigned char)169);
                            var_20 -= (-(((arr_6 [i_0] [i_3] [i_2 - 1] [i_3]) % (arr_6 [i_0] [i_0] [i_2] [i_3 - 3]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) (unsigned short)12411);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */int) (+(max((5298174586214883187LL), (((/* implicit */long long int) (unsigned short)31089))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34442)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) 5981162442026194848LL);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (-8887435420905231024LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)2141)), (((((/* implicit */_Bool) -8779116778920856958LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_0])))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5686)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (arr_21 [i_0] [i_1] [i_6] [i_8])));
                            }
                        } 
                    } 
                    var_27 = ((min((arr_15 [i_6] [i_6 + 1] [i_6] [i_0]), (((/* implicit */unsigned int) (signed char)-9)))) < (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_1 - 2] [i_0])));
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    arr_31 [i_0] [i_1] [i_9] = ((/* implicit */unsigned short) arr_9 [i_1 - 1] [i_9] [i_9] [i_9] [i_0]);
                    var_28 = ((/* implicit */unsigned int) (unsigned short)17969);
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (unsigned short)31150))));
                    var_30 = ((/* implicit */unsigned short) 1987040466981179006LL);
                }
                for (short i_10 = 3; i_10 < 21; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (unsigned short)31068))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (long long int i_12 = 2; i_12 < 22; i_12 += 3) 
                        {
                            {
                                arr_41 [17ULL] [i_1 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((unsigned int) (signed char)57)) : (((unsigned int) var_2))))) ? (((min((var_4), (((/* implicit */unsigned long long int) arr_30 [i_0] [(short)11] [i_11])))) >> (((((/* implicit */int) arr_24 [(short)22] [i_10])) - (37894))))) : (((((((/* implicit */_Bool) (unsigned short)12335)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52709)))))));
                                arr_42 [i_0] [i_0] [i_10] [i_10] [i_12 - 1] = ((/* implicit */int) ((((unsigned int) (short)-454)) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)13458))) || (((/* implicit */_Bool) ((1098897310) / (((/* implicit */int) arr_10 [(short)13] [i_12])))))))))));
                                var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 6875093223062162892LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-382489373469433218LL))), (((/* implicit */long long int) (unsigned short)13476))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((unsigned long long int) ((unsigned short) (_Bool)0)));
                    arr_43 [i_10] = ((/* implicit */unsigned char) ((unsigned short) ((short) (((_Bool)1) ? (((/* implicit */int) (short)31914)) : (((/* implicit */int) (unsigned short)7247))))));
                    arr_44 [i_0] [i_1 - 3] [i_10] = arr_38 [i_10] [10ULL] [(short)12] [i_10] [i_10];
                }
                /* LoopSeq 2 */
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)31068)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-26275)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-11291)) || (((/* implicit */_Bool) arr_25 [i_1] [i_1 + 2] [i_0] [i_1 + 1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29873)) ? (556058468U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18628)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2680430780U))))) : (max((((/* implicit */int) (unsigned short)34477)), (arr_17 [i_0] [i_0] [(unsigned char)22] [5U]))))))))));
                    var_35 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1]))) | (arr_25 [i_13 - 2] [(signed char)18] [i_13] [i_13] [i_1 - 3] [i_1 - 3]))), (3387164278U)));
                    var_36 = ((/* implicit */long long int) 617463741);
                }
                for (short i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    var_37 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_14] [i_0] [i_14] [i_0])) ? (677107175U) : (2312200117U))))) ? (((/* implicit */int) arr_46 [i_1 - 2] [i_1 - 2])) : ((+(((/* implicit */int) arr_3 [i_14 + 2] [i_1 + 2]))))));
                    arr_49 [11U] [i_1] [i_0] [i_0] = var_14;
                    var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) 15451505733795244758ULL)) && (((/* implicit */_Bool) 3931557457U))));
                }
            }
        } 
    } 
    var_39 = var_5;
}
