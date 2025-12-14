/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236959
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */signed char) arr_1 [i_0]))))), (13056149865976261625ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */signed char) var_7))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) + (31LL)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 3] = ((/* implicit */long long int) max((max(((~(13056149865976261615ULL))), (((/* implicit */unsigned long long int) max((var_11), (arr_9 [i_0] [i_1] [i_1] [i_3])))))), (((((5390594207733289981ULL) == (((/* implicit */unsigned long long int) 0U)))) ? (((/* implicit */unsigned long long int) (-(arr_12 [i_3] [i_1] [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (10022540487386095035ULL) : (((/* implicit */unsigned long long int) var_0))))))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((var_10), (var_12)))), ((~(var_6))))), ((+(min((((/* implicit */long long int) var_12)), (var_6)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 4; i_4 < 20; i_4 += 1) 
    {
        arr_17 [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_0))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) ? (5390594207733289991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) -7724069239106167420LL))))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 4; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 4; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_21 [i_4] [i_4 + 1] [i_6] [i_7 - 3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_4])), (1040187392U))))))) : (((((/* implicit */int) ((var_8) <= (((/* implicit */int) var_1))))) / (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_7 + 3]) ? (((/* implicit */int) arr_26 [i_5] [i_6])) : (((/* implicit */int) var_5))))))));
                        arr_28 [i_4 + 1] [i_6] [i_6] [i_4 + 1] = ((/* implicit */_Bool) min((4294967295U), (3254779904U)));
                    }
                } 
            } 
            arr_29 [i_4] [i_4] [i_4] = min((var_5), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_4 - 4] [i_4 + 1] [0]))))));
        }
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                arr_34 [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8] [i_9])) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 4] [i_9 + 1] [i_9 + 1] [i_9 - 1]))) : (((((/* implicit */_Bool) 3254779912U)) ? (5390594207733289981ULL) : (5390594207733289981ULL))))), (((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_2 [i_4 - 4]))))));
                arr_35 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */unsigned char) (((+(max((var_2), (((/* implicit */unsigned long long int) arr_10 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [(unsigned short)3])))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_8 [i_4 + 1])) : (arr_24 [i_8] [i_4 - 1] [i_4 - 1] [i_4 - 3]))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_4] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) min((((5390594207733289968ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4260607557632LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) var_7))))) >= (((long long int) 1040187363U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_41 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(5390594207733289981ULL)));
                    arr_42 [i_4] [i_8] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) arr_40 [i_4] [i_8] [i_10] [i_11])))))));
                    arr_43 [i_4] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5390594207733289990ULL))));
                }
                arr_44 [i_4 - 2] [i_4] [i_4] [i_4] |= ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) 1061884387U)) : (-7578562245496545894LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (var_8))))));
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_49 [(signed char)10] [i_10] [i_10] [i_8] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) 4294967289U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) || (((/* implicit */_Bool) ((unsigned long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))))));
                            arr_50 [i_4] [i_8] [4LL] [i_10] [4LL] [i_12] |= ((/* implicit */long long int) var_8);
                            arr_51 [i_4 - 4] [i_12] [i_10] [i_12 + 1] [i_13] [i_10] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_48 [i_4] [i_8] [i_12] [i_12] [i_13] [i_12] [i_4]))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_52 [4ULL] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_45 [i_4])), (-7206804088921526508LL))) - (max((((/* implicit */long long int) var_1)), (-4260607557632LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3254779932U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (min((((/* implicit */unsigned int) var_4)), (var_0))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_8)) : (0U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)212))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)16384)), (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_47 [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_10] [i_4])))))));
            }
            arr_53 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_4 + 1] [i_4 - 4] [i_4 - 4])) ? (max((((/* implicit */unsigned long long int) arr_33 [i_4 - 1] [i_4 - 2] [i_4])), (1499018050383689055ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (-1547142381087731549LL))))));
            arr_54 [(unsigned short)16] [i_8] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (139741311) : (((/* implicit */int) var_5))))))) ? (arr_15 [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_4 - 3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_8]))) : (4294967286U))))));
            arr_55 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4])) ? (var_6) : (((/* implicit */long long int) var_0)))) : (-1547142381087731548LL))) : (((long long int) (~(var_0))))));
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            arr_58 [i_4] [i_14] [i_14] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((455879201U) ^ (1992308561U)))) : (max((((/* implicit */long long int) 2147483647)), (-3976846022310553555LL)))))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 20; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    {
                        arr_66 [i_16] [i_15 + 1] [i_14] [i_14] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)120))))))))));
                        arr_67 [i_4] [i_4] [i_4] [i_16] = ((/* implicit */long long int) max(((unsigned char)81), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((13056149865976261615ULL), (((/* implicit */unsigned long long int) var_1))))))))));
                        arr_68 [i_4] [i_4 + 1] [i_4] [i_4 + 1] &= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_45 [i_4 - 1])))) >= (((/* implicit */int) (unsigned char)29))));
                    }
                } 
            } 
        }
        arr_69 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)-11))) ? (((arr_48 [i_4] [i_4] [(unsigned char)4] [i_4] [i_4] [i_4] [i_4 - 3]) ^ (-1755824718158023240LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2251799812636672LL)) ? (((/* implicit */int) arr_31 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)44)))))))) ? (max(((~(5390594207733289983ULL))), (((/* implicit */unsigned long long int) min((arr_31 [i_4] [i_4]), (((/* implicit */signed char) arr_21 [i_4] [(short)18] [i_4] [i_4 + 1]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) -2251799812636668LL))), (2251799812636663LL))))));
    }
    var_13 = ((/* implicit */long long int) ((min((((13056149865976261637ULL) % (((/* implicit */unsigned long long int) -6803966986201701763LL)))), (var_2))) * (5390594207733289979ULL)));
}
