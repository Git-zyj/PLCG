/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199771
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_5 [(_Bool)1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
            var_14 -= ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) arr_1 [i_0 - 3] [i_2 + 1]);
                arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) var_2));
                var_16 = (-(5250506734789338890LL));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    var_17 = ((/* implicit */signed char) arr_7 [i_0] [i_0 + 1] [i_0] [i_3]);
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((int) var_2)))));
                }
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 3]))) == (var_10)));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) || (arr_4 [i_0 - 1] [i_0 - 2]))))));
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_4] [(unsigned short)0] [i_5] [i_6])) || (((/* implicit */_Bool) -5250506734789338876LL)))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 5250506734789338890LL)) || (((/* implicit */_Bool) arr_0 [i_4]))));
                        var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) 5250506734789338894LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-5250506734789338876LL)))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned char)15] [i_0]))))));
                        arr_23 [(unsigned char)10] [i_5] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    for (unsigned char i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) var_1);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_10 [i_0 + 1] [i_8] [i_4] [i_5] [i_8]))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_8] [i_1 + 1])) == (((/* implicit */int) arr_0 [i_5]))))) ^ (((((/* implicit */int) (signed char)5)) % (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_8]))))));
                        var_28 = ((/* implicit */unsigned short) var_9);
                        var_29 = ((/* implicit */short) (signed char)127);
                    }
                    arr_27 [i_0] [18LL] [18LL] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) (-((+(var_2)))));
                }
                for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_13))))))));
                        arr_32 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) var_7);
                    }
                    var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (4268844336U)))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        arr_37 [i_0] [i_11] [i_4] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5250506734789338880LL)) || (((/* implicit */_Bool) ((((/* implicit */long long int) 1001552313U)) / (var_3))))));
                        var_32 = ((((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) 13188680726312375907ULL)))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0]))) < (arr_20 [i_12 + 2] [i_11] [i_4] [i_4] [17U] [i_0] [i_0]))));
                        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0)))))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (int i_13 = 4; i_13 < 21; i_13 += 3) 
                {
                    arr_42 [i_0] [i_0] [i_4] [i_1 - 1] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_14 [(_Bool)1] [i_4] [(_Bool)1] [i_0 - 3]))) % ((~(((/* implicit */int) arr_26 [i_4] [i_1 - 1] [i_4] [i_1] [i_4] [i_1] [i_1]))))));
                    arr_43 [i_1] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28672)) || (((/* implicit */_Bool) (-(arr_39 [i_0] [i_1 - 1] [i_0] [i_13] [i_1 - 1] [19ULL]))))));
                    var_35 &= ((/* implicit */unsigned short) arr_24 [(short)14] [i_4] [i_4] [i_13 - 4]);
                }
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                arr_47 [i_0] [i_1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)1)) % ((-(((/* implicit */int) var_5))))));
                arr_48 [i_0 + 1] [i_1 - 1] [i_1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_14]))) >= (5250506734789338896LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 3) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(_Bool)0] [(_Bool)0] [(_Bool)0]))))))))));
                    arr_51 [i_0 - 2] [i_1] [i_0 - 2] [i_14] [18U] [10ULL] |= ((/* implicit */short) var_0);
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248))))) ? (((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [(_Bool)1] [i_15])) - (24562))))) : (((/* implicit */long long int) 2620084689U)))))));
                }
            }
        }
        arr_52 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
        var_38 = ((/* implicit */unsigned short) (!(var_8)));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            var_39 &= ((/* implicit */short) arr_41 [i_0 - 2] [i_0] [20U] [i_16]);
            var_40 = ((/* implicit */unsigned char) arr_26 [i_16] [i_16] [i_0] [i_16] [i_16] [i_16] [i_16]);
        }
        arr_55 [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) == (((int) arr_0 [i_0]))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_40 [i_17] [i_17] [i_17] [i_17] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((_Bool) arr_10 [i_17] [i_17] [i_17] [i_17] [i_17]))))) : (var_10)));
        arr_58 [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_17] [i_17] [i_17])) ? (arr_8 [i_17] [i_17] [i_17]) : (arr_8 [i_17] [i_17] [i_17]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))));
    }
    for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
    {
        arr_62 [i_18] = ((/* implicit */_Bool) ((unsigned int) max((max((((/* implicit */unsigned long long int) 5250506734789338884LL)), (9980470228320975021ULL))), (((/* implicit */unsigned long long int) ((arr_41 [i_18] [i_18] [i_18] [i_18]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_18] [i_18])))))))));
        var_42 = ((/* implicit */short) arr_53 [i_18] [i_18] [i_18]);
        var_43 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_33 [i_18])))) ? (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (3354663178147708898LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_18] [i_18] [10U] [i_18] [(_Bool)1] [i_18]))))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)235)))))))));
        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (+(((((((/* implicit */_Bool) arr_28 [i_18] [i_18] [i_18] [i_18])) || (((/* implicit */_Bool) var_5)))) ? ((~(arr_41 [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_18]))))))))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            for (long long int i_20 = 4; i_20 < 16; i_20 += 3) 
            {
                {
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) min((((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) arr_24 [i_18] [i_19] [i_20] [i_18]))))) & (((16ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_18]))))))), (((/* implicit */unsigned long long int) var_7)))))));
                    arr_70 [i_18] [i_18] [i_20] = min((((/* implicit */long long int) (~(((/* implicit */int) min((var_11), ((unsigned short)47987))))))), (min((((/* implicit */long long int) arr_8 [i_18] [i_18] [i_20 - 1])), (max((((/* implicit */long long int) (signed char)-105)), (var_2))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        arr_74 [i_18] = (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_18] [i_20] [i_18])) ? (((/* implicit */int) arr_49 [i_18] [(unsigned char)4] [i_19] [i_18])) : (arr_66 [i_18] [i_18] [i_18] [i_18])))), (min((var_3), (((/* implicit */long long int) arr_29 [i_21] [i_21] [(unsigned short)20] [i_18] [i_18] [i_18])))))));
                        var_46 = ((/* implicit */unsigned char) var_8);
                    }
                }
            } 
        } 
    }
}
