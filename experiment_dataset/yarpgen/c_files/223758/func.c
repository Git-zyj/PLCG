/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223758
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 += min((((/* implicit */unsigned long long int) ((signed char) 677760014U))), (var_17));
        arr_2 [i_0] [14] = ((((/* implicit */_Bool) ((int) ((unsigned int) arr_0 [i_0])))) ? (max((var_2), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) 716906610U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_0 [1ULL]);
                    var_20 = ((/* implicit */int) max((((/* implicit */long long int) -334049007)), (6299067097797269281LL)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((max(((+(var_11))), (min((((/* implicit */long long int) (unsigned short)38694)), (var_7))))), (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), ((-9223372036854775807LL - 1LL)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (487774884U)))))));
        var_22 |= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))), (max((7437595812183189656LL), (((/* implicit */long long int) arr_10 [2LL]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */_Bool) min((((1427575347U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_18))));
            arr_16 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-10)), ((+(((/* implicit */int) arr_10 [i_3])))))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_19 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((unsigned int) max((7437595812183189675LL), (7627920743313429783LL))))));
                var_23 = ((/* implicit */unsigned long long int) ((max((arr_17 [i_4 - 1] [i_4] [2LL]), (((/* implicit */long long int) (signed char)-43)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4] [i_4 - 1]))))))));
                var_24 = ((/* implicit */unsigned long long int) arr_13 [i_3] [i_4 + 2] [i_4]);
            }
        }
        arr_20 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (max((9223372036854775807LL), (((/* implicit */long long int) 4292870144U))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_3] [i_3]), ((unsigned short)38381))))) : ((+(var_2)))));
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) arr_18 [i_6] [(_Bool)1] [i_6] [(short)0]);
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_14 [i_6] [i_6])) - (11495)))))) ? (((((/* implicit */long long int) var_10)) / (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_6] [i_6]))))));
    }
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 334049005)), (arr_23 [i_9])))) ? (((((/* implicit */_Bool) var_17)) ? ((~(677759994U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) ((unsigned long long int) 4071337892964215937ULL))) ? (677760014U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))));
                var_28 = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_26 [i_7] [i_8 - 3] [i_8 + 1])), (((int) arr_24 [i_7] [0U])))), (((/* implicit */int) var_16))));
                arr_29 [i_7] [i_8 - 2] [i_9] = ((/* implicit */int) min((min((9223372036854775786LL), ((-(arr_23 [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_7] [i_7] [0ULL] [i_7]), (((/* implicit */unsigned long long int) arr_26 [7LL] [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 1744590852U)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (short)-17035)))))))));
            }
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                arr_34 [i_10] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) 3580845790U);
                arr_35 [i_10] [i_8] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_18 [i_8] [i_8 + 1] [i_8 + 3] [i_8 - 3])))));
            }
            for (long long int i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (+(1700563669U)))) ? (min((arr_18 [i_7] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7] [12U] [i_11])) ? (((/* implicit */long long int) var_8)) : (arr_31 [i_7] [i_8 + 3] [i_11] [i_7])))))) : (((/* implicit */unsigned long long int) max(((+(9223372036854775807LL))), (((/* implicit */long long int) arr_32 [i_11 + 2] [i_8] [i_8 + 3])))))));
                var_30 = ((/* implicit */unsigned char) 334049007);
            }
            arr_40 [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) min((var_18), (((/* implicit */unsigned short) (short)-17035))))));
        }
        var_31 += ((/* implicit */unsigned long long int) min(((-(arr_17 [i_7] [i_7] [i_7]))), (((/* implicit */long long int) min((406842952U), (1502757107U))))));
        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967275U)), (var_11)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_7]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)226)), (1607761515U)))) : ((~(max((var_7), (((/* implicit */long long int) var_18))))))));
        arr_41 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (arr_22 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (arr_22 [i_7] [i_7]) : (arr_22 [i_7] [i_7]))) - (15436101544552841250ULL)))));
    }
    var_33 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)1028)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)51)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_13)), (var_11)))))));
    var_34 += ((/* implicit */unsigned long long int) ((signed char) var_10));
}
