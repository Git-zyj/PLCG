/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215663
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) 1122558574589480479LL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : ((-(((/* implicit */int) (short)6177))))));
            var_19 = ((/* implicit */unsigned char) (short)(-32767 - 1));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -7425490459853129286LL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (signed char)-119))))) : (4592409748115715431LL)));
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                var_21 -= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 1880416926U)) ? (3724259951U) : (3724259951U))));
                arr_11 [i_3] [i_3] [i_3] [i_3] = var_13;
                var_22 &= ((/* implicit */signed char) ((arr_8 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173)))));
            }
            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)106))));
                    arr_19 [i_0] [i_0] [i_5] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) % (7425490459853129265LL)));
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_24 = ((unsigned int) 1807298640U);
                            var_25 = ((/* implicit */unsigned int) ((signed char) ((short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            }
            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(short)4] [(short)4]))) * (((((/* implicit */_Bool) 7425490459853129286LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(short)10] [(short)10] [(short)10] [(short)10] [(short)10]))) : (570707344U))));
        }
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_23 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_0 + 4] [(unsigned char)0]))));
    }
    /* vectorizable */
    for (short i_8 = 3; i_8 < 23; i_8 += 2) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) 4097915251U))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */int) (short)-16425)) + (((/* implicit */int) arr_28 [i_9 + 1] [i_8 - 3] [i_9 + 1]))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((arr_30 [i_8]) > (2919582937U))) ? (var_10) : (arr_29 [i_9 - 1] [i_9 - 1] [i_8 - 1]))))));
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_27 [i_8] [i_8])))) ? (arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_29 [i_9] [i_9] [i_9])));
        }
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -7425490459853129286LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3773))) : (0U))))))));
        var_32 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-19404)) ? (((/* implicit */long long int) ((/* implicit */int) (short)52))) : (-7425490459853129306LL))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_33 &= ((/* implicit */short) (!(((/* implicit */_Bool) 872820629U))));
        /* LoopSeq 3 */
        for (short i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            var_34 = ((/* implicit */unsigned int) arr_26 [i_12 - 1]);
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned char) 1058412691U)))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11])) ? (var_1) : (((/* implicit */long long int) 1688188934U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7425490459853129286LL)))))) : (1656744775U)));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_11])) ? (arr_29 [i_11] [i_11] [i_11]) : (arr_29 [i_12 - 1] [i_11] [i_11])));
        }
        for (signed char i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)8456))))));
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                var_39 = ((short) var_15);
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_11] [i_11] [i_11])))))));
            }
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (157))) - (24))))))));
        }
        for (unsigned int i_15 = 1; i_15 < 17; i_15 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26399)) ? (((/* implicit */int) (short)-28524)) : (((/* implicit */int) (unsigned char)249))));
            var_43 = var_11;
            var_44 = ((/* implicit */short) var_5);
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
        }
    }
    var_46 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1607000133U))))))), (min((((((/* implicit */_Bool) (short)26399)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) (short)-32739))))));
}
